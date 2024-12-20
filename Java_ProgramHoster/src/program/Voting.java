package program;
import java.util.Scanner;

public class Voting {
	
	static Scanner scan = new Scanner(System.in);
	
	static class person{
		Integer age, total_votes;
		String name;
		
		person(String x, Integer y, Integer z) {
			age = y;
			name = x;
			total_votes = z;
		}
	}
	
	static void new_line() {
		System.out.println("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"
							+ "\n\n\n\n\n\n\n\n\n\n\n\n");
	}
	
	static person[] input() {
		person[] person = new person[4];
		person[0] = new person("Simoun", 18, 0);
		person[1] = new person("Robby", 18, 0);
		person[2] = new person("Asher", 18, 0);
		person[3] = new person(null, null, null);
		return person;
	}
	
	static person[] innit_vote(person[] x) {
		while(true) {
			new_line();
			
			System.out.print("This is a voting program. "
							+"Press x to exit; otherwise "
							+ "please enter your name and "
							+ "age.\n\n");
			
			System.out.print("Name: ");
			x[3].name = scan.nextLine();
			
			if(x[3].name.equalsIgnoreCase("x")) break;
			
			System.out.print("Age: ");
			x[3].age = Integer.parseInt(scan.nextLine());
			
			if(x[3].age < 18) {
				System.out.println("Invalid age.");
				continue;
			}
			
			while(true) {
				new_line();
				
				System.out.print("Welcome " +x[3].name+". "
						+ "You have successfully enter the voting"
						+ " program. You can only vote once, so vote"
						+ "wisely! Here are the candidates\n\n\t"
						+"1. " +x[0].name + "("+x[0].total_votes+")\t"
						+"2. " +x[1].name + "("+x[1].total_votes+")\t"
						+"3. "+x[2].name + "("+x[2].total_votes+")\t"
						+ "\n\nEnter vote(1-3): ");
				
				int var = Integer.parseInt(scan.nextLine());
 
				if(var >= 4 || var <= 0) {
					System.out.println("Please try again.");
					continue;
				}
				
				switch(var) {
				case 1:
					x[0].total_votes++;
					break;
				case 2:
					x[1].total_votes++;
					break;
				case 3:
					x[2].total_votes++;
					break;
				}	
				break;
			}
		}
		return x;
	}
	
	static void vote_me() {
		person[] person = input();
		person = innit_vote(person);
	}
}


