import java.util.*;
import java.util.function.Consumer;
import java.util.function.IntConsumer;

public class CumulateDailyCh03{
    public static void main(String[] args) {
    	SquareSequence squares = new SquareSequence();
    	double avg = average(squares,4);
    	System.out.println(avg);
    	System.out.println("-------------");
    	String one="666666";
    	String two="55555";
    	System.out.println(new LengthComparator().compare(one, two));
    	System.out.println("-------------");
//    	Runnable task = new HelloTask();
//    	Thread thread = new Thread(task);
//    	thread.run();
//    	Runnable task2 = new HelloTask2();
//    	Thread thread2 = new Thread(task2);
//    	thread2.run();
    	String[] words = {"haha","hehehe","hen"};System.out.println(Arrays.toString(words));
    	Arrays.sort(words,(String first, String second) -> first.length()-second.length());
    	System.out.println(Arrays.toString(words));//到此还没太懂...从 JAVASE8 impt 里抄补充看
    	
    	CumulateDailyCh03 c03obj = new CumulateDailyCh03();
    	c03obj.repeatForLambda(5, ()->System.out.println("aqiu"));// 3. 把lambda表达式当成一个可以【run】的东西
    	
    	c03obj.repeatForLambda2(10, k -> System.out.println("countdown: "+(9-k)));
    	
    	c03obj.repeatForLambda3(6, m -> System.out.printf("正在打印 %s...\n" ,m));
    }    
    public void repeatForLambda3(int n, Consumer<String> ss){
    	for(int i=0;i<n;i++){
    		ss.accept("第"+(i+1)+"次");
    	}
    }
    
    public void repeatForLambda2(int n, IntConsumer action){
    	for(int i=0;i<n;i++){
    		action.accept(i);
    	}
    }
    
    public void repeatForLambda(int n, Runnable r){// 1. Runnable r是个“函数式接口”
    	for(int i=0;i<n;i++){
    		r.run();// 2. r天生带有run()方法
    	}
    }
    
    public static double average(IntSequence seq, int n){
    	int count=0;
    	double sum=0;
    	while(seq.hasNext()&&count<n){
    		count++;
    		sum+=seq.Next();
    	}
    	return count==0 ? 0 : sum/count;
    }
}

class HelloTask implements Runnable{
	public void run(){
		for(int i=0;i<200;i++){
			System.out.println("hello "+ i);
		}
	}
}

class HelloTask2 implements Runnable{
	public void run(){
		for(int i=0;i<200;i++){
			System.out.println("world! "+ i);
		}
	}
}