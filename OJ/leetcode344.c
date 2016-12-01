/*
Write a function that takes a string as input and returns the string reversed.
Example:
Given s = "hello", return "olleh".
*/
#include <stdio.h>
#include <string.h>
#include <malloc.h>
char *reverseString(char *s);
int main(){
  char *s = "hello, world!";
  printf("s=%s, strlen(s)=%d\n", s, strlen(s));
  char *rs;
  rs = reverseString(s);
  printf("-------reversed\n%s", rs);
  return 0;
}

char *reverseString(char *s){
  //默写~
  int i = strlen(s)-1;
  if(i>=0){
    char *str = (char *)malloc(strlen(s)+1);
    do{
      *str = s[i];
      str++;
    }while(i--);
    *str = '\0';
    str-=strlen(s);
    s=str;
  }
  return s;
}

/*
网上找来的另一个版本
char *reverseString(char *s){  
  int i = strlen(s)-1;      //创建变量i，记录字符串的长度再减去1，作为此时字符数组的下标  
  if(i>=0){                 //如果字符串的长度大于等于0  
    char *str =(char*)malloc(strlen(s)+1);//给字符指针str分配内存,+1位是给'\0'准备的
    do{  
      *str = s[i];     //逆序拷贝  
      str++;           //str下标++  
    }while(i--);         //s下标--  
    *str = '\0';         //此时str = 0,将其赋值为'\0'  
    str = str-strlen(s); //此时str指针指向最后一位'\0',指针向前移动字符串的长度，归位  
    s = str;             //将str指针赋值给s，拷贝str的首地址  
  }  
  return s;                //返回s的首地址  
}

自己提交的版本
char *reverseString(char *s){
  int len = strlen(s);
  int i = strlen(s)-1;
  if(i>=0){
    char *str = (char *)malloc(strlen(s)+1);
    s+=i;
    do{
      *str = *s;
      str++;
      s--;      
    }while(i--);
    *str = '\0';
    str-=len;
    s=str;
  }
  return s;
}
*/

/* 自己写的调试版...
  printf("init s=%p, strlen(s)=%d\n--------\n", s, strlen(s));
  // int i;
  // for(i=0;i<strlen(s);i++){
  //   printf("s[%d]=%c\n", i, *(s+i));
  // }
  int len = strlen(s);
  int i = strlen(s)-1;
  if(i>=0){
    char *str = (char *)malloc(strlen(s)+1);
    s+=i;
    do{
      *str = *s;
      printf("i=%d, s=%p, str=%p, now *s=%c, *str=%c\n", i, s, str, *s, *str);
      str++;
      s--;      
    }while(i--);
    printf("--------after loop\n     s=%p, str=%p, now *s=%c, *str=%c\n", s, str, *s, *str);
    *str = '\0';
    printf("--------after loop2\n     s=%p, str=%p, now *s=%c, *str=%c\n", s, str, *s, *str);
    str-=len;
    printf("--------after loop3\n     s=%p, str=%p, now *s=%c, *str=%c\n", s, str, *s, *str);
    s=str;
    printf("--------after loop4\n     s=%p, str=%p, now *s=%c, *str=%c\n", s, str, *s, *str);
  }
  return s;
*/