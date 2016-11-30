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