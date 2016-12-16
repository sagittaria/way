import java.util.Objects;


public class Point {
	private double x;
	private double y;
	public Point(double x, double y){
		this.x=x;
		this.y=y;
	}
	public double getX(){
		return x;
	}
	public double getY(){
		return y;
	}
	
	public String toString(){
		return getClass().getName()+"["+getX()+", "+getY()+"]";
	}
	
	public boolean equals(Object otherObject){
		if(this==otherObject)	return true;//检查是否引用的是同一个对象
		if(otherObject==null)	return false;//如果传来的null，必须返回false
		if(getClass()!=otherObject.getClass()) return false;//如果不是相同的class类型，返回false
		Point other = (Point) otherObject;//强行cast之后才能看到实例变量
		System.out.print("reached, ");
		return Objects.equals(x, other.x) && Objects.equals(y, other.y);//比较各个实例变量
	}
	
	public int hashCode(){
		return Objects.hash(x,y);//Objects.hash(...)可以往里传任意多个参数
	}
	
	public static void main(String[] args){
		Point p = new Point(1.5, 2.4);
		Point p2 = new Point(1.5, 2.4);
		System.out.println(p.toString());
		System.out.println("p equals p2? "+ p.equals(p2));//reached会被打印出来，所以这个比较的意思：虽然p和p2引的是不同对象，但自然意义上他们是同一个点，也没其他区别，故返回true
		LabeledPoint lp = new LabeledPoint("lp",2.3,8.7);
		System.out.println(lp.toString());
		System.out.println("p equals lp? "+ p.equals(lp));//不同类的，false（在“reached”之前就返回了）
		LabeledPoint lp2 = new LabeledPoint("lp2",2.3,8.7);
		System.out.println("lp equals lp2? "+ lp.equals(lp2));//虽然是同一个点，但是label不同
		System.out.println("p.hashCode() = " + p.hashCode());
		System.out.println("p2.hashCode() = " + p2.hashCode());
		System.out.println("lp.hashCode() = " + lp.hashCode());
		System.out.println("lp2.hashCode() = " + lp2.hashCode());
	}
}
