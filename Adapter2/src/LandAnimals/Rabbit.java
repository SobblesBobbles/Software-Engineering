package LandAnimals;
public class Rabbit implements LandAnimalBehaviour{

	String type;
	String color;
	
	public Rabbit(){
		type="Default";
		color="Default Color";
		
	}
	
	public Rabbit(String type, String color) {
		this.type = type;
		this.color = color;
	}
	
	@Override
	public void Eat() {
		System.out.println(this.getClass()+" is eating.");
	}
	@Override
	public void Run() {
		System.out.println(this.getClass()+" is running.");
		
	}
	@Override
	public void Jump() {
		System.out.println(this.getClass()+" is jumping.");
	}
}
