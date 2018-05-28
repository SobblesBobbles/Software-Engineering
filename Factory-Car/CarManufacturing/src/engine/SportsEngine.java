package engine;
import transmission.AutomaticTransmission;
import transmission.Transmission;

public class SportsEngine extends Engine {

    public SportsEngine(){             //type of engine

    Transmission sportsTranmission = new AutomaticTransmission();
    super.setEverything("Sports Clutch 500XA",13,"400-10-89",sportsTranmission);

    }
}
