package tests.telegram;

public class car {
    String model;
    int year;
    car(String model, int year){
        this.model = model;
        this.year = year;
    }

    String modelDetail(){
        return "The model is "+this.model+" and its year of creation is "+this.year;
    }
}
