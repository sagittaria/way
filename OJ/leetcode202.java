import java.util.*;

public class leetcode202 {
    public boolean isHappy(int n) {
    	if(n<=0) return false;
    	long ln = n;
    	Set<Long> set = new HashSet<>();
    	
    	while(ln<=Integer.MAX_VALUE){
    		if(set.contains(ln))
    			return false;
    		else
    			set.add(ln);
    		ln=digitSquareSum(ln);
    		if(ln==1)
    			return true;
    	}
    	
        return false;
    }
    
    public long digitSquareSum(long ln){
    	long sum = 0;
    	while(ln!=0){
    		sum+=Math.pow(ln%10, 2);
    		ln/=10;
    	}    	
    	return sum;
    }
    
    public static void main(String[] args){
    	leetcode202 l = new leetcode202();
    	System.out.println(l.isHappy(19));
    	System.out.println(l.isHappy(10));
    	System.out.println(l.isHappy(11));
    	System.out.println(l.isHappy(1));
    	System.out.println(l.isHappy(2));
    }
}

/*
Write an algorithm to determine if a number is "happy".

A happy number is a number defined by the following process: Starting with any positive integer, replace the number by the sum of the squares of its digits, and repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1. Those numbers for which this process ends in 1 are happy numbers.

Example: 19 is a happy number

1^2 + 9^2 = 82
8^2 + 2^2 = 68
6^2 + 8^2 = 100
1^2 + 0^2 + 0^2 = 1 

一直算就是了，遇见有重复的就说明会有循环，返回False

 */