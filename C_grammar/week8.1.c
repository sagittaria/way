#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
  char s[100];
  int isFirst=1;
  while(scanf("%s",s)){
    if(isFirst && s[strlen(s)-1]=='.'){
      if(strlen(s)>1){
        printf("%d", strlen(s)-1);//如果只有一个单词
      }
      return 0;//或者如果无内容
    }

    if(!isFirst && s[strlen(s)-1]=='.'){//如果有内容，且读到了最后一个词
      printf(" %d", strlen(s)-1);
      return 0;
    }

    if(isFirst){
      printf("%d", strlen(s));
      isFirst=0;
    }else{      
      printf(" %d", strlen(s));
    }
  }

  return 0;
}

/*
题目内容：
你的程序要读入一行文本，其中以空格分隔为若干个单词，以‘.’结束。你要输出这行文本中每个单词的长度。这里的单词与语言无关，可以包括各种符号，比如“it's”算一个单词，长度为4。注意，行中可能出现连续的空格。

输入格式:
输入在一行中给出一行文本，以‘.’结束，结尾的句号不能计算在最后一个单词的长度内。

输出格式：
在一行中输出这行文本对应的单词的长度，每个长度之间以空格隔开，行末没有最后的空格。

输入样例：
It's great to see you here.

输出样例：
4 5 2 3 3 4
*/