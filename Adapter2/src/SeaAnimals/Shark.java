package SeaAnimals;

public class Shark implements SeaAnimalBehaviour{
	
	String type;
	
	public Shark(String type) {
		this.type = type;
	}
	
	@Override
	public void Swim() {
		System.out.println(this.getClass()+" is swimming.");
	}

}
