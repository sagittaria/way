/*
Given two non-negative numbers num1 and num2 represented as string, return the sum of num1 and num2.

Note:

The length of both num1 and num2 is < 5100.
Both num1 and num2 contains only digits 0-9.
Both num1 and num2 does not contain any leading zero.
You must not use any built-in BigInteger library or convert the inputs to integer directly.
*/
import java.util.ArrayList;

public class leetcode415 {
	public String addStrings(String num1, String num2) {
//		int ir=0;
//		int pow = 0;
//		for(int i=num1.length()-1;i>=0;i--){
//			ir += (num1.charAt(i)-'0')*Math.pow(10,pow++);
//		}
//		pow=0;
//		for(int i=num2.length()-1;i>=0;i--){
//			ir += (num2.charAt(i)-'0')*Math.pow(10,pow++);
//		}
//		return Integer.toString(ir);  //碰到大数就不行了
		
		ArrayList<Integer> n1 = new ArrayList<>();
		ArrayList<Integer> n2 = new ArrayList<>();
		ArrayList<Integer> nr = new ArrayList<>();
		for(int i=num1.length()-1;i>=0;i--){
			n1.add(num1.charAt(i)-'0');
		}
		//System.out.println(n1.toString());
		for(int i=num2.length()-1;i>=0;i--){
			n2.add(num2.charAt(i)-'0');
		}
		//System.out.println(n2.toString());
		
		int maxLen = n1.size()>n2.size()?n1.size():n2.size();
		int flag = 0;//进位标记
		StringBuffer r = new StringBuffer();
		for(int i=0;i<maxLen;i++){
			int fig1,fig2;			
			try{fig1=n1.get(i);}catch(IndexOutOfBoundsException e){fig1=0;}			
			try{fig2=n2.get(i);}catch(IndexOutOfBoundsException e){fig2=0;}
			nr.add((fig1+fig2+flag)%10);
			if((fig1+fig2+flag)>=10){
				flag=1;
			}else{
				flag=0;
			}
			r.append(nr.get(i));
		}
		
		if(flag==1){
			r.append(1);
		}//如果最后一轮循环里还有进位，要再额外补个1
		
		return r.reverse().toString();
	}
	
	public String addStringsImproved(String num1, String num2){
		//Your runtime beats 80.28% of java submissions. 满意了
		String longer = num1.length()>=num2.length()?num1:num2;
		String shorter = num1.length()>=num2.length()?num2:num1;
		StringBuffer r = new StringBuffer();
		int flag=0;//进位标记
		int figS = 0, tmpRes=0;
		
		for(int i = longer.length()-1,j=shorter.length()-1;i>=0;i--,j--){			
			figS=(j>=0)?shorter.charAt(j)-'0':0;//shorter位数不够时用零来充
			tmpRes = longer.charAt(i)-'0'+figS+flag;
			flag=tmpRes>=10?1:0;
			r.append(tmpRes%10);
		}
		if(flag==1){
			r.append(1);
		}
		//System.out.println(n.toString());
		
		return r.reverse().toString();
	}
	
	public static void main(String[] args){
//		StringBuffer r = new StringBuffer();
//		r.append(1);
//		r.append(2);
//		System.out.println(r.toString());
		
		leetcode415 l = new leetcode415();
		System.out.println(l.addStringsImproved("4", "9"));
		System.out.println(l.addStringsImproved("20", "56"));
		System.out.println(l.addStringsImproved("201", "55"));
		System.out.println(l.addStringsImproved("29", "384"));
	}
}
