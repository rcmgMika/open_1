import java.util.LinkedList;
import javax.swing.JOptionPane;

class node{
    int age;
    String name;

    node(int x, String y){
        age = x;
        name = y;
    }

    //override
    public String toString(){
        return "Age: "+age+" Name: "+name;
    }

    StringBuilder record(LinkedList<node> x){
        StringBuilder temp = new StringBuilder();
        for(node var : x){
            temp.append("- ").append(var).append("\n");
        }
        return temp;
    }
}



public class LL_2024{
    

    
    public static void main(String[] args){
        LinkedList<node> obj = new LinkedList<>();

        obj.add(new node(102, "sdw"));
        obj.add(new node(10, "Akim"));
        //StringBuilder temp = new StringBuilder();

       // for(node var : obj){
       //     temp.append("- ").append(var).append("\n");
       // }
       //JOptionPane.showMessageDialog(null, temp);
        
       obj.get(0).age = 1;
        System.out.println(obj.get(0));

    }
}