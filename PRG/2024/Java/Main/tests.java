class Android{
    int ram;
    int res;
    void fuck(){
        System.out.println("Shit");
    }
}

class Xiaomi extends Android{
    void shit(){
        fuck();
    }
}

public class tests{
    public static void main(String[] args){
        Xiaomi first = new Xiaomi();
        first.ram = 12;
        first.shit();
    }
}