public class leetcode326 {
	public static boolean isPowerOfThree(int n) {
		return (n > 0 && 1162261467 % n == 0);
		//1162261467是3^19，而3^20会溢出Integer
		//次方增长很快，可以全部列举出来。如果n能整除最大的那个，即是true
	}
	
	public static void main(String[] args){
		System.out.println(Integer.MAX_VALUE);
	}

}
