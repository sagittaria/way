/*
Find the contiguous subarray within an array (containing at least one number) which has the largest sum.

For example, given the array [-2,1,-3,4,-1,2,1,-5,4],
the contiguous subarray [4,-1,2,1] has the largest sum = 6.

More practice:
If you have figured out the O(n) solution, try coding another solution using the divide and conquer approach, 
which is more subtle.
*/

#include <stdio.h>

int maxSubArray(int* nums, int numsSize) {
  //跟陈越课件里给出的解不一样（题目要求就不同）
  int maxSum = nums[0], tempSum = 0;//maxSum不要初始化成0 ——考虑到全是负数的情况
  int i;
  for (i = 0; i < numsSize; i++){
    tempSum += nums[i];
    //要先比较tempSum和maxSum，再看tempSum的正负
    if (tempSum>maxSum){
      maxSum = tempSum;
    }
    if (tempSum < 0){
      tempSum = 0;
    }
  }
  return maxSum;
}

int main(){
  int a[9] = { -2, 1, -3, 4, -1, 2, 1, -5, 4 };
  printf("%d\n", maxSubArray(a, 9));
  int b[1] = {-1};
  printf("%d\n", maxSubArray(b, 1));
  int c[3] = { -1, -2, -3 };
  printf("%d\n", maxSubArray(c, 3));
  int d[3] = { -3, -2, -1 };
  printf("%d\n", maxSubArray(d, 3));
  return 0;
}