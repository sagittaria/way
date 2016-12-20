#include <stdio.h>
#include <malloc.h>

typedef struct{
    int *array;
    int size;
} Array;

Array array_create(int int_size);
void array_free(Array *a);
int array_size(const Array *a);
int* array_at(Array *a, int index);
void array_inflate(Array *a, int more_size);

Array array_create(int int_size){
    Array b;
    b.size = int_size;
    b.array = (int *)malloc(sizeof(int)*int_size);
    // printf("length is %d\n", b.size);
    return b;
}

void array_free(Array *a){
    a->size = 0;
    free(a->array);
    a->array = NULL;
}

int array_size(const Array *a){
    return a->size;
}

int* array_at(Array *a, int index){
    if(index >= a->size){
        array_inflate(a, a->size);
    }
    return &(a->array[index]);
}

void array_inflate(Array *a, int more_size){    
    int *p = (int *)malloc(sizeof(int)*(a->size+more_size));
    int i;
    for(i=0; i<a->size; i++){
        *(p+i) = *array_at(a, i);
    }
    free(a->array);
    a->array = p;
    a->size += more_size;
    // printf("length is %d\n", a->size);
}

int main(){

    int num = 0;
    int cnt = 0;
    Array a = array_create(1);
    while(1){
        scanf("%d", &num);
        if(num == -1){
            break;
        }else{
            *array_at(&a, cnt++) = num;
        }
    }

    int i;
    for(i=cnt-1; i>=0; i--){
        printf("%d ", *array_at(&a, i));
    }

    return 0;
}

/*
对应网站上进阶课 的第4周习题：链表

题目内容：
你的程序会读入一系列的正整数，预先不知道正整数的数量，一旦读到-1，就表示输入结束。然后，按照和输入相反的顺序输出所读到的数字，不包括最后标识结束的-1。

输入格式:
一系列正整数，输入-1表示结束，-1不是输入的数据的一部分。

输出格式：
按照与输入相反的顺序输出所有的整数，每个整数后面跟一个空格以与后面的整数区分，最后的整数后面也有空格。

输入样例：
1 2 3 4 -1

输出样例：
4 3 2 1 

*/