#include <stdio.h>
#include <math.h>

int isPrime(int i);

int main()
{
  int i=0;
  scanf("%d",&i);
  if(i==0){
    printf("ling");
    return 0;
  }
  char * r[]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
  int nof=0,temp=i>0?i:-i;
  while(temp>0){
    nof++;
    temp/=10;
  }//求一共有几位数，放在nof（num of figures）里
  //printf("%d\n", nof);

  if(i<0){
    i=-i;
    printf("fu ");
  }

  int idx=i;
  while(nof>0){
    nof--;
    idx=i/pow(10.0,nof);
    idx%=10;
    //printf("%d\n", idx);
    if(nof>0){
      printf("%s ", r[idx]);
    }else{
      printf("%s", r[idx]);//最后一位后面没有空格
    }   
  }

  return 0;
}

/*
题目内容：
你的程序要读入一个整数，范围是[-100000,100000]。然后，用汉语拼音将这个整数的每一位输出出来。
如输入1234，则输出：
yi er san si
注意，每个字的拼音之间有一个空格，但是最后的字后面没有空格。当遇到负数时，在输出的开头加上“fu”，如-2341输出为：
fu er san si yi

输入格式:
一个整数，范围是[-100000,100000]。

输出格式：
表示这个整数的每一位数字的汉语拼音，每一位数字的拼音之间以空格分隔，末尾没有空格。

输入样例：
-30

输出样例：
fu san ling
*/