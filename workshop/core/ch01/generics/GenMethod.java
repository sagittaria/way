package generics;

public class GenMethod {

	public static <T> void display(T t) { //这行里的 <T> 表明 display 方法里等会出现的T是泛型。 
		System.out.println(t.getClass()); //不写上的话编译器就不认识参数列表里的T，它会认为T应该是个具体的类
	}

//	public static <T> int countGreaterThan(T[] anArray, T elem) {<---------------不行：object不能用大于号比大小
	public static <T extends Comparable<T>> int countGreaterThan(T[] anArray, T elem) {
		int count = 0;
	    for (T e : anArray){
	        //if (e > elem){ //<-----------------不行：不能用大于号来比较object，int、short这些基本类型才能用
	        if (e.compareTo(elem) > 0){ //解决办法：要求传进来的T必须是实现了Comparable接口、里面的compareTo方法的类
	            ++count;
	        }
	    }
	    return count;
	}
	
	public static void main(String...strings ){
		display(123);//class java.lang.Integer
		display("abc");//class java.lang.String
		display(213f);//class java.lang.Float
	}
}
