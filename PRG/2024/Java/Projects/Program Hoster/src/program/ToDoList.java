package program;
import javax.swing.JOptionPane;
import java.util.Stack;

public class ToDoList {
	static Stack<String> list = new Stack<>();
	static Stack<Integer> menu = new Stack<>();
	static String temp;
	static String[] option_1 = {"Add", "Remove", "See-list", "Close"};
	static int count, introduction, var;
	
	
	
	static int intro() {
		var = JOptionPane.showOptionDialog(null, "Pick an option from the list"
				+ "\n", "To Do List", 1, 0, null, option_1, option_1[0]);
		return var;
	}
	
	static void add() {
		while(true) {
			temp = JOptionPane.showInputDialog(null, "Enter a goal or Close/Cancel to back\n\n", "To Do List"
					+ "", JOptionPane.INFORMATION_MESSAGE);
			if(temp == null) break;
			list.push(temp);
			count++;
		}
	}
	
	static StringBuilder current_list() {
		StringBuilder temp_me = new StringBuilder();
		int num = 1;
		for(String kick : list) {
			temp_me.append(num+++". "+kick+"\n");
		}
		return temp_me;
	}
	
	static void remove() {
		String[] record = new String[count+1];
		if(list.isEmpty()) {
			JOptionPane.showMessageDialog(null, "The list is empty", "To Do List", JOptionPane.ERROR_MESSAGE);
			return;
		}
		
		for(int i = 0; i <= count; i++) {
			if(i == count) {
				record[i] = "Back";
				break;
			}
			record[i] = Integer.toString(i+1);		
		}
		
		var = JOptionPane.showOptionDialog(null, "Choose what to remove\n\n", "To Do List", 1, 0, null, record, record[0]);
		if(record[var].compareTo("Back") == 0) return;
		list.remove(var);
		count--;
	}
	
	static void see_list() {
		if(list.isEmpty()) {
			JOptionPane.showMessageDialog(null, "The list is empty", "To Do List", JOptionPane.ERROR_MESSAGE);
			return;
		}
		JOptionPane.showMessageDialog(null, "List of Goals\n"+current_list(), "To Do List", JOptionPane.INFORMATION_MESSAGE);
	}
	
	static void main() {
		menu.push(1);
		while(!menu.isEmpty()) {
			introduction = intro();
			if(introduction == 3) menu.pop();
			
			switch(introduction) {
				case 0: add(); break;
				case 1: remove(); break;
				case 2: see_list(); break;
			}
		}
	}
}
