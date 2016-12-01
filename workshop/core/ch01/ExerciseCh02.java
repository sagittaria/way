import java.io.FileReader;
import com.opencsv.CSVReader;

public class ExerciseCh02{
    public static void main(String[] args){
    	//5, 6, 13
    }
}
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