package engine;
import transmission.ManualTransmission;
import transmission.Transmission;

public class StandardEngine extends Engine {

    public StandardEngine(){           //type of engine
        Transmission normalTranmission = new ManualTransmission();
        super.setEverything("Clutch 20PP",9,"340-19-11",normalTranmission);
    }
}
