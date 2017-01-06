/* 最后一周：输入输出和文件等 */

#include <stdio.h>

int main(){
    // printf("%d\n",123);//普通
    // printf("%9d\n",123);//占9位，右对齐
    // printf("%+9d\n",123);//确保输出正负号
    // printf("%-9d\n",123);//占9位，左对齐
    // printf("% 9d\n",123);//正数留空
    // printf("%09d\n",123);//正数补零

    // printf("%d\n",-123);//
    // printf("%9d\n",-123);//
    // printf("%+9d\n",-123);//
    // printf("%-9d\n",-123);//
    // printf("% 9d\n",-123);//
    // printf("%09d\n",-123);//

    // printf("%9.2f\n",123.0);//总长9位，小数点后留两位
    // printf("%*d\n",6,123);//长度为6（效果为123前有三个空格）

    // int i=printf("%d\n", 12345);
    // printf("%d\n", i);//输出6，表示输出了12345再加\n总共5个字符

    // int j=scanf("%d", &i);//自己手动输入345
    // printf("%d\n", j);//输出1，表示读了1个变量进来

    // int k=scanf("%d %d", &i, &j);//手输12 34
    // printf("%d\n", k);//输出2，表示读了2个变量进来


    //先在其他程序里printf("%d\n",12345);//运行 io.exe > a.in，做个a.in文件出来待读
    FILE *fp = fopen("a.in","r");
    if(fp){
        int num;
        fscanf(fp, "%d", &num);
        printf("%d\n", num);//可以读回来12345
        fclose(fp);
    }else{
        printf("unable to open that file\n");
    }

    return 0;
}