#include <stdio.h>
int main()
{
  char* R[] = { "unreadable", "barely readable, occasional words distinguishable",
    "readable with considerable difficulty", "readable with practically no difficulty",
    "perfectly readable" };
  char* S[] = { "Faint signals, barely perceptible", "Very weak signals", "Weak signals",
    "Fair signals", "Fairly good signals", "Good signals", "Moderately strong signals",
    "Strong signals", "Extremely strong signals" };

  int i=0;
  scanf("%d", &i);
  
  printf("%s, %s.", S[i%10-1],R[i/10-1]);
  return 0;
}

/*
题目内容：
无线电台的RS制信号报告是由三两个部分组成的：
R(Readability) 信号可辨度即清晰度.
S(Strength)    信号强度即大小.
其中R位于报告第一位，共分5级，用1—5数字表示.
Unreadable
Barely readable, occasional words distinguishable
Readable with considerable difficulty
Readable with practically no difficulty
Perfectly readable
报告第二位是S，共分九个级别，用1—9中的一位数字表示
Faint signals, barely perceptible
Very weak signals
Weak signals
Fair signals
Fairly good signals
Good signals
Moderately strong signals
Strong signals
Extremely strong signals
现在，你的程序要读入一个信号报告的数字，然后输出对应的含义。如读到59，则输出：

Extremely strong signals, perfectly readable.

输入格式:
一个整数，信号报告。整数的十位部分表示可辨度，个位部分表示强度。输入的整数范围是[11,59]中的个位不为0的数字，这个范围外的数字不可能出现在测试数据中。

输出格式：
一句话，表示这个信号报告的意义。按照题目中的文字，先输出表示强度的文字，跟上逗号和空格，然后是表示可辨度的文字，跟上句号。注意可辨度的句子的第一个字母是小写的。注意这里的标点符号都是英文的。

输入样例：
33

输出样例：
Weak signals, readable with considerable difficulty.
*/