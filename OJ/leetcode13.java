import java.util.HashMap;

public class leetcode13 {
	private HashMap< Character,Integer> ri = new HashMap<>();
	public leetcode13(){
		ri.put('I', 1);
		ri.put('V', 5);
		ri.put('X', 10);
		ri.put('L', 50);
		ri.put('C', 100);
		ri.put('D', 500);
		ri.put('M', 1000);
	}

	public int romanToInt(String s) {
		int sum = 0;
		for(int i=0;i<s.length()-1;i++){
			int thisFig = ri.get(s.charAt(i));
			int nextFig = ri.get(s.charAt(i+1));
			if(thisFig>=nextFig){
				sum += thisFig;
			}else{
				sum -= thisFig;
			}
		}
		sum+=ri.get(s.charAt(s.length()-1));		
		return sum;
	}
	
	public static void main(String... args) {
		leetcode13 l = new leetcode13();
		System.out.println(l.romanToInt("XIX"));
		System.out.println(l.romanToInt("IX"));
		System.out.println(l.romanToInt("IV"));
		System.out.println(l.romanToInt("XI"));
		System.out.println(l.romanToInt("III"));
		System.out.println(l.romanToInt("VIII"));
		//System.out.println(l.romanToInt("IIV"));//没有的...大数在右边，左边不会连续出现两个II
		//其实这题的关键是，测试用例里不要自己造不存在的罗马数字。。。3就是III，4是IV，不存在IIV
	}
}
/*
答案
http://blog.csdn.net/gatieme/article/details/51052713  --这个更好一点
https://segmentfault.com/a/1190000002683379
--------------
Given a roman numeral, convert it to an integer.

Input is guaranteed to be within the range from 1 to 3999.

附罗马数字对照
1	I		92	XCII	125	CXXV
2	II		93	XCIII	126	CXXVI
3	III		94	XCIV	127	CXXVII
4	IV		95	XCV		128	CXXVIII
5	V		96	XCVI	129	CXXIX
6	VI		97	XCVII	130	CXXX
7	VII		98	XCVIII	131	CXXXI
8	VIII	99	XCIX	132	CXXXII
9	IX		100	C		133	CXXXIII
10	X		101	CI		134	CXXXIV
11	XI		102	CII		135	CXXXV
12	XII		103	CIII	136	CXXXVI
13	XIII	104	CIV		137	CXXXVII
14	XIV		105	CV		138	CXXXVIII
15	XV		106	CVI		139	CXXXIX
16	XVI		107	CVII	140	CXL
17	XVII	108	CVIII	141	CXLI
18	XVIII	109	CIX		142	CXLII
19	XIX		110	CX		143	CXLIII
20	XX		111	CXI		144	CXLIV
21	XXI		112	CXII	145	CXLV
*/
