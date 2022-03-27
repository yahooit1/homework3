#include <stdio.h>
void print1 (int *ptr, int rows); //print1 함수 선언
int main()
{
printf("[----- [Gahyun] [2020045070] -----]\n");
int one[] = {0, 1, 2, 3, 4}; //정수형 배열에 0,1,2,3,4 저장 
printf("one = %p\n", one); //one=&one[0]
printf("&one = %p\n", &one); //one의주소 = 시작주소
printf("&one[0] = %p\n", &one[0]); //one[0]의 주소
printf("\n");
print1(&one[0], 5); //print1함수 호출
return 0;
}
void print1 (int *ptr, int rows) //print1함수 구현
{/* print out a one-dimensional array using a pointer */
int i; //정수형 변수 i 선언
printf ("Address \t Contents\n"); //Address tap Contents
for (i = 0; i < rows; i++) //i=0부터 행만큼 i++ 반복
printf("%p \t %5d\n", ptr + i, *(ptr + i)); //ptr+i = &(ptr[i]) , ptr+i의 값
printf("\n");
}
