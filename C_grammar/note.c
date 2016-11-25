#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{

}

//malloc 动态分配内存
/*
  int num;
  int *a=0;//建议初始化指针的时候令其等于0(反正0不可能是个有效位置)，配合最后的free(a)
  int i;
  printf("give me a num: ");
  scanf("%d", &num);
  a= (int *)malloc(num*sizeof(int));//malloc 返回的是 void* ，强制转换为 int*
  for(i=0;i<num;i++){
    scanf("%d", &a[i]);
  }
  for (i=num-1;i>=0;i--){
    printf("%d", a[i]);
  }
  free(a); //向系统借了一片内存，最后一定记得要还的！
  return 0;
  */

  //接着玩，看最大可以申请到多少内存
/*  void *p;
  int cnt=0;
  while((p=malloc(100*1024*1024))){
    cnt++;
  }
  printf("allocated %d00MB\n", cnt);
  return 0;
*/