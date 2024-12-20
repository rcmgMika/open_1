Program Hoster

	This is a program that hosts various programs with JOptionPane. This will use concepts
	such as access modifiers, wrapper classes, linkedlists, stack, and the executable prog
	-ram will be accessible outside the system through installing the JDK along with the p
	-rogram to ensure that users without java can access the program.
	
Algorithm :

	Simple Calculator |
		1. Initialize double return no parameter functions with all the operators(add, minus, 
		   times, divide, modulus) with returns. 
		2. In those functions, use JOptionPane to let users input with a standard GUI.
		3. What those functions' will return are the sum, difference, product, quotient, 
		   and the remainder result.
		4. Initialize a main function that has no parameter 
		   and has an OptionPane that has all the operation functions. 
		5. Make a function that contains the history of the operation made.
		
	ToDOList |
		1. Initialize a string stack and joptionpane
		2. Prompt user for option: add, remove, see list, or close
		3. If add, prompt user for input or goal and push the input in the stack
		4. If remove, show the user the indeces of the stack, up to 5, and the sixth option will be next if the stack's 
		   size is greater than five, and the seventh is back
		4.1. if back, get back to no.2
		5. If next, iterate no.4
		6. If close, close the program


	Student Record System |
		1. Create a linkedlist that takes an age, name, and grades as a single object
		2. Prompt user if record or close
		3. If record, prompt user if add, change, remove, view, or back
		3.1. if add, prompt user for name, age, grades
		3.2. if change, prompt user for the index
		3.2.1 prompt user if name change, age change, or grades change
		3.2.1.1. if name, prompt user for name
		3.2.1.2. if age, prompt user for age
		3.2.1.3. uf grades prompt user for grades
		3.3. if view, show user the list
		3.4. if back, return to no.2
		4. If close, exit the loop


	Sudoku Validator |
		1. Input a grid, although just a 3x3 grid, and their corresponding indexes with already existing values
		2. Scan the grid for their existing index values; compare the existing values and then initialize into
		   another array the non-existing values 
		3. Randomize the placement of each value of that non-existing array of values
		4. Input that array into the grid
		5. Show the solved grid

	Voting System |
		1. Initialize a static person class with age, name, and number of votes. 
		2. Ask user for age and name
		2.1. if age is <17, message user invalid age; go back to no.1
		2.2. else, proceed
		3. Show message the voting system CLI(intro) with current candidates and show their current votes after their name
 		3.1. Ask user if he will vote
 		4. If yes, prompt user:
 		4.1 if no, end program
 		5. go back to no.1 and update the vote count

	Balanced Parenthesis Checker |
		1. Open a gui that accepts string inputs
		2. If a corresponding character in the string contains the three types of brackers:
			2.1. if true, the type of bracket in an array containing these will only scan 2 indexes
				2.1.1. if the searching algorithm finds a missing value from those two indexes, return inbalanced parenthesis found
				2.1.2 else return balanced parenthesis
		3. If the string contains none of the three types of brackets, go back to no.1
		
	Palindrome Checker |
		1. Open a gui with three options: Integer, string, close
		2. If integer, make a gui that lets integer inputs; initialize a backward searching algorithm and assign it's value 
		   to a relative array; then check if those values are equal to each other using wrapper classes; if true, there is
		   the value is a palindrome, else return the value is not a palindrome
			2.1. If string, make a gui that lets integer inputs; initialize a backward searching algorithm and assign it's value 
		   		to a relative array; then check if those values are equal to each other using wrapper classes; if true, there is
		   		the value is a palindrome, else return the value is not a palindrome
			2.2. if close, break the loop starting with no.2

		
		
