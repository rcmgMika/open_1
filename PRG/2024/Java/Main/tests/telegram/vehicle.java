package tests.telegram;

public class vehicle {
    String type;
    car[] cars;

    vehicle(String type, car[] cars){
        this.type = type;
        this.cars = cars;
    }

    void printModels(){
        System.out.println("The models available for "+this.type+" are:");
        for(car cars : this.cars){
            System.out.println(cars.modelDetail());
        }
    }
}
