public class ExerciseCh02{
    public static void main(String[] args) {
    	//5

    }
}

/* ex05
	Point p1=new Point();
	Point.printPoint(p1);
	Point p2=new Point(1.4, 2.9);
	Point.printPoint(p2);
	Point p3=p1.translate(2.7,-8.367);
	Point.printPoint(p3);
	Point p4=new Point(2, 2);
	Point p5=p4.scale(2);
	Point.printPoint(p5);
    	
class Point{
	private final double X;
	private final double Y;
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
}
*/