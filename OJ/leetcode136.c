#include <stdio.h>
#include <malloc.h>

int singleNumber(int* nums, int numsSize) {
    int res = 0, i;
    for(i=0;i<numsSize;i++){
        printf("%d ^ %d = ", res, nums[i] );
        res ^= nums[i];//好像意思是，只要“异或”进去两次的，总会被置0，而始终 0^a = a
        printf("%d\n", res);
    }
    return res;
}

int main(int argc, char const *argv[])
{
  int *num = (int *)malloc(7*sizeof(int));
  num[0]=1;
  num[1]=1;
  num[2]=2;
  num[3]=3;
  num[4]=3;
  num[5]=2;
  num[6]=4;
  int a = singleNumber(num, 7);
  printf("%d\n", a);
  return a;
}