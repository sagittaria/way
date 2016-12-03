//这个文件不是记习题的，用来建手感
#include <stdio.h>
#include <malloc.h>

void swap(int *a, int *b){
  int t = *a;
  *a = *b;
  *b = t;
}

void minmax(int a[], int len, int *min, int *max){
  *min=*max=a[0];
  int i;
  for(i=1;i<len;i++){
    if(a[i] < *min){
      *min = a[i];
    }
    if(a[i] > *max){
      *max = a[i];
    }
  }
}

int main(){
  int m = 3;
  int n = 8;
  printf("m=%d, n=%d\n", m, n);
  swap(&m, &n);
  printf("m=%d, n=%d\n", m, n);
  printf("-----------\n");

  int a[] = {3,5,2,1,4,8,6,9,0,7};
  int min, max;
  minmax(a, sizeof(a)/sizeof(a[0]), &min, &max);
  printf("min=%d, max=%d\n", min, max);
  printf("-----------\n");

  char *b[]={"Jan","Feb","Mar"};//C语言“的”字符串数组！
  printf("Enter(1,2 or 3): ");
  int y;
  scanf("%d", &y);
  printf("Month: %s\n", b[y-1]);//数组b里各元素中都存了地址，每个地址指向一个字符串

  char **a2;
  a2=(char **)malloc(sizeof(void *));
  int i;
  for(i=0;i<3;i++){
    *(a2+i)=(char *)malloc(sizeof(void *));
  }
  *a2="Jan";
  *(a2+1)="Feb";
  *(a2+2)="Mar";
  printf("Enter again: ");
  scanf("%d", &y);
  printf("Month: %s\n", *(a2+y-1));//char ** 版字符串数组

  //玩下字符串
  char *str;//1.直接赋给 char *
  str = "a string for test";
  printf("%s\n", str);//于此，%s --> char *

  char word[]="some words ok";//2.赋给char数组
  printf("%s\n", word);//%s --> char[]

  return 0;
}