import java.util.*;
public class leetcode412 {
	
	public static void main(String[] args){
		int n = 16,i;
		List<String> res = fizzBuzz(n);
		for(i=0;i<n;i++){
			System.out.printf("%d, %s\n",i+1,res.get(i));
		}
	}
	
    public static List<String> fizzBuzz(int n) {
        List<String> tmp = new ArrayList<>();
		int i;
		for(i=0;i<n;i++){
			if((i+1)%15==0)
				tmp.add("FizzBuzz");
			else if((i+1)%3==0)
				tmp.add("Fizz");
			else if((i+1)%5==0)
				tmp.add("Buzz");
			else
				tmp.add(""+(i+1));
		}
		return tmp;
    }
}