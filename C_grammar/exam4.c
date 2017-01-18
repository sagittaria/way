/*
2分数比较（10分）
题目内容：
本题要求编写程序，比较两个分数的大小。

输入格式:
输入在一行中按照“a1/b1 a2/b2”的格式给出两个分数形式的有理数，其中分子和分母全是int类型范围内的正整数。

输出格式：
在一行中按照“a1/b1 关系符 a2/b2”的格式输出两个有理数的关系。其中“>”表示“大于”，“<”表示“小于”，“=”表示“等于”。
注意在关系符前后各有一个空格。

输入样例：
1/2 3/4
输出样例：
1/2 < 3/4
*/
#include <stdio.h>

int main(){
    int a,b,c,d;
    scanf("%d/%d %d/%d", &a,&b,&c,&d);
    if ((long int)a*d==(long int)b*c){  //必须要强转一下，否则用例3通不过，可能是两个最大的int相乘会溢出
        printf("%d/%d = %d/%d\n", a,b,c,d);
    }else  if((long int)a*d < (long int)b*c){
        printf("%d/%d < %d/%d\n", a,b,c,d);
    }else{
        printf("%d/%d > %d/%d\n", a,b,c,d);
    }
    return 0;
}