import java.util.*;

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
    	Runnable task = new HelloTask();
    	Thread thread = new Thread(task);
    	thread.run();
    	Runnable task2 = new HelloTask2();
    	Thread thread2 = new Thread(task2);
    	thread2.run();
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