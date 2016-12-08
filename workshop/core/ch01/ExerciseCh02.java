import java.io.FileReader;
import java.time.LocalDate;

import com.opencsv.CSVReader;
import static java.lang.System.out;//ex11
/**
 * 这是习题7的作业
 * 本行是描述吗？本行是描述吗？本行是描述吗？
 * @author ksy
 * @version 1.0
 */
public class ExerciseCh02{
	/**
	 * 习题7作业-变量注释地球上每年的天数
	 */
	public static final int DAYS_PER_YEAR = 360;
    public static void main(String[] args){
    	//1, 5, 6, 7, 9, 11, 12, 13
    	out.println("import static java.lang.System.out");
    }
    /**
     * 习题7作业-方法注释
     * @param a 第一个加数
     * @param b 第二个加数
     * @return 两数之和
     */
    public static int add(int a, int b){
    	return a+b;
    }
}


/* ex09
    	Car bentley = new Car(50.);
    	bentley.addGas(100.);
    	bentley.getStatus();
    	bentley.drive(10.);
    	bentley.getStatus();
    	bentley.addGas(20.);
    	bentley.getStatus();
    	bentley.drive(30.);
    	bentley.getStatus();

class Car{
	private final double eff;//efficiency
	private double dis=0;//distance
	private double gas=0;
	
	public void getStatus() {
		System.out.printf("It's %.1f miles away from origin, and only %.1f gas left in the tank.\n", dis, gas);
	}

	public Car(double eff)
	{
		this.eff=eff;
		System.out.printf("A new Car of %.1f%% efficiency created.\n", eff);
	}
	public void drive(double ddis)//ddis - delta distance
	{
		dis+=ddis;
		gas-=(ddis/eff*100);
		System.out.printf("moved %.1f more miles\n", ddis);
	}
	public void addGas(double gas)
	{
		this.gas+=gas;
		System.out.printf("add %.1f gas, %.1f left in the tank.\n", gas, this.gas);
	}
}
*/

/* ex01
	LocalDate now = LocalDate.of(2016, 10, 20);//System.out.println(now);
	int firstDayInMonth = now.minusDays(now.getDayOfMonth()-1).getDayOfWeek().getValue();//一个月的第一天是星期几
	int lengthOfMonth = now.lengthOfMonth();
	
	System.out.print("sun mon tue web thu fri sat\n");
	for(int j=0;j<(firstDayInMonth%7);j++){
		System.out.print("    ");
	}
	for(int i=1; i<=lengthOfMonth;i++){
		System.out.printf("%3d ",i);
		if((i+firstDayInMonth)%7==0) System.out.println();
	}
*/

/* ex13
    public static void main(String[] args) throws Exception{
    	//5, 6, 13
    	CSVReader reader = new CSVReader(new FileReader("E:\\test-ex13.csv"));
        String [] nextLine;
        while ((nextLine = reader.readNext()) != null) {
           // nextLine[] is an array of values from the line
           System.out.println(nextLine[0] + " " + nextLine[1] + " etc...");
        }
    }
*/

/* ex05, ex06
	Point p1=new Point();
	Point.printPoint(p1);
	Point p2=new Point(1.4, 2.9);
	Point.printPoint(p2);
	Point p3=p1.translate(2.7,-8.367);
	Point.printPoint(p3);
	Point p4=new Point(2, 2);
	Point p5=p4.scale(2);
	Point.printPoint(p5);
 	Point p6=new Point(3,4).translate(1, 3).scale(0.5);
	Point.printPoint(p6);

class Point{
	private final double X;//private double X;//for ex06
	private final double Y;//private double Y;//for ex06
	public Point(){
		this.X=0.0;
		this.Y=0.0;
	}
	public Point(double X, double Y){
		this.X=X;
		this.Y=Y;
	}
	public double getX(){
		return this.X;
	}
	public double getY(){
		return this.Y;
	}
	public Point translate(double deltX, double deltY){
		return new Point(this.X+deltX,this.Y+deltY);
	}
	public Point scale(double fac){
		return new Point(this.X*fac,this.Y*fac);
	}
	public static void printPoint(Point p){
		System.out.printf("(%.2f,%.2f)\n", p.getX(), p.getY());
	}
	public void translateM(double deltX, double deltY){
		this.X+=deltX; // remove "final" before compiling
		this.Y+=deltY;
	}
	public void scaleM(double fac){
		this.X*=fac; // remove "final" before compiling
		this.Y*=fac;
	}
}
*/