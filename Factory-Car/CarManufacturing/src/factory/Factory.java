package factory;
import bmw.MiniCooper;
import bmw.Series3;
import bmw.Series5;
import car.Car;

public class Factory {


    public static void main (String [] args) {      //main


    //AbstractWheels set1 = new MichelonSports();

   // System.out.println(set1);


    Car Make1 = new Series5();

    System.out.println(Make1);

    Car make2 = new Series3();

    System.out.println(make2);

    Car make3 = new MiniCooper();

    System.out.println(make3);



    }
}
