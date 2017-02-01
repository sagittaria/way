//数据结构与算法题目集（中文） 5-1 最大子列和问题

#include <stdio.h>

int MaxSubseqSum4(int A[], int N)
{
	int ThisSum, MaxSum;
	int i;
	ThisSum = MaxSum = 0;
	for (i = 0; i < N; i++) {
		ThisSum += A[i]; /* 向右累加 */
		if (ThisSum > MaxSum)
			MaxSum = ThisSum; /* 发现更大和则更新当前结果 */
		else if (ThisSum < 0) /* 如果当前子列和为负 */
			ThisSum = 0; /* 则不可能使后面的部分和增大，抛弃之 */
	}
	return MaxSum;
}

int maxSubArray(int* nums, int numsSize) {
	int maxSum = nums[0], tempSum = 0;
	int i;
	for (i = 0; i < numsSize; i++){
		tempSum += nums[i];
		if (tempSum>maxSum){
			maxSum = tempSum;
		}
		if (tempSum < 0){
			tempSum = 0;
		}
	}
	return 0?maxSum>0:maxSum;
}

int main(){
	int n,i;
	scanf("%d", &n);
	int* a = (int*)malloc(n*sizeof(int));
	for (i = 0; i < n; i++){
		scanf("%d", &a[i]);
		//printf("%d ", a[i]);
	}
	printf("%d\n",MaxSubseqSum4(a,n));
	return 0;
}