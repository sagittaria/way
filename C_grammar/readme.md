慕课 程序设计入门——C语言 浙江大学 翁恺

随手记：
int isPrime(int a[], int length); //像这样把数组当参数传进去的，必须多传入一个(数组长度)参数，直接写int a[length]，里面的length是没有意义的，反正也不能用sizeof(a)
//因为int a[]传进去的是 a[0]的地址，（int a[]里的a其实是个数组指针），写成 int *a 也完全可以

sizeof(int) 返回4，表示内存里int类型长度是4个字节

&获得变量的地址，所以scanf("%d",&i) 意思是把“扫描得到的数字”扔到变量i(所在的地址)里

输出地址时，不宜当成整数输出
int i; printf("%p",&i);//而不建议用printf("%d",&i);

int a[] 等价于 int * const a

char word[]={'h','e','l','l','o'};		这是“字符数组”但不是“字符串”
char word[]={'h','e','l','l','o','\0'}; 这是“字符数组”，且是“字符串”，可以用一些字符串的函数

更多定义方式：
char *str="Hello";
char word[]="Hello";
char line[10]="Hello";