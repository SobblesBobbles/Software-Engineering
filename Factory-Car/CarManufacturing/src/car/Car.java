package car;
import engine.Engine;
import omission.Omission;
import wheels.AbstractWheels;

public  abstract class Car {
    private AbstractWheels wheels;      //availability of multiple types of wheels from different companies
    private Engine  engine;             // two different types of engines, includes a transmission abstract object
    private Omission omission;             //two different omission types
    private String make;
    private String model;




    Car() {

    }

   public void setWheels(AbstractWheels wheels){
        this.wheels = wheels;
    }
   public void setEngine(Engine engine){
        this.engine = engine;
    }
    public void setOmission(Omission omission){
        this.omission = omission;
    }
    public void setMake(String make){
        this.make = make;
    }
    public void setModel(String model){
        this.model = model;
    }


    public String toString() {
        return "Make : "+make+"\nModel " +model+"\nWheels_______ \n" + wheels + "\n\nEngine________" + engine + "\n\nOmission______" + omission+"\n ///////////////////// \n \n";
    }
}
