package program;
import javax.swing.JOptionPane;

public class Main{
	public static void main(String[] args) {

		String[] options = {"Calculator", "ToDoList", 
							"Sudoku Solver", "Student Record", "Vote",
							"Parenthesis Checker", "Palindrome", "Close"};
		
		while(true) {
			int var = JOptionPane.showOptionDialog(null, "This is a program hoster!\nPick "
												   + "from the options below:\n\n\n",
												   "Program Hoster", 1, 0, null, options, 
												   options[0]);
			if(var == 7) break;
			
			switch(var) {
			case 0: SmplCalc.mainCalc(); break;
			case 1: ToDoList.main(); break;
			case 2: SudokuValidator.Sudoku(); break;
			case 3: StudentRecord.main(); break;
			case 4: Voting.vote_me(); break;
			case 5: ParenthesisChker.checker(); break;
			case 6: Palindrome.palindrome(); break;
			}	
		}


	}
}
