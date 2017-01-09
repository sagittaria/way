public class leetcode231 {

	public boolean isPowerOfTwo(int n) {
		if(n==1||n==2) return true;
		if(n==0) return false;
		while(n%2==0){//出现余数不为零时，直接不允许再进循环，返回False
			n/=2;
			if(n==2){
				return true;
			}
		}
		return false;
	}
	
	public boolean isPowerOfTwoImproved(int n) {
		return n > 0 && ((n & (n - 1)) == 0 );
		//如果((n & (n - 1)) == 0 )说明n的二进制表示中有且只有一个1, 说明是2的次幂
		//列几个 1(1),2(10),4(100),8(1000)..., 二进制乘2就是左移一位
		
		// n=2, 2&1=(10)&(01)=(00)
		// n=3, 3&2=(11)&(10)=(10)
		// n=4, 4&3=(100)&(011)=(000)
		// n=6, 6&5=(110)&(101)=(100)
		// n=8, 8&7=(1000)&(0111)=(0000)
		// ...
	}
	
	public static void main(String[] args) {
		leetcode231 l = new leetcode231();
		System.out.println(l.isPowerOfTwoImproved(3));
		System.out.println(l.isPowerOfTwoImproved(16));
	}
}
