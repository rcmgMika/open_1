package program;
import java.util.Stack;
import javax.swing.JOptionPane;

public class ParenthesisChker {
	static Stack<String> userInput = new Stack<String>();
	static String[] brackets = {"(", ")", "{", "}", "[", "]"};
	static String temp = "";
	static int p = 0;
		static void inputPane() {
			userInput.push(JOptionPane.showInputDialog(null, "This program only checks one bracket\n\nInput sentence:" , "Balanced Parenthesis Checker", JOptionPane.INFORMATION_MESSAGE));
		}
		static void checker() {
			while(true) {
				inputPane();
				if(userInput.getLast()!= null) {
					temp = userInput.getLast();
					p = 0;
					for(int i = 0; i < brackets.length; i++) {
						for(int j = 0; j < temp.length(); j++) {
							if(temp.charAt(j) == brackets[i].charAt(0)) {
								for(p = 0; p < temp.length(); p++) {
									if(temp.charAt(p) == brackets[i+1].charAt(0)) {
										JOptionPane.showMessageDialog(null, "All parenthesis are balanced", "Parenthesis Checker", JOptionPane.INFORMATION_MESSAGE);
										p = 100;
										break;
									}
									if(p == temp.length()-1) {
										JOptionPane.showMessageDialog(null, "There are parentheseses that are unbalanced", "Parenthesis Checker", JOptionPane.ERROR_MESSAGE);
										p = 100;
										break;
									}
								}
								if(p == 100) {
									break;
								}
							}
						}
						if(p == 100) {
							break;
						}
					}
				}else {
					break;
				}
			}
		}
}
