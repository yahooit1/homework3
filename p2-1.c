#include <stdio.h>
#define MAX_SIZE 100
float sum(float [], int); //sum 함수 선언
float input[MAX_SIZE], answer; // input 배열 선언, answer 변수 선언
int i; //i 변수선언
void main(void)
{
printf("[----- [Gahyun] [2020045070] -----]\n");
for(i=0; i < MAX_SIZE; i++) //i=0부터 MAX_SIZE까지 i++ 반복
input[i] = i; //input[i]=i로 초기화 
/* for checking call by reference */
printf("address of input = %p\n", input); //input=&input[0]
answer = sum(input, MAX_SIZE); //answer=sum함수의 결과
printf("The sum is: %f\n", answer); //answer출력
}
float sum(float list[], int n) //sum함수구현
{
printf("value of list = %p\n", list); //list=&list[0] 
printf("address of list = %p\n\n", &list); //list의 주소 = list의 시작주소 = &list[0]
int i; //지역변수선언 
float tempsum = 0; //지역변수선언
for(i = 0; i < n; i++) //i=0부터 n까지 i++ 반복
tempsum += list[i]; //tempsum이라는 변수에 list[i]값을 반복해서 더함
return tempsum; //tempsum을 반환
}