Pseudocode:
	import linkedlist
	import joptionpane

	Simple Calculator | 
		public class method{
			static linkedlist<Double> operands;
			static Linkedlist<String> history;
			String[] options = {all operations(+), history}

			static void mainCalc(){
					while(true){
						int var = OptionPane(message: null, title: "Calculator", array);
						if(var == 6) {break;}
							switch (var){
								case 1:
									add();
									history.add(operand.get(0)+" + "+operand.get(1)+" = "+operand.get(2));
									operand.clear();
									break;
								case 2: 
									minus();
									history.add(operand.get(0)+" + "+operand.get(1)+" = "+operand.get(2));
									operand.clear();
									break;
								case 3:
									times();
									history.add(operand.get(0)+" + "+operand.get(1)+" = "+operand.get(2));
									operand.clear();
									break;
								case 4:
									divide();
									history.add(operand.get(0)+" + "+operand.get(1)+" = "+operand.get(2));
									operand.clear();
									break;
								case 5:
									modulus();
									history.add(operand.get(0)+" + "+operand.get(1)+" = "+operand.get(2));
									operand.clear();
									break;
								default:
									prntln("Error");
									break;
								}
					}
			}
			static LinkedList<Double> add(){
				operand.add(Double.parseDouble(JOptionPane.showInputDialog("Input First Number: ")));
				operand.add(Double.parseDouble(JOptionPane.showInputDialog("Input First Number: ")));
				operand.add(operand.get(0) + operand.get(1));
				JOptionPane.showMessageDialog(null, "Result = "+operand.get(2), "Sum", JOptionPane.INFORMATION_MESSAGE);
				return operand;
			}
			static LinkedList<Double> minus(){
				operand.add(Double.parseDouble(JOptionPane.showInputDialog("Input First Number: ")));
				operand.add(Double.parseDouble(JOptionPane.showInputDialog("Input First Number: ")));
				operand.add(operand.get(0) - operand.get(1));
				JOptionPane.showMessageDialog(null, "Result = "+operand.get(2), "Difference", JOptionPane.INFORMATION_MESSAGE);
				return operand;
			}
			static LinkedList<Double> times(){
				operand.add(Double.parseDouble(JOptionPane.showInputDialog("Input First Number: ")));
				operand.add(Double.parseDouble(JOptionPane.showInputDialog("Input First Number: ")));
				operand.add(operand.get(0) * operand.get(1));
				JOptionPane.showMessageDialog(null, "Result = "+operand.get(2), "Product", JOptionPane.INFORMATION_MESSAGE);
				return operand;
			}
			static LinkedList<Double> divide(){
				operand.add(Double.parseDouble(JOptionPane.showInputDialog("Input First Number: ")));
				operand.add(Double.parseDouble(JOptionPane.showInputDialog("Input First Number: ")));
				operand.add(operand.get(0) / operand.get(1));
				JOptionPane.showMessageDialog(null, "Result = "+operand.get(2), "Quotient", JOptionPane.INFORMATION_MESSAGE);
				return operand;
			}
			static LinkedList<Double> modulus(){
				operand.add(Double.parseDouble(JOptionPane.showInputDialog("Input First Number: ")));
				operand.add(Double.parseDouble(JOptionPane.showInputDialog("Input First Number: ")));
				operand.add(operand.get(0) % operand.get(1));
				JOptionPane.showMessageDialog(null, "Result = "+operand.get(2), "Modulo", JOptionPane.INFORMATION_MESSAGE);
				return operand;
			}
			static void printHistory(){
				Messagedialog(history);
			}
		}
	
	To Do List |
	import joptionpane
	import stack

	public class{
		static stack<string> list; stack<integer> menu; String temp;
		int count, index, [64]record, introduction, var;
		option 1 = {add, remove, see list, close};
		option 2 = 

		int intro(){
			var = OptionDialog(null, "Pick an option from the list", "To Do List", 1, 0, null, option_1, option_1[0]);
			return var;
		}

		void add(){
			while(true){
				temp = InputDialog(null, "Enter #stack number goal", "To Do List", INFOMESS);
				if(temp == null) break;
				count++;
			}
		}

		void remove(){
				for(int i = 0; i < count; i++){
					record[i] = i+1;
					if(i % 7 == 0){
						var = OptionDialog(null, "Choose a number from the list to remove\n"+current_list(), "To Do List", 1, 0, null, initialize_me(), initialize_me());
						if(var%6 == 0) continue;
						if(var%7 == 0) break;
						p.remove(var);
						record[var] = 0;
					}
				}
		}

		static StringBuilder current_list(){
			StringBuilder temp_me = new StringBuilder();
			int num;
			for(stack<string> kick : list){
				num++;
				temp_me.append(num+" "+kick+"\n");
			}
		}

		void see_list(){
			MessageDialog(null, "List of Goals\n", "To Do List", INFOMESS);
		}

		static void main(){
			menu.push(1);
			while(menu != empty){
				introduction = intro(); 
				if(introduction == close) menu.pop(); 

				switch(introduction){
					case 1: add(); break;
					case 2: remove(); break;
					case 3: see_list(); break;
				}
			}	
		}




	Student Record System |
	import joptionpane
	import linkedlist
	Input panes should have strings as their placeholder because of the cancel button returning null and
	making the program unusable. And then just typecast it if not null.

	class student{
		name.
		age.
		grade.

		contructor();
		override();
	}

	public class{
		static linkedlist<student> students;
		static String[] option_1 = {record, close};
		static String[] option_2 = {add, change, remove, view, back}
		static String[] option_3 = {name, age, grade}
		static int var, change_me, counter = 0;
		static bool no_student = false;

		static StringBuilder record(Linkedlist<student> x){
			StringBuilder temp = new StringBuilder();
			for(students var = x){
				temp.append("- ").append(var).append("\n");
			}
			return temp;
		}

		bool introduction(){
			var = OptionDialog(null, "Welcome! This is a student record system. Please choose the options., Student Record System", 1, 0, null, option_1, option_1[1]);
			if(var) return true;
			return false;
		}

		void body(){
			while(true){
				var = OptionDialog(null, "Please choose what to do.", "Student Record System", 1, 0, null, option_2, option_2[4]);

				if(var == 4){
					MessageDialog(null, "Transferring to home page...", "Student Record System", INFODIALOG);
					break;
				}

				switch(var){
					case 0: --ADD
						if(if_there_are_students){
							students.add((typecase)new student(InputDialog(null, "List of Students\n"+students.getFirst(record(students))+"\nEnter name"), InputDialog(null, "Enter age", "Studen Record System", INFODIALOG), InputDialog(null, "Enter grade", "Studen Record System", INFODIALOG));
						}else{
							students.add((typecase)new student(InputDialog(null, "List of Students\n\n\nEnter name"), InputDialog(null, "Enter age"), InputDialog(null, "Enter grade"));
							if_there_are_students = true;
						}
						MessageDialog(null, "Successfully Created!");
						break;
					case 1: --CHANGE 
						while(true){
							if(!if_there_are_students){
							MessageDialog(null, "There are no edits to be done. Please add a student first to the list.", "Studen Record System", INFODIALOG);
						}
						change_me = InputDialog(null, "List of Students\n"+students.getFirst(record(students))+"\nPlease enter what number of student in the list that you want to change., "Student Record System", INFODIALOG);

						if(var > students.size || var < 0){
							MessageDialog(null, "Invalid index.", "Student Record System", ERRORDIALOG);
							continue;

						}
						break;
						}

						var = OptionDialog(null, "List of Students\n"+students.getFirst(record(students))+"\nWhat do you want to change?", "Studen Record System", 0, 1, null, option_3, option_3[0]);


						switch(var){
							case 0:
								students.get(change_me).name = InputDialog(null, "Enter new name", "Student Record System", INFODIALOG);
								MessageDialog(null, "Name changed succesfully!", "Studen Record System", INFODIALOG);
								break;
							case 0:
								students.get(change_me).age = (typecast)InputDialog(null, "Enter new age", "Student Record System", INFODIALOG);
								MessageDialog(null, "Name changed succesfully!", "Studen Record System", INFODIALOG);
								break;
							case 0:
								students.get(change_me).grade = (typecast)InputDialog(null, "Enter new grade", "Student Record System", INFODIALOG);
								MessageDialog(null, "Name changed succesfully!", "Student Record System", INFODIALOG);
								break;
							default:
								MessageDialog(null, "Transferring to home screen...", "Student Record System", INFODIALOG);
								break;
						}
						break;
					case 2: --REMOVE
						if(if_there_are_students){
							var = InputDialog(null, "List of Students\n"+students.getFirst(record(students))+"\nEnter the number or index of a student that you want to remove", "Student Record System", INFODIALOG);
							students.remove(var);
							MessageDialog(null, "Removed Successfully!", "Student Record System")
						}else{
							MessageDialog(null, "Please add a student to the list first.", "Student Record System", ERRORDIALOG);
						}
						break;
					case 3:	--VIEW
						if(if_there_are_students){
							MessageDialog(null,	"List of Students\n"+students.getFirst(record(students))+, "Student Record System", INFODIALOG)
						}else{
							MessageDialog(null, "Please add a student to the list first.", "Student Record System", ERRORDIALOG);
						}
						break;
				}

			}


		}

		void main(){
			
			while(true){
				if(introduction()){
					body();
				}else{
					break;
				}

			}
		}

	}









	Sudoku Validator |
	import joptionpane
	import stack
	import random

		public class{
			static stack<int> = unsolved, stack<int> = perfect
			static array[int] existingValue;
			static int counter, jindex, temp;
			random = randomize
			array<string> options = {1-9, "done", "clear" "exit program"};
			array<string> options2 = {yes, "go back", "exit program"}

			static void zeroAssignment(stack){
				stack.push(null);//unsolved
				stack.push(null);
				stack.push(null);
				stack.push(null);
				stack.push(null);
				stack.push(null);
				stack.push(null);
				stack.push(null);
				stack.push(null);
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

			static void solver(){
			counter = 0;
				while(true){
					for(int j = 0; j < 9; j++){
						if(unsolved.get(i) == perfect.get(counter)){
							perfect.remove(counter);
								break;
						}
					}
					if(counter == 9){
						break;	
					}
					counter++;
				}
				for(int i = 0; i<9; i++){
					if(unsolved.get(i) == null){
						unsolved.add(1, perfect.pop())
					}
				}
			}

			static void gridInput(){
			counter = 0;
				messageDialog(null, "Welcome! This is a sudoku solver. Just input a 3x3 grid, with specific indexes, and it'll be auto solved!", "Sudoku Solver", information);//intro

				while(true){
					int var = optionpane(null, "|"+unsolved.get(0)+"|"+unsolved.get(1)+"|"+"|"+unsolved.get(2)+"\n"+
														 "|"+unsolved.get(3)+"|"+unsolved.get(4)+"|"+"|"+unsolved.get(5)+"\n"+
														 "|"+unsolved.get(6)+"|"+unsolved.get(7)+"|"+"|"+unsolved.get(8)+"\n"+
														 +"\n\n"+
														 "Input values to their corresponding index. Input zero if the value is non-existent in the grid. Press the numbers/indexes to input values in them", "Sudoku Validator", 0, 1, null, options, options[0]);

					if(var == 9){
							int var2 = optionpane(null, "Solve it?", "Sudoku Validator", 1, 0, null, option2, option2[2]);
							if(var2 == yes){
								solver();
								messagepane(null, "|"+unsolved.get(0)+"|"+unsolved.get(1)+"|"+"|"+unsolved.get(2)+"\n"+
														 "|"+unsolved.get(3)+"|"+unsolved.get(4)+"|"+"|"+unsolved.get(5)+"\n"+
														 "|"+unsolved.get(6)+"|"+unsolved.get(7)+"|"+"|"+unsolved.get(8)+"\n"+
														 +"\n\n"+);
								unsolved.clear();
								break;
							}else if(var2 == go back){
								continue;
							}else if(var2 == exit program){
								break;
							}
					}else if(var == 10){
						unsolved.clear();
						continue;
					}else if(var == 11){
						break;
					}

						unsolved.add(var, parseInt(inputpane("|"+unsolved.get(0)+"|"+unsolved.get(1)+"|"+"|"+unsolved.get(2)+"\n"+
														 "|"+unsolved.get(3)+"|"+unsolved.get(4)+"|"+"|"+unsolved.get(5)+"\n"+
														 "|"+unsolved.get(6)+"|"+unsolved.get(7)+"|"+"|"+unsolved.get(8)+"\n"+
														 +"\n\n"+input existing value at index "+var)));	
				}
			}

		}



	Voting System(static) |
	import scanner;

	public class{
		static person{
			age.
			name.
			total_votes.
		}
		static Scanner<String> vote_me = new Scanner<String>(System.in);

		vote(){ - main
			person[3] = input(); 
			person[3] = innit_vote(person[3]);
		}

		static void new_line(){
			sysout("\n\n\n\n\n\n\\n\n\n\n\n\n\\n\n\n\n\n\n\n\n\n\n\n\n\n\n\\n\n\n\n\n\n\n");
		}
		static person[] input(){
			person array;
			person[0] = (18, "Simoun", 0);
			person[1] = (18, "Robby", 0);
			person[2] = (18, "Asher", 0);
			person[3];
			return person array;
		}

		static person[] innit_vote(person array){
			while(true){
				new_line();
				sysout("This is a voting program. Please enter your name and age.\n\nName: ");
				person[3].name = vote_me.nextLine();
				sysout("Enter your age: ");
				person[3].age = vote_me.nextInt();
				
				if(person[3].age <= 18) continue;

				while(true){
					new_line();
					sysout("Welcome ", +person[3].age+". You have successfully entered the voting program. You can only vote once, so vote wisely! Here are the canditates
					\n\n+person[0-2].name+"("+person[0-2].total_votes+")"+"\n\nEnter vote(0-2): ");

					nextInt();
					person[3].total_votes = nextInt();

					if(person[3].total_votes != 0-2){
						sysout("Please try again.");
						continue;
					}

					new_line();
					sysout("Voted successfully! Proceed to log out. [Press any key and enter]");

					nextLine();

					switch(person[3].total_votes){
						case 0:
							person[0].total_votes++;
							break;
						case 1:
							person[1].total_votes++;
							break;
						case 2:
							person[2].total_votes++;
							break;
					}

					break;

				}
			}
		}


	}




	Balanced Parenthesis Checker |
	import joptionpane
	import stack
		public class{
			static stack<str> userinput;
			static string[] brackets = {(, ), {, }, [, ]}
			static string temp;
			static int i = 0, j = 0, p = 0;

			static void usrInp(){
				stack.push(inputpane = string)

			}
			static void checker(){
				usrInp();
				temp = stack.getlast();
				for(i = brackets.length()){
					for(j = temp.lenght){
						if(temp.charAt(j) == brackets.charAt(i)){
							for(p == temp.lenght){
								if(temp.charAt(p) == brackets(i+1).charAt(0)){
									messageDialog("All parenthesis are balanced");
									p = 100;
									break;
								}
								if(p == temp.length){
									messageDialog("The string has an unabalanced parenthesis");
									p = 100;
									break;
								}
							}
						}
						if(p == 100 || p == 200){
							break;
						}
					}
					if(p == 100 || p == 200){
						break;
					}
				}
			}
		}



	Palindrome Checker |

	import joptionpane
	import linkedlist

		public class{
			static Linkedlist<int> integerType;
			static Linkedlist<string> stringType;
			static String[] options = {"Integer", "String", "Close"};
			static string temp, temp2;
			static int counter;

			static void palindrome(){
				while(true){
					int var = optionpane(null, null, Palindrom Checker, 0, null, null, options, options(close));
					if(var is close){break;};
					switch(trie){
						case 0:
						case 1:
						default:
					}
				}
			}
			static void inputLink(){
					stringType.add(inputpane);
					counter++;
			}
			static linkedlist<int> reverseSortInt(int x){
				if(x == 0){
					inputLinke();
					temp2 = stringType.get(counter);
					for(int i = temp2.lenght; i < 0; i--){
						temp = temp2.charAt[i];
					}
					if(temp.equalsTo(temp2)){
						messagedialog("The value is a palindrome!", "Palindrome Checker", INFORMATIONMESSAGE);
						integerType.add(temp);
					}else{
						messagedialog("The value is not a palindrome.", "Palindrome Checker", ERRORMESSAGE);
						integerType.remove(counter);
					}
				}else{
					inputLinke();
					temp2 = stringType.get(counter);
					for(int i = temp2.lenght; i < 0; i--){
						temp = temp2.charAt[i];
					}
					if(temp.equalsTo(temp2)){
						messagedialog("The value is a palindrome!", "Palindrome Checker", INFORMATIONMESSAGE);
						stringType.add(temp);
					}else{
						messagedialog("The value is not a palindrome.", "Palindrome Checker", ERRORMESSAGE);
						stringType.remove(counter);
					}
				}

			}
		}

