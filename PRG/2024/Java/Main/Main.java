//Program 1 : Calculator with stack, user input, and GUI of JOptionPane
/*
    import java.util.Scanner;
    import javax.swing.JOptionPane;
    import java.util.Stack;

    public class Main{
        public static void main(String[] args){

            Stack<Double> stack = new Stack<Double>();
            Scanner scanner = new Scanner(System.in);
                double n, m, result, temp, temp_;
                        n = Double.parseDouble(JOptionPane.showInputDialog("Enter first number"));
                        stack.push(n);
                            System.out.print("Enter operation: ");
                            char operation = scanner.next().charAt(0);
                        m = Double.parseDouble(JOptionPane.showInputDialog("Enter second number"));
                        stack.push(m);
            temp = stack.pop();
            temp_ = stack.pop();
                            if(operation == '+'){
                                result = temp_ + temp;
                                    JOptionPane.showMessageDialog(null, "Result: "+result);
                            }else if(operation == '-'){
                                result = temp_ - temp;
                                    JOptionPane.showMessageDialog(null, "Result: "+result);
                            }else if(operation == '*'){
                                result = temp_ * temp;
                                    JOptionPane.showMessageDialog(null, "Result: "+result);
                            }else if(operation == '/'){
                                result = temp_ / temp;
                                    JOptionPane.showMessageDialog(null, "Result: "+result);
                            }else if(operation == '%'){
                                result = temp_ % temp;
                                    JOptionPane.showMessageDialog(null, "Result: "+result);
                            }else{
                                System.out.println("\n\n\nInvalid input...");
                            }
        }
    }
*/


// Program 2 : Calculator with only user input
/*
    import java.util.Scanner;

    public class Main{
        public static void main(String[] args){
            Scanner scanner = new Scanner(System.in);
                System.out.print("Enter number: ");
                float num1 = scanner.nextFloat();
                System.out.println(num1);
                System.out.print("Enter operator: ");
                char operator = scanner.next().charAt(0);
                System.out.print("Enter number: ");
                float num2 = scanner.nextFloat();
                float result;
                    if(operator == '+'){
                        result = num1 + num2;
                        System.out.println("Result: "+result);
                    }else if(operator == '-'){
                        result = num1 - num2;
                        System.out.println("Result: "+result);
                    }else if(operator == '*'){
                        result = num1 * num2;
                        System.out.println("Result: "+result);
                    }else if(operator == '/'){
                        result = num1 / num2;
                        System.out.println("Result: "+result);
                    }else if(operator == '%'){
                        result = num1 % num2;
                        System.out.println("Result: "+result);
                    }else{
                        System.out.println("Invalid input...");
                    }
        }
    }
*/
/*
// Area of the circle and it's circumference
public class Main{
    public static void main(String[] args){
        double pi = 3.14159;
        double radius = -10;
        double area = pi * (Math.abs(radius)*(Math.abs(radius)));
        double circumference = (2 * pi) * Math.abs(radius);
            System.out.println("The area of the circle is "+area+"\nThe circumference of the circle is "+circumference);
            System.out.println(radius);//this is proof that operations made from a print statement stays only in that line
            System.out.println((--radius));//this is proof that increment/decrement & augmented assignment operators affect also the following lines
            System.out.println(radius);
    }
}
 */
/*
// Random number generator
import java.util.Random;
    public class Main{
        public static void main(String[] args){
            Random rand = new Random();
                int random = rand.nextInt();
                int random2 = rand.nextInt(10)+1;//With a limiter value of 10(this sets the limit of the random, kinda
            //like the modulus in C that sets the limit. And we also have + 1 because computers start at zero);
                System.out.println(random);
                System.out.println(random2);

        }
}
*/


/* SQUARE ROOT - Heron's Method 
public class Main{
    public static void main(String[] args){
        
        double a = 5;
            System.out.println(a);
        double xn = (a+1)/2;
            System.out.println(xn);
        double x1 = 0.5 * (xn + (a/xn));
            System.out.println(x1);
                for(int i = 0; i<10; i++){
                    x1 = 0.5 * (x1 + (a/x1));
                    System.out.println(x1);; 
                } 
    }
}
*/


/* FIBONACCI SEQUENCE 
public class Main{
    public static void main(String[] args){
        long zero = 0;
        long a = 1;
        long result = zero + a;
        long result2 = result;
            for(int i = 0; i<50; i++){
                result = a + result2;
                a = result2;
                result2 = result;
                System.out.println(result);
            }
    }
}
*/


/* ROW AND COLUMN NESTED LOOP
 
import java.util.Scanner;

public class Main{
    public static void main(String[] args){
        Scanner m = new Scanner(System.in);
        System.out.print("Enter number of rows: ");
        int var = m.nextInt();
        System.out.print("Enter number of columns: ");
        int var1 = m.nextInt();
        System.out.print("Enter symbol: ");
        String s = m.next();
            for(int i = 1; i <= var; i++){
                System.out.println();
                for(int j = 1; j <= var1; j++){
                    System.out.print(s);
                }
            }
            m.close();
        }
    }
*/



/*  WEBSITE CLEAR HISTORY (with stacks)


import java.util.Stack;
import java.util.Scanner;

public class Main{
    public static void main(String[] args){
        Stack<String> history = new Stack<String>();
        Scanner scanner = new Scanner(System.in);
        String[] web = new String[3];

            for(int i = 0; i < web.length; i++){
                System.out.print("Enter website: ");
                web[i] = scanner.nextLine();
                history.push(web[i]);
            }
            System.out.println("\n\nYour history is: "+history);
            System.out.print("Do you want to delete them? ");
            String choice = scanner.nextLine();

                if(choice.compareToIgnoreCase("yes") == 0){
                    System.out.print("In that case, do you want to remove your whole history(1) or remove a specific one(2)? ");
                    int result = scanner.nextInt();
                        if(result == 1){
                            history.clear();
                            System.out.println("History is now cleared: "+history);
                        }else{
                            System.out.print("Enter specific index from 0-2: ");
                            int result1 = scanner.nextInt();
                                if(result1 == 0){
                                    history.remove(0);
                                    System.out.println("Your history: "+history);
                                }else if(result1 == 1){
                                    history.remove(1);
                                    System.out.println("Your history: "+history);
                                }else{
                                    history.remove(2);
                                    System.out.println("Your history: "+history);
                                }
                        }
                }else{
                    System.out.println("Have fun!");
                }
    }
}
    */

    