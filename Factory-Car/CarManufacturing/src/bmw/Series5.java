package bmw;
import car.BMW;
import engine.Engine;
import engine.SportsEngine;
import omission.Omission;
import omission.OmissionStandard;
import transmission.AutomaticTransmission;
import transmission.Transmission;
import wheels.AbstractWheels;
import wheels.BridgestoneSpecial;

public class Series5 extends BMW {

    public Series5(){          //creates a specific type of car with a specific type of engine, transmission, omissions and wheels

        Engine engine = new SportsEngine();
        Transmission trans = new AutomaticTransmission();
        engine.setTransmission(trans);
        Omission omission = new OmissionStandard();
        AbstractWheels wheels = new BridgestoneSpecial();
    super.setWheels(wheels);
    super.setOmission(omission);
    super.setEngine(engine);
    super.setModel("Series 5");


    }


}
