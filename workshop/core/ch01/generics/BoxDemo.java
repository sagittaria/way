package generics;

public class BoxDemo {
	public static <U> void addBox(U u, java.util.List<Box<U>> boxes) {
		Box<U> box = new Box<>();
		box.set(u);//把T类型的私有成员t赋值为u
		boxes.add(box);//就是普通的List.add操作
	}

	public static <U> void outputBoxes(java.util.List<Box<U>> boxes) {
		int counter = 0;
		for (Box<U> box : boxes) {
			U boxContents = box.get();//取出私有成员t
			System.out.println("Box #" + counter + " contains ["
					+ boxContents.toString() + "]");
			counter++;
		}
	}

	public static void main(String[] args) {
		java.util.ArrayList<Box<Integer>> listOfIntegerBoxes = new java.util.ArrayList<>();
		BoxDemo.<Integer> addBox(Integer.valueOf(10), listOfIntegerBoxes);
		BoxDemo.<Integer> addBox(15, listOfIntegerBoxes);//直接写数字也行，估计是自动装箱的
		BoxDemo.addBox(Integer.valueOf(20), listOfIntegerBoxes);//可以省略<Integer>的
		BoxDemo.addBox(Integer.valueOf(30), listOfIntegerBoxes);
		BoxDemo.outputBoxes(listOfIntegerBoxes);
		
	}
}
