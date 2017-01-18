/*
题目内容：
给定一组二维坐标，表示直角坐标系内的一个多边形的连续的顶点的坐标序列。计算能包围这个多边形的平行于坐标轴的最小矩形，输出它的左下角和右上角的坐标。

输入格式:
第一行是一个正整数n表示顶点的数量，第二行是n组整数，依次表示每个顶点坐标的x和y值。

输出格式：
四个整数，依次表示所计算的矩形的左下角的坐标的x、y值和右上角坐标的x、y值。输出最后带有回车换行。

输入样例：
5
1 1 1 4 3 7 4 4 4 1

输出样例：
1 1 4 7
*/


//装b
/*
#include <stdio.h>
#include <stdlib.h>

typedef struct point{
    int x;
    int y;
} dian;

int main(){
    int n;
    scanf("%d",&n);
    // dian a[n];
    // int i;
    // for(i=0;i<n;i++){
    //     scanf("%d %d", &(a[i].x), &(a[i].y));
    // }
    // printf("%d %d\n", a[i-1].x, a[i-1].y);

    dian *a = (dian *)malloc(n*sizeof(dian));
    int i;
    for(i=0;i<n;i++){
        scanf("%d %d", &(a->x), &(a->y));
        a++;
    }
    for(i=n;i>0;i--){
        printf("%d %d\n", (a-i)->x, (a-i)->y);
    }

    return 0;
}
*/


//不装b
#include <stdio.h>

int main(){
    int x1,y1,x2,y2,n,tmpx,tmpy;
    scanf("%d",&n);
    int i;
    scanf("%d %d", &x1, &y1);
    x2=x1;
    y2=y1;

    for(i=1;i<n;i++){
        scanf("%d %d", &tmpx, &tmpy);
        x1 = tmpx < x1 ? tmpx : x1;
        y1 = tmpy < y1 ? tmpy : y1;
        x2 = tmpx > x2 ? tmpx : x2;
        y2 = tmpy > y2 ? tmpy : y2;
    }

    printf("%d %d %d %d\n", x1,y1,x2,y2);

    return 0;
}