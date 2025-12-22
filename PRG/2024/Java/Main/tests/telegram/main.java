package tests.telegram;

public class main {
    public static void main(String[] args) {
        car sedan = new car("Sedan", 1994);
        car jeep = new car("Jeepney", 1995);
        car[] cars = {sedan, jeep};

        for(car model : cars){
            System.out.println(model.modelDetail());
        }
    }
}
