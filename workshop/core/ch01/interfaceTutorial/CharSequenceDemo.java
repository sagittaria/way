/* java-tutorial练习题
 * Exercise 1: Write a class that implements the CharSequence interface found in the java.lang package. 
 * Your implementation should return the string backwards. Select one of the sentences from this book 
 * to use as the data. Write a small main method to test your class; make sure to call all four methods.*/
package interfaceTutorial;

public class CharSequenceDemo implements CharSequence{

	private String s;
	
	public CharSequenceDemo(String s){
		this.s = s;
	}
	
	@Override
	public char charAt(int arg0) {
		if(arg0<0 || arg0>=length()){
			throw new StringIndexOutOfBoundsException();
		}
		return s.charAt(arg0);
	}

	@Override
	public int length() {
		return s.length();
	}

	@Override
	public CharSequence subSequence(int arg0, int arg1) {
		int start = arg0<0?0:arg0;
		int end = arg1>length()?length():arg1;
		StringBuilder sub = new StringBuilder(s.subSequence(start, end));		
		return sub.reverse().toString();
	}
	
	public String toString(){
		StringBuilder s = new StringBuilder(this.s);
		return s.reverse().toString();
	}
	
	public static void main(String... args){
		CharSequenceDemo csd = new CharSequenceDemo("Write a class that implements the CharSequence interface.");
		System.out.println("length():"+csd.length());
		
		for(int i=0;i<5;i++){
			System.out.println("charAt("+i+"):"+csd.charAt(i));
		}
		//System.out.println("charAt(-1):"+csd.charAt(-1));//抛异常
		
		System.out.println("reversed: "+csd);
		
		CharSequence csd_sub1 = csd.subSequence(0, 5);//csd的subSequence方法返回的实际上是String
		System.out.println("cs(0, 5) -> subsquence reversed: "+csd_sub1);
		
		String csd_sub3 = (String)csd.subSequence(0, 5);//String继承自CharSequence
		System.out.println("cs(0, 5) -> subsquence reversed: "+csd_sub3);
		
		//CharSequenceDemo csd_sub2 = (CharSequenceDemo) csd.subSequence(0,5);
		//报错：Exception in thread "main" java.lang.ClassCastException: java.lang.String cannot be cast to interfaceTutorial.CharSequenceDemo
		//     at interfaceTutorial.CharSequenceDemo.main(CharSequenceDemo.java:58)
		//为什么？因为csd_sub2 的实际类型是String，而String和CharSequenceDemo没有继承关系，强转会报错。
		//System.out.println("csd(0,5) -> subsquence reversed: "+csd_sub2);
	}

}
