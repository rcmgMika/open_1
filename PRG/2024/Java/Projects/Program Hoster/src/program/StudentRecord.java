package program;
import javax.swing.JOptionPane;
import java.util.LinkedList;

class student{
	String name;
	Integer age, grade;
	
	student(String x, Integer y, Integer z){
		name = x;
		age = y;
		grade = z;
	}
	
	public student(int int1, String showInputDialog) {
		// TODO Auto-generated constructor stub
	}

	//override
	public String toString() {
		return "Name: "+name+" Age: "+age+" Grade: "+grade;
	}
}

public class StudentRecord {
	static LinkedList<student> students = new LinkedList<>();
	static String[] option_1 = {"Record", "Close"};
	static String[] option_2 = {"add", "change", "remove", "view", "back"};
	static String[] option_3 = {"name", "age", "grade"};
	static boolean if_there_are_students = false;
	static int var, change_me, counter = 0, student_counter;

	static StringBuilder record(LinkedList<student> students, int index) {
		StringBuilder temp = new StringBuilder();
		int temporary = 0;
		for(student var : students) {
			temporary++;
			temp.append(temporary+". ").append(var).append("\n");
		}
		return temp;
	}
	
	static boolean introduction() {
		int unique = JOptionPane.showOptionDialog(null, "Test", "Student record System"
								               , 1, 0, null, option_1, option_1[0]);
		if(unique == 0) return true;
		return false;
	}
	
	static void body() {
		while(true) {
			var = JOptionPane.showOptionDialog(null, "Please choose what to do",
					"Studen Record System", 1, 0, null, option_2, option_2[4]);
			
			if(var == 4) {
				JOptionPane.showMessageDialog(null, "Transferring to home page...",
					"Student Record System", JOptionPane.INFORMATION_MESSAGE);
				break;
			}
			
			switch(var) {
				case 0:
					if(if_there_are_students) {//Input panes should have strings as their placeholder because of the cancel button returning null and
												//making the program unusable.
						students.add(new student(JOptionPane.showInputDialog(null, ""
										+ "List of students\n\n"+record(students, student_counter)+"\nEnter name", "Student Record System",
										JOptionPane.INFORMATION_MESSAGE), 
										Integer.parseInt(JOptionPane.showInputDialog(null, "List of students\n"+record(students, student_counter)+"\nEnter age",
										"Student Record System", JOptionPane.INFORMATION_MESSAGE)), Integer.parseInt(JOptionPane.showInputDialog(null,
												"Enter grade", "Studen Record System", JOptionPane.ERROR_MESSAGE))));
					}else {
						students.add(new student(JOptionPane.showInputDialog(null, ""
										+ "List of students\n\n\nEnter name", "Student Record System",
										JOptionPane.INFORMATION_MESSAGE), 
										Integer.parseInt(JOptionPane.showInputDialog(null, "List of students\n"+record(students, student_counter)+"\nEnter age",
										"Student Record System", JOptionPane.ERROR_MESSAGE)), Integer.parseInt(JOptionPane.showInputDialog(null,
												"Enter grade", "Studen Record System", JOptionPane.ERROR_MESSAGE))));
						if_there_are_students = true;
					}
					JOptionPane.showMessageDialog(null, "Successfully Created", "Student Record System", JOptionPane.INFORMATION_MESSAGE);
					student_counter++;
					break;
				case 1:
						if(!if_there_are_students) {
							JOptionPane.showMessageDialog(null, "There are no edits to be done. Please add a student first to the list.",
									"Student Record System", JOptionPane.ERROR_MESSAGE);
							break;
						}
						
						change_me = Integer.parseInt(JOptionPane.showInputDialog(null, "List of students\n\n"+record(students, student_counter)+"\nPlease enter "
								+ "what number of student in the list thtat you want to change.", "Student Record System", JOptionPane.INFORMATION_MESSAGE));
						change_me--;
						if(var > students.size() || var < 0) {
							JOptionPane.showMessageDialog(null, "Invalid index", "Student Record System", JOptionPane.ERROR_MESSAGE);
							break;
						}
						
						var = JOptionPane.showOptionDialog(null, "List of students\n\n"+record(students, student_counter)+"\n\nWhat do you want to change?",
								"Studen Record System", 1, 0, null, option_3, option_3[0]);
						
						switch(var) {
							case 0:
								students.get(change_me).name = JOptionPane.showInputDialog(null, "Enter new"
										+ " name", "Student Record System", JOptionPane.INFORMATION_MESSAGE);
								break;
							case 1:
								students.get(change_me).age = Integer.parseInt(JOptionPane.showInputDialog(null, "Enter new"
										+ " age", "Student Record System", JOptionPane.INFORMATION_MESSAGE));
								break;
							case 2:
								students.get(change_me).grade = Integer.parseInt(JOptionPane.showInputDialog(null, "Enter new"
										+ " grade", "Student Record System", JOptionPane.INFORMATION_MESSAGE));
								break;
							default:
								JOptionPane.showMessageDialog(null, "Transferring to home screen...", "Student Record System", JOptionPane.INFORMATION_MESSAGE);
								break;
						}
					break;
				case 2:
					if(if_there_are_students) {
						var = Integer.parseInt(JOptionPane.showInputDialog(null, "List of Students\n"+record(students, student_counter)+"\n\nEnter the number or"
								+ " index of a student that you want to remove", "Student Record System", JOptionPane.INFORMATION_MESSAGE));
						var--;
						students.remove(var);
						student_counter--;
						JOptionPane.showMessageDialog(null, "Remove Successfully!", "Student Record System", JOptionPane.INFORMATION_MESSAGE);
						if(student_counter <= 0) if_there_are_students = false;
					}else {
						JOptionPane.showMessageDialog(null, "Please add a student to the list first.", "Student Record System", JOptionPane.ERROR_MESSAGE);
					}
					break;
				case 3:
					if(if_there_are_students) {
						JOptionPane.showMessageDialog(null, "List of Students\n"+record(students, student_counter), "Student Record System", JOptionPane.INFORMATION_MESSAGE);
					}else {
						JOptionPane.showMessageDialog(null, "Please add a student to the list first.", "Student Record System", JOptionPane.ERROR_MESSAGE);
					}
					break;
			}
		}
	}
	
	
	
	static void main() {
		while(true) {
			if(introduction()) {
				body();
			}else {
				break;
			}
		}
	}
	
	
	
}
