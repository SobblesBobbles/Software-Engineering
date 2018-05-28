package bmw;
import car.BMW;
import engine.Engine;
import engine.StandardEngine;
import omission.Omission;
import omission.OmissionEnvironmentFriendly;
import transmission.ManualTransmission;
import transmission.Transmission;
import wheels.AbstractWheels;
import wheels.BridgestoneStandard;

public class Series3 extends BMW {


    public Series3(){              //creates a specific car using specific types of engine, transmission, omissions and wheels

        Engine engine = new StandardEngine();
        Transmission trans = new ManualTransmission();
        engine.setTransmission(trans);
        Omission omission = new OmissionEnvironmentFriendly();
        AbstractWheels wheels = new BridgestoneStandard();
        super.setWheels(wheels);
        super.setOmission(omission);
        super.setEngine(engine);
        super.setModel("Series3");


    }

}
