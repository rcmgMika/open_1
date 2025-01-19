package com.librarymanage;
import java.util.ArrayList;
import java.lang.StringBuilder;
import javax.swing.JOptionPane;

public class database{
    public static ArrayList<book> books = new ArrayList<>();
    public static ArrayList<user> person = new ArrayList<>();
    public static Integer current_user;

    public static boolean auth(String username, String Password){
        for(int i = 0;  i < person.size(); i++){
            if(username.equals(person.get(i).username) && Password.equals(person.get(i).password)){
                current_user = i;
                return true;
            }
        }
        return false;
    }

    public static void SearchByAuthor(){
        while(true){
            Boolean if_found = false;
            String author = JOptionPane.showInputDialog(null, "Please provide an author.", "Library", JOptionPane.NO_OPTION);
            if(author == null)break;
            StringBuilder existing_books = new StringBuilder();
            for(int i = 0; i < books.size(); i++){
                existing_books.append(i+1+". ").append(books.get(i).Book_name).append("\n");
            }
            for(int i = 0; i < books.size(); i++){
                if(books.get(i).Author.contains(author)){
                    person.get(current_user).search_history.add(author+" - "+books.get(i).Author);
                    String poke = JOptionPane.showInputDialog(null, "Results:\n\n"+existing_books);
                    if_found = true;
                    if(poke == null)break;
                    Integer jam = Integer.parseInt(poke);
                    books.get(jam-1).showContents(books.get(jam-1));
                }
            }
            if(!if_found){
                JOptionPane.showMessageDialog(null, "Not found!", "Library", JOptionPane.
                NO_OPTION);
                person.get(current_user).search_history.add(author);
            }
        }
    }

    public static void SearchByGenre(){
        while(true){
            Boolean if_found = false;
            String genre = JOptionPane.showInputDialog(null, "Please provide a genre.", "Library", JOptionPane.NO_OPTION);
            if(genre == null)break;
            StringBuilder existing_books = new StringBuilder();
            for(int i = 0; i < books.size(); i++){
                existing_books.append(i+1+". ").append(books.get(i).Book_name).append("\n");
            }
            for(int i = 0; i < books.size(); i++){
                if(books.get(i).Genre.contains(genre)){
                    person.get(current_user).search_history.add(genre+" - "+books.get(i).Genre);
                    String poke = JOptionPane.showInputDialog(null, "Results:\n\n"+existing_books);
                    if_found = true;
                    if(poke == null)break;
                    Integer jam = Integer.parseInt(poke);
                    books.get(jam-1).showContents(books.get(jam-1));
                }
            }
            if(!if_found){
                JOptionPane.showMessageDialog(null, "Not found!", "Library", JOptionPane.NO_OPTION);
                person.get(current_user).search_history.add(genre);
            }
        }
    }

    public static void SearchByTitle(){
        while(true){
            Boolean if_found = false;
            String title = JOptionPane.showInputDialog(null, "Please provide a title.", "Library", JOptionPane.NO_OPTION);
            if(title == null)break;
            StringBuilder existing_books = new StringBuilder();
            for(int i = 0; i < books.size(); i++){
                existing_books.append(i+1+". ").append(books.get(i).Book_name).append("\n");
            }
            for(int i = 0; i < books.size(); i++){
                if(books.get(i).Book_name.contains(title)){
                    person.get(current_user).search_history.add(title+" - "+books.get(i).Book_name);
                    String poke = JOptionPane.showInputDialog(null, "Results:\n\n"+existing_books);
                    if_found = true;
                    if(poke == null)break;
                    Integer jam = Integer.parseInt(poke);
                    books.get(jam-1).showContents(books.get(jam-1));
                }
            }
            if(!if_found){
                JOptionPane.showMessageDialog(null, "Not found!", "Library", JOptionPane.NO_OPTION);
                person.get(current_user).search_history.add(title);
            }
        }
    }

    public static void ShowHistory(){
        if(person.get(current_user).search_history.size() == 0){
            JOptionPane.showMessageDialog(null, "You have no histories!", "Library", JOptionPane.NO_OPTION);
            return;
        }
        StringBuilder poke_me = new StringBuilder();
        for(int i = 0; i < person.get(current_user).search_history.size(); i++){
            poke_me.append((i+1)+". ").append(person.get(current_user).search_history.get(i)).append("\n");
        }
        JOptionPane.showMessageDialog(null, "Here is your history!\n"+poke_me, "Library", JOptionPane.NO_OPTION);

    }
    
}
