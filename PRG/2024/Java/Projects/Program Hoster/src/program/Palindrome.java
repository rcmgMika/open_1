package program;
import java.util.LinkedList;
import javax.swing.JOptionPane;

public class Palindrome {
	//function, not main
	static LinkedList<Integer> integerType = new LinkedList<>();
	static LinkedList<String> stringType = new LinkedList<String>();
	static String[] options = {"Integer", "String", "Close"};
	static String temp ="", temp2=""; static char[] trial = new char[124];
	static int counter = 0;

	static void palindrome(){
		while(true){
			int var = JOptionPane.showOptionDialog(null, "Check for Palindrome", "Palindrome Checker", 0, 1, null, options, options[2]);
			if(var == 2){break;};
			switch(var){
				case 0:
					reverseSortInt(0);
					break;
				case 1:
					reverseSortInt(1);
					break;
				default:
					break;
			}
		}
		
	}
	static void inputLink(){
			stringType.add(JOptionPane.showInputDialog("Enter value: "));
	}
	static void reverseSortInt(int x){
		if(x == 0){
			inputLink();
			temp2 = stringType.getLast();
			temp = "";
			for(int i = temp2.length()-1; i >= 0; i--){
				trial[i] = temp2.charAt(i);
				temp += trial[i];
			}
			integerType.add(Integer.parseInt(temp2));
			stringType.removeLast();
			if(temp.equals(temp2)){
				JOptionPane.showMessageDialog(null, "The value: "+integerType.getLast()+" is a palindrome!", "Palindrome Checker", JOptionPane.INFORMATION_MESSAGE);
				return;
			}else{
				JOptionPane.showMessageDialog(null, "The value: "+integerType.getLast()+" is not a palindrome.", "Palindrome Checker", JOptionPane.ERROR_MESSAGE);;
				integerType.removeLast();
				return;
			}
		}else{
			inputLink();
			temp2 = stringType.getLast();
			temp = "";
			for(int i = temp2.length()-1; i >= 0; i--){
				trial[i] = temp2.charAt(i);
				temp += trial[i];
			}
			if(temp.equals(temp2)){
				JOptionPane.showMessageDialog(null, "The value: "+stringType.getLast()+" is a palindrome!", "Palindrome Checker", JOptionPane.INFORMATION_MESSAGE);
				return;
			}else{
				JOptionPane.showMessageDialog(null, "The value: "+stringType.getLast()+" is not a palindrome.", "Palindrome Checker", JOptionPane.ERROR_MESSAGE);
				stringType.removeLast();
				return;
			}
		}
	}
}
