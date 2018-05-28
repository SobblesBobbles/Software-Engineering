package LandAnimals;
import SeaAnimals.SeaAnimalBehaviour;
import SeaAnimals.Shark;

public class landToSea implements SeaAnimalBehaviour{
	
	Rabbit r;
	
	public landToSea(Rabbit r) {
		this.r = r;
	}
	

	
	public void Swim() {
		r.Run();
	}
	
	

}
