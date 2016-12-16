package exception;//这个包是mooc-java第8周-异常

import java.util.Scanner;

public class ExceptionDemo {
	public static void main(String[] args){
		int[] a = new int[10];
		int idx;
		Scanner in = new Scanner(System.in);
		idx = in.nextInt();
		try{
			a[idx]=10;
			System.out.println("hello");
		} catch(ArrayIndexOutOfBoundsException e){
			System.out.println("exception caught!");
			throw e;//（可以不处理异常）继续抛出，等下个catcher抓到这里抛出的异常再处理
		}
		in.close();
		
		try{
			errorMaker();//在外面函数里出的错
		} catch(Exception e){
			System.out.println("errorMaker has been stopped!");
			System.out.println(e.getMessage());
			System.out.println(e);
			e.printStackTrace();//显示函数调用轨迹
		}
	}
	
	public static void errorMaker(){
		int [] a = new int[1];
		a[2]=5;
	}
}
