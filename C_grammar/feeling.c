//这个文件不是记习题的，用来建手感
#include <stdio.h>

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

  return 0;
}