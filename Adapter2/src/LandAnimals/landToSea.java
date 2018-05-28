package LandAnimals;
import SeaAnimals.SeaAnimalBehaviour;
import SeaAnimals.Shark;

public class landToSea implements SeaAnimalBehaviour{
	
	Rabbit r = new Rabbit();
	

	
	public void Swim() {
		r.Run();
	}
	
	

}
