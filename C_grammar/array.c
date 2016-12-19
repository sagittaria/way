//这是跟着视频写的，我将自己再//默写//一回
#include "array.h"
#include <stdio.h>
#include <malloc.h>
// typedef struct
// {
//     int *array;
//     int size;
// } Array;

const int BLOCK_SIZE = 20;

Array array_create(int int_size){
    Array b;
    b.size = int_size;
    b.array = (int *)malloc(sizeof(int)*int_size);
    return b;
}//b是一个结构，而下面的a都是指向Array这种结构的指针

void array_free(Array *a){
    free(a->array);
    a->array = NULL;
    a->size = 0;
}

int array_size(const Array *a){
    return a->size;
}

int* array_at(Array *a, int index){
    if(index >= a->size){
        array_inflate(a, (index/BLOCK_SIZE+1)*BLOCK_SIZE - a->size);
    }
    return &(a->array[index]);
}

int array_get(const Array *a, int index){
    return a->array[index];
}

void array_set(Array *a, int index, int value){
    a->array[index] = value;
}

void array_inflate(Array *a, int more_size){
    int *p = (int *)malloc(sizeof(int)*(a->size+more_size));
    int i;
    for (i = 0; i < a->size; i++)
    {
        p[i] = a->array[i];
    }
    free(a->array);
    a->array = p;
    a->size += more_size;
}

int main(){
    Array a = array_create(100);
    printf("%d\n", array_size(&a));

    *array_at(&a,0) = 9;
    printf("%d\n", *array_at(&a,0));

    array_set(&a, 1, 6);
    printf("%d\n", array_get(&a,1));

    int number=0;
    int cnt=0;
    while(number != -1){
        scanf("%d", &number);
        if(number != -1)
            *array_at(&a,cnt++) = number;
    }

    int i;
    for(i=0;i<cnt;i++){
        printf("%d\n", array_get(&a, i));
    }

    array_free(&a);

    return 0;
}