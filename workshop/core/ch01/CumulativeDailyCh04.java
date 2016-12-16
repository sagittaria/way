public class CumulativeDailyCh04 {
	private enum Size {BIG, MEDIUM, LARGE};
	
	public enum Day {
	    SUNDAY, MONDAY, TUESDAY, WEDNESDAY,
	    THURSDAY, FRIDAY, SATURDAY 
	}
	Day day;
		
	public CumulativeDailyCh04(Day day){
		this.day = day;
	}
	
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
		
		for(Size s : Size.values()){
			System.out.println(s);
		}
		
		Object obj = new Emp();
		Class<?> cl = obj.getClass();
		System.out.println("Class name: "+cl.getName());
		
		//从官方文档补Enum type(http://docs.oracle.com/javase/tutorial/java/javaOO/enum.html)
		CumulativeDailyCh04 today = new CumulativeDailyCh04(Day.TUESDAY);
		today.tell();
		CumulativeDailyCh04 yesterday = new CumulativeDailyCh04(Day.MONDAY);
		yesterday.tell();
		CumulativeDailyCh04 zhouliu = new CumulativeDailyCh04(Day.SATURDAY);
		zhouliu.tell();
		CumulativeDailyCh04 workday = new CumulativeDailyCh04(Day.THURSDAY);
		workday.tell();
	}
	
	public void tell() {
		switch (day) {
		case MONDAY:
			System.out.println("星期一");
			break;
		case TUESDAY:
			System.out.println("周二");
			break;
		case SATURDAY:
		case SUNDAY:
			System.out.println("周末！");
			break;
		default:
			System.out.println("平常工作日，就这样吧");
		}
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