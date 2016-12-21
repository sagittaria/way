package interfaceTutorial;

public class RectanglePlus implements Relatable {
	private int area;

	public RectanglePlus(int area) {
		this.area = area;
	}

	public int getArea() {
		return area;
	}

	@Override
	public int isLargerThan(Relatable other) {
		RectanglePlus rOther = (RectanglePlus) other; //必须cast一下，因为如果直接用other.getArea()是过不了编译的，getArea不是Relatable类的方法
		if (this.getArea() < rOther.getArea())
			return -1;
		else if (this.getArea() > rOther.getArea())
			return 1;
		else
			return 0;
	}
	
	public static void main(String[] args){
		RectanglePlus a = new RectanglePlus(16);
		RectanglePlus b = new RectanglePlus(15);
		System.out.printf("result = %d", a.isLargerThan(b));
	}

}
