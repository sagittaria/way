public class CumulativeDailyCh04 {
	public static void main(String[] args) {
		Emp e = new Boss();
		e.setTestStr("protected - test str");
		if (e instanceof Boss) {
			Boss b = (Boss) e;
			b.setBonus(3.5);
			System.out.println(b.getBonus());
		}
		System.out.println(e.testStr);
		System.out.println(e.getName());
	}
}

class Emp {
	private String name;
	private double salary;
	protected String testStr;

	public String getTestStr() {
		return testStr;
	}

	public void setTestStr(String testStr) {
		this.testStr = testStr;
	}

	public String getName() {
		return name;
	}

	public void setName(String name) {
		this.name = name;
	}

	public double getSalary() {
		return salary;
	}

	public void setSalary(double salary) {
		this.salary = salary;
	}
}

class Boss extends Emp {
	private double bonus;

	public double getBonus() {
		return bonus;
	}

	public void setBonus(double bonus) {
		this.bonus = bonus;
	}
}