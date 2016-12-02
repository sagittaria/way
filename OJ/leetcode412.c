/* pre:感觉不是完美的答案，我还没有完全理解透 */
/*
Write a program that outputs the string representation of numbers from 1 to n.
But for multiples of three it should output “Fizz” instead of the number and for the multiples of five output “Buzz”. For numbers which are multiples of both three and five output “FizzBuzz”.
Example:
n = 15,
Return:
[
    "1",
    "2",
    "Fizz",
    "4",
    "Buzz",
    "Fizz",
    "7",
    "8",
    "Fizz",
    "Buzz",
    "11",
    "Fizz",
    "13",
    "14",
    "FizzBuzz"
]
*/
#include <stdio.h>
#include <string.h>
#include <malloc.h>
char** fizzBuzz(int n, int* returnSize);
int main(){
  int n=16,i;
  // char *a[]={"1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16"};
  // for(i=0;i<16;i++){
  //   printf("%s\n", a[i]);
  // }

  char **res = fizzBuzz(n, &n);
  for(i=0;i<n;i++){
    printf("%s\n", res[i]);
  }

  printf("-----------\n");
  for(i=0;i<n;i++){
    printf("res(%2d)=%p, *res(%2d)=%p, **res(%2d)=%s\n", i, res+i, i, *(res+i), i, *(res+i));
    //注：对于%s 就是用(char *)的，跟 %d 不同！见bbb
  }

  printf("-----------\n");
  int *ttt = (int *)malloc(sizeof(int));
  *ttt=12;//查看内存里放的是什么
  printf("ttt=%p, *ttt=%d\n", ttt, *ttt);

  printf("-----------\n");
  long int **bbb = (long int **)malloc(3*sizeof(long int*));
  for(i=0;i<3;i++){
    *(bbb+i) = (long int *)malloc(sizeof(long int));
    **(bbb+i) = i;
  }
  for(i=0;i<3;i++){
    printf("bbb(%d)=%p, *bbb(%d)=%p, **bbb(%d)=%ld\n", i, bbb+i, i, *(bbb+i), i, **(bbb+i));
  }//与预期一致，bbb[0], bbb[1], bbb[2]里放的是地址，*bbb[0], *bbb[1], *bbb[2]指向的也是地址，**bbb[0], **bbb[1], **bbb[2]指向的是数值0,1,2

  return 0;
}

char** fizzBuzz(int n, int* returnSize) {
  char **temp;
  temp = (char **)malloc(n*sizeof(char *));
  int i;
  for(i=0;i<n;i++){
    *(temp+i) = (char *)malloc(sizeof(char *));
  }

  for(i=0;i<n;i++){
    if((i+1)%15==0)
      *(temp+i)="FizzBuzz";
    else if((i+1)%3==0)
      *(temp+i)="Fizz";
    else if((i+1)%5==0)
      *(temp+i)="Buzz";
    else
      sprintf(*(temp+i), "%d", i+1);//数字-->字符串
  }

  *returnSize = n;
  return temp;
}

/* 网上找来的答案，总感觉*(temp+i) = (char *)malloc(sizeof(char));不太合适
char** fizzBuzz(int n, int* returnSize) {
  char **temp;
  temp = (char **)malloc(n*sizeof(char *));
  int i;
  for(i=0;i<n;i++){
    *(temp+i) = (char *)malloc(sizeof(char));
  }

  for(i=0;i<n;i++){
    if((i+1)%15==0)
      *(temp+i)="FizzBuzz";
    else if((i+1)%3==0)
      *(temp+i)="Fizz";
    else if((i+1)%5==0)
      *(temp+i)="Buzz";
    else
      sprintf(*(temp+i), "%d", i+1);
  }

  *returnSize = n;
  return temp;
}
*/