#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    int i,j;
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
        //printf("%d\n", a[i]);
    }

    //选择排序
    for(i=n-1;i>0;i--){
        int maxid = i;
        for(j=0;j<i;j++){
            if(a[j]>a[maxid])
                maxid=j;
        }
        int t = a[i];
        a[i] = a[maxid];
        a[maxid]=t;
    }

    for(i=0;i<n;i++){
        printf("%d ", a[i]);
    }

    return 0;
}

/*
对应网站上进阶课 的第7周习题：链表

题目内容：
程序读入一个正整数n（0<n<=100000），然后读入n个整数，均为32位下的整数。输出对这个整数排序后的结果，每个整数后面有一个空格。

输入格式:
一个表示个数的正整数n，和n个整数，以空格间隔。

输出格式：
排序后的n的整数，每个整数后面有一个空格。

输入样例：
6 2 23 54 12 6 8

输出样例：
2 6 8 12 23 54

*/