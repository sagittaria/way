/*
题目描述
有一个长为n的数组A，求满足0≤a≤b<n的A[b]-A[a]的最大值。
给定数组A及它的大小n，请返回最大差值。
测试样例：
[10,5],2
返回：0

标签：贪心，还没完全理解
 */

public class newcoder0129 {
	public static int getDis(int[] A, int n) {
		int min = A[0], maxDiff = Integer.MIN_VALUE;
		for (int i = 0; i < n; i++) {
			if (A[i] < min) {
				min = A[i];
			}
			maxDiff = maxDiff > (A[i] - min) ? maxDiff : (A[i] - min);
		}

		return maxDiff;
	}

	public static void main(String[] args) {
		int[] a = { 2676, 4662, 8383, 357, 6595 };
		System.out.println(getDis(a, 5));
		int[] b = { 5890, 12599, 9872, 6013, 9204, 6573, 11220, 1588 };
		System.out.println(getDis(b, 8));
	}
}
