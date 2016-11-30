
public class Employee implements Measurable{
	private String name;
	private double salary=0.0;
	public Employee(String name, double salary){
		this.name=name;
		this.salary=salary;
	}
	public double getMeasure(){
		return salary;
	}
	public String getName(){
		return name;
	}
}
