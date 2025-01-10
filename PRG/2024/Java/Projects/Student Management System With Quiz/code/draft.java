import java.util.Stack;
import javax.swing.JOptionPane;

public class draft{
    public static void main(String[] args){

        String[] answers= new String[10]; String[] authenticate = new String[2]; String[] validUserPass = {"r", "1"}; 
        Stack<Integer> stack = new Stack<Integer>(); stack.push(10); stack.push(1); stack.push(2); stack.push(3); stack.push(4);
        Stack<String> usage = new Stack<String>(); usage.push("Valid");
        String[] ui_start = {"Subject", "Grade", "Log out"}; String[] subjects = {"FOPR", "Cancel"};
        String[] quiz_options = {"QUIZ 1", "Cancel"};
        String[] quiz_1_first_question = {"A list of related data types", "A list of non-related data types", "It is only one element", "None of the above"};
        String[] quiz_1_second_question = {"A loop is an iteration of similar codes", "A loop is a collection of similar code", "This is a format specifier for printing a variable", "All of the above"};
        String[] quiz_1_third_question = {"a.", "b.", "c.", "d."};

        int user_answers = 0, start = 0, continues = 0, authentication, rightAnswerCounter = 0, ui_sub;
        int[] rightAnswersQ = {0, 0, 1};
            
            while(stack.empty() == false){
                authenticate[0] = JOptionPane.showInputDialog(null, "Enter username: ");
                if(authenticate[0] == null){
                    break;
                }
                authenticate[1] = JOptionPane.showInputDialog(null, "Enter password: ");
                if(authenticate[0] == null){
                    break;
                }
                    while(stack.search(10) != -1){
                        if(authenticate[0].equals(validUserPass[0]) == true && authenticate[1].equals(validUserPass[1]) == true){
                            
                            int ui_main = JOptionPane.showOptionDialog(null, null,"Student UI", 0, 1, null, ui_start, ui_start[0]);
                            if(stack.search(3) == -1){
                                stack.push(3);
                            }
                            if(ui_main == 0){
                                while(stack.search(3) != -1){
                                    int ask = JOptionPane.showOptionDialog(null, "Choose subject", "Subject", 0, 1, null, subjects, subjects[0]);
                                        if(ask == 0){
                                            ask = JOptionPane.showOptionDialog(null, "Choose", "Quiz", 0, 1, null, quiz_options, quiz_options[0]);
                                                if(ask == 0 && usage.search("Valid") != -1){
                                                    int firstq = JOptionPane.showOptionDialog(null, "What is an array?", "Question 1", 0, 3, null, quiz_1_first_question, quiz_1_first_question[0]);
                                                    int secondq = JOptionPane.showOptionDialog(null, "What is a loop?", "Question 2", 0, 3, null, quiz_1_second_question, quiz_1_second_question[0]);
                                                    int thirdq = JOptionPane.showOptionDialog(null, "Choose the right naming convention of variable\n\na. Variables can hava numbers as their first letter\nb. Variables can have letters and numbers, but cannot have a numbe ras its first letter\nc. Variables cannot have numbers\nd. None of the above", "Question 3", 0, 3, null, quiz_1_third_question, quiz_1_third_question[0]);
                                                        if(firstq == rightAnswersQ[0]){rightAnswerCounter++;}; if(secondq == rightAnswersQ[1]){rightAnswerCounter++;}; if(thirdq == rightAnswersQ[2]){rightAnswerCounter++;};
                                                        if(rightAnswerCounter >= 2 && rightAnswerCounter <= 3){
                                                            JOptionPane.showMessageDialog(null, "Congrats! Your score is "+rightAnswerCounter);
                                                            stack.remove((Integer)3);
                                                        }else{
                                                            JOptionPane.showMessageDialog(null, "You failed. Your score is "+rightAnswerCounter);
                                                            stack.remove((Integer)3);
                                                        }
                                                        usage.remove(0);    
                                                }else if(ask == 1){
                                                    stack.remove(2);
                                                }else if(usage.search("Valid") == -1){
                                                    JOptionPane.showMessageDialog(null, "You already answered the quiz!");
                                                }
                                        }else if(ask == 1){
                                            stack.remove((Integer)3);
                                        }
                                }
                            }else if(ui_main == 1){
                                if(stack.search(4) == -1){
                                    stack.add(4, 4);
                                }
                                while(stack.search(4) != -1){
                                    ui_sub = JOptionPane.showOptionDialog(null, "Choose Subject", "Grade", 0, 1, null, subjects, subjects[0]);
                                        if(ui_sub == 0){
                                            if(JOptionPane.showOptionDialog(null, "Quiz Grade", "Grade", 0, 1, null, quiz_options, quiz_options[0]) == 0){
                                                JOptionPane.showMessageDialog(null, rightAnswerCounter+"/3");
                                            }
                                        }else if(ui_sub == 1){
                                            stack.remove((Integer) 4);
                                            ui_main = 3;
                                        }
                                }
                            }else{
                                break;
                            }
                        }
                        
                    }
            }
    }
}