package com.librarymanage;
import java.util.ArrayList;
import javax.swing.JOptionPane;
import java.lang.StringBuilder;

class book{
    String Book_name;
    String Genre;
    String Author;
    ArrayList<String> Contents = new ArrayList<String>();

    public book(){}

    public book(String NameofBook, String Author, String Genre){
        this.Book_name = NameofBook;
        this.Author = Author;
        this.Genre = Genre;
    }
    

    void showContents(book book){
        String[] options = {"Next Page", "Make Favourite", "Go Back"};
        String[] options_2 = {"Next Page", "Previous Page","Make Favourite", "Go Back"};
        Integer index = 0, option_1_manager = null, option_2_manager = null;
        while(true){
            if (index == 0){
                option_1_manager = JOptionPane.showOptionDialog(null, book.Author+"\n"+book.Book_name+"\n"+book.Genre+"\n\n"+book.Contents.get(index), book.Book_name, 0, 1, null, options, options[2]);
                    if(option_1_manager == null || option_1_manager == 2){
                        break;
                    }else if(option_1_manager == 0){
                        index++;
                    }else if(option_1_manager == 1){
                        database.person.get(database.current_user).favourites.add(book);
                    }
            }else{
                option_2_manager = JOptionPane.showOptionDialog(null, "\n\n"+book.Contents.get(index), book.Book_name, 0, 1, null, options_2, options_2[2]);
                    if(option_2_manager == null || option_2_manager == 3){
                        break;
                    }else if(option_2_manager == 0){
                        index++;
                    }else if(option_2_manager == 1){
                        index--;
                    }else if(option_2_manager == 2){
                        database.person.get(database.current_user).favourites.add(book);
                    }
                    if(index >= book.Contents.size()){
                        index = book.Contents.size()-1;
                    }
            }
           

        }
    }
}

class user extends book{
    String username;
    String password;
    String date_of_registration;
    ArrayList<book> favourites = new ArrayList<book>();
    ArrayList<String> history = new ArrayList<String>();
    ArrayList<String> search_history = new ArrayList<>();
}

class SignUp extends user{
    private static String[] UI = {"Log In", "Sign In", "Exit"};
    
    public static Integer index(){
        return JOptionPane.showOptionDialog(null, "Welcome to Robby's Library! Please choose what to do.", "Library", 0, 1, null, UI, UI[0]);
    }

    public static Boolean log_in(){
        while(true){
            String if_valid_user = JOptionPane.showInputDialog(null, "Input username", "Library", JOptionPane.NO_OPTION);
            String if_valid_pass = JOptionPane.showInputDialog(null, "Input password", "Library", JOptionPane.NO_OPTION);
                if(if_valid_pass == null || if_valid_user == null){
                    return false;
                }
                if(!database.auth(if_valid_user, if_valid_pass)){
                    JOptionPane.showMessageDialog(null, "Invalid username/password", "Library"+"\n", JOptionPane.ERROR_MESSAGE);
                    continue;
                }
                return true;
        }
    }

    public static void sign_up(){
        user sig = new user();
        sig.username = JOptionPane.showInputDialog(null, "Enter username", "Library", JOptionPane.NO_OPTION);
        sig.password = JOptionPane.showInputDialog(null, "Enter password", "Library", JOptionPane.NO_OPTION);
        database.person.add(sig);
    }
}

class libr{
    private static String[] options = {"Find Book", "Favourites", "History", "Log Out"};
    
    public static Integer libr_module(){
        return JOptionPane.showOptionDialog(null, "Welcome to Robby's open-sourced library! Please enjoy your stay.", "Library", 0, 1, null, options, options[3]);
    }

    public static void libr_favourites(user user){
        if(user.favourites.size() == 0){
            JOptionPane.showMessageDialog(null, "You have no favourites as of now! Come again later!", "Library", JOptionPane.NO_OPTION);
            return;
        }
        StringBuilder temp = new StringBuilder();
        for(int i = 0; i < user.favourites.size(); i++){
            temp.append(i+1).append(". ").append(user.favourites.get(i).Book_name).append("\n");
        }
        String list_of_favourites = JOptionPane.showInputDialog(null, "Current Favourite/s:\n"+temp, "Library", JOptionPane.NO_OPTION);
        if(list_of_favourites == null)return;
        Integer book_index = Integer.parseInt(list_of_favourites);
        user.showContents(user.favourites.get(book_index-1));
    }



}
