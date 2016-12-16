import java.util.Objects;


public class LabeledPoint extends Point{
	private String label;
	public LabeledPoint(String label, double x, double y){
		super(x,y);
		this.label=label;
	}
	public String getLabel(){
		return label;
	}
	public String toString(){
		return super.toString()+"("+getLabel()+")";
	}	
	public boolean equals(Object otherObject){
		if(!super.equals(otherObject))	return false;//先用父类的equals方法，如果不通过，肯定不相等
		LabeledPoint lp = (LabeledPoint) otherObject;//强制转换之后才能看到的label域
		return label==lp.label;//比较子类独有的实例变量
	}
	public int hashCode(){
		return Objects.hash(label,getX(),getY());
	}
}
