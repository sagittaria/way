慕课 程序设计入门——C语言 浙江大学 翁恺

随手记：
int isPrime(int a[], int length); //像这样把数组当参数传进去的，必须多传入一个(数组长度)参数，直接写int a[length]，里面的length是没有意义的，反正也不能用sizeof(a)
//因为int a[]传进去的是 a[0]的地址，（int a[]里的a其实是个数组指针），写成 int *a 也完全可以

sizeof(int) 返回4，表示内存里int类型长度是4个字节

&获得变量的地址，所以scanf("%d",&i) 意思是把“扫描得到的数字”扔到变量i(所在的地址)里

输出地址时，不宜当成整数输出
ex01
int i; printf("%p",&i);//而不建议用printf("%d",&i);
ex02
char ac[]={0,1,2,};
char *p = ac;
printf("p = %p\n",p);

int a[] 等价于 int * const a

char word[]={'h','e','l','l','o'};		这是“字符数组”但不是“字符串”
char word[]={'h','e','l','l','o','\0'}; 这是“字符数组”，且是“字符串”，可以用一些字符串的函数

更多定义方式：
char *str="Hello";
char word[]="Hello";
char line[10]="Hello";

  char *b[]={"Jan","Feb","Mar"};//C语言“的”字符串数组！
  printf("Enter(1,2 or 3): ");
  int y;
  scanf("%d", &y);
  printf("Month: %s\n", b[y-1]);//数组b里各元素中都存了地址，每个地址指向一个字符串

指针使用场景：
1.交换值
void swap(int *pa, int *pb)
{
	int t=*pa;
	*pa=*pb;
	*pb=t;
}
2.返回多个结果
void minmax(int a[], int len, int *min, int *max);
int main(){
	int a[]={1,2,3,4,5,6,7,8,9};
	int min,max;
	minmax(a,sizeof(a)/sizeof(a[0]),&min,&max);
	printf("min=%d, max=%d",min,max);
	return 0;
}
3.把计算结过给到一个地址里，而把程序执行状态放在return里

指针使用的常见错误
int*p;
int k=21;
//*p=12; 不能，此时还没给p初始化，它指向的是个不知道什么地方的地方（如果此时正好指的是不可写的地方，就崩溃

(C99 only)
int i;
const int* p1=&i;
int const* p2=&i;
int *const p3=&i;
//前两种含义相同--不能通过指针修改，后一种--指针不能被修改

int sum(const int a[], int len);//这样保护保证在函数内部，传入的数组a不被改变

malloc初见
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
  int num;
  int *a=0;//建议初始化指针的时候令其等于0(反正0不可能是个有效位置)，配合最后的free(a)
  int i;
  printf("输入数量");
  scanf("%d", &num);
  a= (int *)malloc(num*sizeof(int));
  for(i=0;i<num;i++){
    scanf("%d", &a[i]);
  }
  for (i=num-1;i>=0;i--){
    printf("%d", a[i]);
  }
  free(a); //向系统借了一片内存，最后一定记得要还的！
  return 0;
}

地址 0 和 NULL 是同一回事儿

如果申请失败（比如给不了你这么大的内存），返回0或NULL

free只能free你申请来的，不要
void *p; p=...; p++; free(p); //会提示所free的不是申请来的，出错

-------------枚举
enum color{red, yellow, green}; //这样red、yellow、green分别是代表了int类型的常量0、1、2
用处：void f(enum color c)
-------------结构
struct date *pDate = &today;//结构变量的名字并不是结构变量的地址（而数组是的），所以&today前面的&不能省（而如果是数组，可以省）