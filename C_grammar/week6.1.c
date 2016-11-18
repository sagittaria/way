#include <stdio.h>
int isPrime(int n);
int main(){
  int n;
  scanf("%d",&n);
  if(isPrime(n)){
    printf("%d=%d\n", n, n);
  }else{
    int temp=n;
    printf("%d=", n);
    int i;
    int isFirst=1;
    while(temp!=1){
      for(i=2;i<=temp;i++){
        if(temp%i==0){
          break;
        }//找出能整除的最小i（i自动是质数，因为“合数”永远可以分
      }  //为“质数的积”，例如i不可能取到4，因为会先取到2）
      if(isFirst==1){//等号后面第一个质因数前不带乘号
        printf("%d", i);
        isFirst=0;
      }else{
        printf("x%d", i);
      }
      temp=temp/i;
    }
  }
  return 0;
}

int isPrime(int n){
  if(n==1) return 0;
  int i;
  for(i=2;i*i<=n;i++){
    if(n%i==0){
      return 0;
    }
  }
  return 1;
}
/*
题目内容：
每个非素数（合数）都可以写成几个素数（也可称为质数）相乘的形式，这几个素数就都叫做这个合数的质因数。比如，6可以被分解为2x3，而24可以被分解为2x2x2x3。

现在，你的程序要读入一个[2,100000]范围内的整数，然后输出它的质因数分解式；当读到的就是素数时，输出它本身。

提示：可以用一个函数来判断某数是否是素数。

输入格式:
一个整数，范围在[2,100000]内。

输出格式：
形如：
n=axbxcxd
或
n=n
所有的符号之间都没有空格，x是小写字母x。abcd这样的数字一定是从小到大排列的。

输入样例：
18

输出样例：
18=2x3x3
*/