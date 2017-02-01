//���ݽṹ���㷨��Ŀ�������ģ� 5-1 ������к�����

#include <stdio.h>

int MaxSubseqSum4(int A[], int N)
{
	int ThisSum, MaxSum;
	int i;
	ThisSum = MaxSum = 0;
	for (i = 0; i < N; i++) {
		ThisSum += A[i]; /* �����ۼ� */
		if (ThisSum > MaxSum)
			MaxSum = ThisSum; /* ���ָ��������µ�ǰ��� */
		else if (ThisSum < 0) /* �����ǰ���к�Ϊ�� */
			ThisSum = 0; /* �򲻿���ʹ����Ĳ��ֺ���������֮ */
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