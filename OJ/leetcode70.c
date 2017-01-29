/*
You are climbing a stair case. It takes n steps to reach to the top.

Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

Note: Given n will be a positive integer.

找规律，发现其实就是求斐波那契数列（这是一个动态规划的题目）： 
n = 1 时 ways = 1； 
n = 2 时 ways = 2； 
n = 3 时 ways = 3； 
… 
n = k 时 ways = ways[k-1] + ways[k-2]；

正式解释：
Solution to this problem makes a Fibonacci sequence. We can understand it better if we start 
from the end. To reach to Step N, you can either reach to step N-1 and take 1 step from there 
or take 2 step from N - 2. Therefore it can be summarized as:
F(N) = F(N-1) + F(N-2)
*/
int climbStairs(int n) {
    if(n<=2) return n;
    int pre1 = 2;
    int pre2 = 1;
    int res  = 0;
    for(int i=3;i<=n;++i){
        res  = pre1+pre2;
        pre2 = pre1;
        pre1 = res;
    }
    return res;
}