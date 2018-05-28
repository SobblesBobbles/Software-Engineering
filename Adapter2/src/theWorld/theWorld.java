package theWorld;

import LandAnimals.LandAnimalBehaviour;
import LandAnimals.Rabbit;
import LandAnimals.landToSea;
import SeaAnimals.SeaAnimalBehaviour;
import SeaAnimals.Shark;

public class theWorld {

	public static void main(String[] args) {
		
		
		/*
		 * Although I do not pass an objects for conversion. The Rabbit_Adapter_Shark creates a Rabbit object 
		 * that implements the behaviour of a Shark but uses its own methods when the implementation is ran.
		 * 
		 * Swim- Although Swim is a shark Behaviour, the Rabbit_Adapter_Shark converts the Swim method into a Run method,
		 * the equivalent of Swim to a Rabbit object. Although this is not traditional to the Adapter Pattern, 
		 * It was fun to implement. 
		 */
		
		landToSea rabbit_Adapter_Shark = new landToSea();
		
		//this outputs that the Rabbit is running, not that the Rabbit is Swimming, Adapting the method to its logical 
		// Equivalent. 
		rabbit_Adapter_Shark.Swim();
		

	}

}
