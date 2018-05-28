package bmw;
import car.Mini;
import engine.Engine;
import engine.StandardEngine;
import omission.Omission;
import omission.OmissionStandard;
import transmission.ManualTransmission;
import transmission.Transmission;
import wheels.AbstractWheels;
import wheels.BridgestoneStandard;

public class MiniCooper extends Mini {

     public MiniCooper(){
       Engine engine = new StandardEngine();
       Transmission trans = new ManualTransmission();
       AbstractWheels wheels = new BridgestoneStandard();
       Omission omission = new OmissionStandard();

       engine.setTransmission(trans);
       super.setEngine(engine);
       super.setWheels(wheels);
       super.setOmission(omission);
       super.setModel("Mini Cooper Standard");
    }
}
