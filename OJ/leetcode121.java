public class leetcode121 {
	//两个for循环会超时
	public static int maxProfitTLE(int[] prices) {
		if(prices.length==0) return 0;
		int ret = 0, curMin = prices[0];
		for (int i = 0; i < prices.length - 1; i++) {
			curMin = prices[i] < curMin ? prices[i] : curMin;
			for (int j = i + 1; j < prices.length; j++) {
				ret = prices[j] - prices[i] > ret ? prices[j] - prices[i] : ret;
			}
		}
		return ret;
	}
	
	//更高效点
	public static int maxProfit(int[] prices) {
		if(prices.length==0) return 0;
		int ret = 0, curMin = prices[0];
		for(int i=1;i<prices.length;i++){
			curMin = prices[i]<curMin?prices[i]:curMin;//记出最小价格
			ret = prices[i]-curMin>ret?prices[i]-curMin:ret;//记出最大收益
		}
		return ret;
	}

	public static void main(String[] args) {
		int[] p1 = { 7, 1, 5, 3, 6, 4 };
		int[] p2 = { 7, 6, 4, 3, 1 };
		int[] p3 = { 1, 2 };
		System.out.println(maxProfit(p1));
		System.out.println(maxProfit(p2));
		System.out.println(maxProfit(p3));
	}
}

/*
Say you have an array for which the ith element is the price of a given stock on day i.

If you were only permitted to complete at most one transaction (ie, buy one and sell one share of the stock), design an algorithm to find the maximum profit.

Example 1:
Input: [7, 1, 5, 3, 6, 4]
Output: 5

max. difference = 6-1 = 5 (not 7-1 = 6, as selling price needs to be larger than buying price)
Example 2:
Input: [7, 6, 4, 3, 1]
Output: 0

In this case, no transaction is done, i.e. max profit = 0.
*/

// 记ret为收益（卖出-买入） 关键点就在于，随着prices的遍历，怎样更新ret？
// 1、如果当前遇到的元素比curMin小，就重新更新curMin
// 2、计算prices[i]与curMin的差值，并（可能需要）更新ret
// http://www.cnblogs.com/ganganloveu/p/3721162.html