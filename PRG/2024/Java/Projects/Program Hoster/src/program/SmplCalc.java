package program;
import java.util.LinkedList;
import javax.swing.JOptionPane;

public class SmplCalc {
	//function, not main
	static LinkedList<Double> operand = new LinkedList<Double>();
	static LinkedList<String> history = new LinkedList<String>();
	static String[] options = {"+", "-", "*", "/", "%", "history", "close"};
	static String[] historyOption = {"OK", "CLEAR HISTORY"};
	static String temp = "";
		static void mainCalc() {
			while(true) {
				int var = JOptionPane.showOptionDialog(null, "Choose Operation", "Calculator", 0, 1, null, options, options[5]);
				if(var == 6) {break;}
					switch (var) {
						case 0:
							add();
							history.add(operand.get(0)+" + "+operand.get(1)+" = "+operand.get(2));
							operand.clear();
							break;
						case 1:
							minus();
							history.add(operand.get(0)+" + "+operand.get(1)+" = "+operand.get(2));
							operand.clear();
							break;
						case 2:
							times();
							history.add(operand.get(0)+" + "+operand.get(1)+" = "+operand.get(2));
							operand.clear();
							break;
						case 3:
							divide();
							history.add(operand.get(0)+" + "+operand.get(1)+" = "+operand.get(2));
							operand.clear();
							break;
						case 4:
							modulus();
							history.add(operand.get(0)+" + "+operand.get(1)+" = "+operand.get(2));
							operand.clear();
							break;
						case 5:
							printHistory();
							break;
						default: 
							System.out.println("Error");
							break;
					}
					
			}
		}
		
		static void optional() {
			temp = (JOptionPane.showInputDialog("Input First Number: "));
			if(temp == null || temp.isEmpty()) {
				mainCalc();
			}else {
				operand.add(Double.parseDouble(temp)); 
			}
			temp = (JOptionPane.showInputDialog("Input Second Number: "));
			if(temp == null || temp.isEmpty()) {
				mainCalc();
			}else {
				operand.add(Double.parseDouble(temp));
			}
		}
		static LinkedList<Double> add(){
			optional();
			operand.add(operand.get(0) + operand.get(1));
			JOptionPane.showMessageDialog(null, "Result = "+operand.get(2), "Sum", JOptionPane.INFORMATION_MESSAGE);
			return operand;
		}
		static LinkedList<Double> minus(){
			optional();
			operand.add(operand.get(0) - operand.get(1));
			JOptionPane.showMessageDialog(null, "Result = "+operand.get(2), "Difference", JOptionPane.INFORMATION_MESSAGE);
			return operand;
		}
		static LinkedList<Double> times(){
			optional();
			operand.add(operand.get(0) * operand.get(1));
			JOptionPane.showMessageDialog(null, "Result = "+operand.get(2), "Product", JOptionPane.INFORMATION_MESSAGE);
			return operand;
		}
		static LinkedList<Double> divide(){
			optional();
			operand.add(operand.get(0) / operand.get(1));
			JOptionPane.showMessageDialog(null, "Result = "+operand.get(2), "Quotient", JOptionPane.INFORMATION_MESSAGE);
			return operand;
		}
		static LinkedList<Double> modulus(){
			optional();
			operand.add(operand.get(0) % operand.get(1));
			JOptionPane.showMessageDialog(null, "Result = "+operand.get(2), "Modulo", JOptionPane.INFORMATION_MESSAGE);
			return operand;
		}
		static void printHistory(){
			if(history.isEmpty()) {
				JOptionPane.showMessageDialog(null, "History is empty!");
			}else {
				JOptionPane.showOptionDialog(null, history, "History", 0, 1, null, historyOption, historyOption[0]);
				history.clear();
			}
			
		}
}
