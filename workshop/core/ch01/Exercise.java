import java.math.BigInteger;
import java.util.*;

public class Exercise{
    public static void main(String[] args) {
    	//1~6,12,
    }
}

/* ex12
	Random gen=new Random();
	ArrayList<Integer> sn=new ArrayList<>(Arrays.asList(0,0,0,0,0,0));
	int[] a=new int[49];
	for(int j=0;j<49;j++){
		a[j]=j+1;
	}
	for(int i=0;i<6;i++){
		int idx=gen.nextInt(49);
		do{
			sn.set(i, a[idx]);
			a[idx]=0;
		}while(sn.get(i)==0);
	}
	Collections.sort(sn);
	System.out.println(sn);
*/

/* ex06
 	Scanner s = new Scanner(System.in);
	int n = s.nextInt();
	s.close();
	BigInteger r=new BigInteger("1");
	for(int i=2;i<=n;i++){
		r=BigInteger.valueOf(i).multiply(r);
	}
	System.out.println(r);
*/

/* ex05
	System.out.println(Integer.MAX_VALUE);
	int n=(int)2147483648.0;
	System.out.println(n);
*/

/* ex04
	System.out.println(Math.nextUp(0));
    System.out.println(Double.MAX_VALUE);
*/

/* ex03
	Scanner s = new Scanner(System.in);
	int a = s.nextInt();
	int b = s.nextInt();
	int c = s.nextInt();
	int d = a>b?a:b;
	d=d>c?d:c;
	System.out.println(d);
*/

/* ex02
    public static void main(String[] args) {
    	Scanner s = new Scanner(System.in);
    	int n = s.nextInt();
    	s.close();
    	System.out.printf("%d",proc(n));
    	
    }
    public static int proc(int c){
    	return ((c+360)%360+360)%360;
    }
 */

/* ex01
Scanner s = new Scanner(System.in);
int n = s.nextInt();
s.close();
System.out.printf("%s %s %s\n",Integer.toBinaryString(n),Integer.toOctalString(n),Integer.toHexString(n));
//按二进制、八进制、十六进制输出
System.out.printf("%f\n",1.0/n);
System.out.printf("%x\n",n);
System.out.printf("%#x\n",n);//带0x前缀
*/