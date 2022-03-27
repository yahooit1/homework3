#include<stdio.h>
#include<stdlib.h>
void main()
{
printf("[----- [Gahyun] [2020045070] -----]\n");
int **x;
printf("sizeof(x) = %lu\n", sizeof(x)); //*x의 주소의 크기
printf("sizeof(*x) = %lu\n", sizeof(*x)); //int형 변수 x의 주소의 크기
printf("sizeof(**x) = %lu\n", sizeof(**x));//int 형 변수 x의 실제값의 크기 4bytes
}
