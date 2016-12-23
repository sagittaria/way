/*
Given a non-negative integer num, repeatedly add all its digits until the result has only one digit.

For example:

Given num = 38, the process is like: 3 + 8 = 11, 1 + 1 = 2. Since 2 has only one digit, return it.

Follow up:
Could you do it without any loop/recursion in O(1) runtime?
*/

int addDigits(int num) {
    return (num-1)%9+1;
}

/*
如果不知道数根http://baike.so.com/doc/7562443-7836536.html，那么就...

时间复杂度是O(1)，我们应该最先想到找规律。
１　２　３　４　５　６　７　８　９　１０　１１　１２　１３　１４　１５
１　２　３　４　５　６　７　８　９　１　　　２　　３　　４　　５　　６
答案为１－９中的一个，且循环为９,没有０；
然后我们想到（num－１）%9+1
*/