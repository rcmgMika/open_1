package com.librarymanage;
import java.util.ArrayList;

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

    public static void SearchByAuthor(String author){
        for(int i = 0; i < books.size(); i++){
            if(author == books.get(i).Author){
                System.out.println("Found it!");
            }
        }
    }

    public static void SearchByGenre(){

    }
    
}
