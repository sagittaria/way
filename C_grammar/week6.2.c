#include <stdio.h>
int isWan(int n);
int main(){
  int a=0,b=0;
  int notExist=1;
  int isFirst=1;
  scanf("%d %d", &a, &b);
  //scanf后面不要加 \n，如果加了，需要按下ctrl+z再按回车，或者输入 1 10 任意非(空格、制表符、回车) 再回车，才算输入结束
  //scanf后面不要加 \n，如果加了，需要按下ctrl+z再按回车，或者输入 1 10 任意非(空格、制表符、回车) 再回车，才算输入结束
  //scanf后面不要加 \n，如果加了，需要按下ctrl+z再按回车，或者输入 1 10 任意非(空格、制表符、回车) 再回车，才算输入结束
  //scanf后面不要加 \n，如果加了，需要按下ctrl+z再按回车，或者输入 1 10 任意非(空格、制表符、回车) 再回车，才算输入结束
  //scanf后面不要加 \n，如果加了，需要按下ctrl+z再按回车，或者输入 1 10 任意非(空格、制表符、回车) 再回车，才算输入结束
  int i;
  for(i=a;i<=b;i++){
    if(isWan(i)){
      if(isFirst){
        printf("%d", i);
        isFirst=0;
      }else{
        printf(" %d", i);
      }      
      notExist=0;
    }
  }

  if(notExist){
    printf("NIL\n");
  }

  return 0;
}

int isWan(int n){
  if(n==1) return 0;
  int i;
  int sum=1;//任何数当然都能被1整除
  for(i=2;i<n;i++){
    if(n%i==0){
      sum+=i;
    }
  }
  if(sum==n){
    return 1;
  }
  return 0;
}

/*
题目内容：
一个正整数的因子是所有可以整除它的正整数。而一个数如果恰好等于除它本身外的因子之和，这个数就称为完数。例如6=1＋2＋3(6的因子是1,2,3)。

现在，你要写一个程序，读入两个正整数n和m（1<=n<m<1000），输出[n,m]范围内所有的完数。

提示：可以写一个函数来判断某个数是否是完数。

输入格式:
两个正整数，以空格分隔。

输出格式：
其间所有的完数，以空格分隔，最后一个数字后面没有空格。如果没有，则输出一行文字：
NIL
（输出NIL三个大写字母加回车）。

输入样例：
1 10

输出样例：
6
*/