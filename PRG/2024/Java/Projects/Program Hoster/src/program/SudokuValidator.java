package program;
import javax.swing.JOptionPane;
import java.util.Stack;


public class SudokuValidator {
	static Stack<Integer> unsolved = new Stack<Integer>();
	static Stack<Integer> perfect = new Stack<Integer>();
	static int counter;
	static String[] options = {"1", "2", "3", "4", "5", "6", "7", "8", "9", "done", "clear", "exit program"};
	static String[] options2 = {"yes", "go back", "exit program"};
	
	static void nullAssignment() {
		unsolved.push(0);
		unsolved.push(0);
		unsolved.push(0);
		unsolved.push(0);
		unsolved.push(0);
		unsolved.push(0);
		unsolved.push(0);
		unsolved.push(0);
		unsolved.push(0);
		perfect.push(1);
		perfect.push(2);
		perfect.push(3);
		perfect.push(4);
		perfect.push(5);
		perfect.push(6);
		perfect.push(7);
		perfect.push(8);
		perfect.push(9);
	}
	
	static void solver() {
		
		while(true) {
			for(int i = 0; i < perfect.size(); i++) {
				for(int j = 0; j < 9; j++) {
					if(unsolved.get(j) == perfect.get(i)) {
						perfect.remove(i);
						--i;
						break;
					}
				}
			}
			for(int i = 0; i < 9; i++) {
				if(unsolved.get(i) == 0) {
					unsolved.remove(i);
					unsolved.add(i, perfect.pop());
				}
			}
			break;
		}
	}
	
	static void gridInput() {
		
		JOptionPane.showMessageDialog(null, "Welcome! This is a Sudoku Solver. Just input a 3x3 grid, with each value at their "
				+"specific indexes.\nAnd it will auto solve!", "Sudoku Solver", JOptionPane.INFORMATION_MESSAGE);
		
		while(true) {
			int var = JOptionPane.showOptionDialog(null, "| "+unsolved.get(0)+" | "+unsolved.get(1)+" | "+unsolved.get(2)+"\n"+
					 "| "+unsolved.get(3)+" | "+unsolved.get(4)+" | "+unsolved.get(5)+"\n"+
					 "| "+unsolved.get(6)+" | "+unsolved.get(7)+" | "+unsolved.get(8)+"\n"+
					 "\n\nInput values to their corresponding index. Input zero if the value is "
					 + "non-existent in the grid. Press the numbers/indexes to input values in them"
					 , "Sudoku Validator", 0, 1, null, options, options[0]);
			
			if(var == 9) {
				int var2 = JOptionPane.showOptionDialog(null, "Solve it?", "Sudoku Validator", 1, 0, null, options2, options2[0]);
				if(var2 == 0) {
					solver();
					JOptionPane.showMessageDialog(null, "| "+unsolved.get(0)+" | "+unsolved.get(1)+" | "+unsolved.get(2)+"\n"+
							 "| "+unsolved.get(3)+" | "+unsolved.get(4)+" | "+unsolved.get(5)+"\n"+
							 "| "+unsolved.get(6)+" | "+unsolved.get(7)+" | "+unsolved.get(8)+"\n"+
							 "\n\n");
					continue;
				}else if(var2 == 1) {
					continue;
				}else if(var2 == 2) {
					break;
				}
			}else if(var == 10) {
				unsolved.clear();
				nullAssignment();
				continue;
			}else if(var == 11) {
				break;
			}
			
			unsolved.add(var, Integer.parseInt(JOptionPane.showInputDialog("|"+unsolved.get(0)+" |"+unsolved.get(1)+" |"+unsolved.get(2)+"\n"+
					 "|"+unsolved.get(3)+" |"+unsolved.get(4)+" |"+unsolved.get(5)+"\n"+
					 "|"+unsolved.get(6)+" |"+unsolved.get(7)+" |"+unsolved.get(8)+"\n"+
					 "\n\n"+"input existing value at index "+(var+1))));
			
			if(var<=9 && var>=1) {
				unsolved.remove(var+1);
			}
		}
	}
	static void Sudoku() {
		nullAssignment();
		gridInput();
	}
	
}
