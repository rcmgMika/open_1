package program;
import javax.swing.JOptionPane;
import java.util.Stack;

public class Timer {
	public static Stack<String> minsSec = new Stack<String>();
	String temp = "";
	
	public static void main(String[] args) {
		Timer clock = new Timer();
		clock.timerStart(minsSec);

	}

	public void timerInput() {
		minsSec.push(JOptionPane.showInputDialog(null, "Enter Hours", "Timer", JOptionPane.QUESTION_MESSAGE));
		minsSec.push(JOptionPane.showInputDialog(null, "Enter Minutes", "Timer", JOptionPane.QUESTION_MESSAGE));
		minsSec.push(JOptionPane.showInputDialog(null, "Enter Seconds", "Timer", JOptionPane.QUESTION_MESSAGE));
	}
	public void timerStart(Stack<String> bitch) {
		for(int hrs = 0; hrs <= 24; hrs++) {
			for(int mins = 0; mins <= 60; mins++) {
				for(int secs = 0; secs <= 60; secs++) {
					temp = (hrs+":"+mins+":"+secs);
					try{
						Thread.sleep(1000);
					}catch(InterruptedException e){
						e.printStackTrace();
					}
					JOptionPane.showMessageDialog(null, temp, "Timer", JOptionPane.INFORMATION_MESSAGE);
				
				}
			}
		}
	}
	
	
}
