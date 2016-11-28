import java.math.BigInteger;
import java.util.*;

public class Exercise{
    public static void main(String[] args) {
    	//1~6,11,12,15

    }
}

/* ex15
	ArrayList<ArrayList<Integer>> pascTri = new ArrayList<ArrayList<Integer>>();
	int n=7;//以免用Scanner读键盘输入了
	ArrayList<Integer> rowFirst = new ArrayList<>();
	rowFirst.add(1);
	pascTri.add(rowFirst);
	
	for(int i=1;i<n;i++){
		ArrayList<Integer> row = new ArrayList<>();
		row.add(0,1);
		int j;
		for(j=1;j<i;j++){
			row.add(pascTri.get(i-1).get(j-1)+pascTri.get(i-1).get(j));
		}
		row.add(j,1);
		pascTri.add(row);
	}

	for(int r=0;r<pascTri.size();r++){
		for(int c=0;c<pascTri.get(r).size();c++){
			System.out.printf("%4d",pascTri.get(r).get(c));
		}
		System.out.println();
	}
	System.out.println("---------或用增强for循环：");
	for(ArrayList<Integer> row : pascTri){
		for(Integer col : row){
			System.out.printf("%4d",col);
		}
		System.out.println();
	}
*/

/* ex11
	Scanner s=new Scanner(System.in);
	String line=s.nextLine();
	for(int i=0;i<line.length();i++){
		if(line.charAt(i)>127){
			System.out.println(line.charAt(i)+"'s Unicode is \\u"+Integer.toHexString((int)line.charAt(i)));
		}
	}
	s.close();
*/

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