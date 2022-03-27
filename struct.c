#include <stdio.h>

struct student1
{                  // student1 구조체 선언
    char lastName; // char형 lastName
    int studentId; // int형 studentId
    char grade;    // char형 grade
};
typedef struct
{ //구조 데이터 타입 선언
    char lastName;
    int studentId;
    char grade;
} student2; //구조체 별칭 student2
int main()
{
    printf("[----- [Gahyun] [2020045070] -----]\n");
    struct student1 st1 = {'A', 100, 'A'};         //구조체 변수 선언 후 구조체 student1에 st1={'A' , 100 , 'A'}를 저장 student1의 LastName=A, StudentId=100,grade=A
    printf("st1.lastName = %c\n", st1.lastName);   // st1.lastname출력 : student1의 lastname 출력 A
    printf("st1.studentId = %d\n", st1.studentId); // st1.studentId 출력 :student1의 studentId출력 200
    printf("st1.grade = %c\n", st1.grade);         // st1.grade 출력 : student1의 grade출력 A
    student2 st2 = {'B', 200, 'B'};                //구조체 변수 선언 후 구조체 student2에 st2={'b',200,'B'}저장 : lastname='b',studentId=200,grade='B'
    printf("\nst2.lastName = %c\n", st2.lastName); // st2.lastname출력 : student2의 lastname출력 : B
    printf("st2.studentId = %d\n", st2.studentId); // st2.studentId출력 : student2의 studentId출력 : 200
    printf("st2.grade = %c\n", st2.grade);         // st2.grade 출력 : student2의 grade 출력 : B
    student2 st3;                                  // student2에 구조체 변수 st3 선언
    st3 = st2;                                     // st3=st2 대입
    printf("\nst3.lastName = %c\n", st3.lastName); // st3.lastname출력 : st3=st2이므로 B
    printf("st3.studentId = %d\n", st3.studentId); // st3.studentId출력 : st3=st2이므로 200
    printf("st3.grade = %c\n", st3.grade);         // st3.grade 출력 : st3=st2이므로 B
    /* equality test */
   /*if (st3 == st2) //not working //전체 구조를 직접 비교 불가능 하므로 실행되지 않음 , 
                                    문자열 비교를 하거나 구조를 치환해야한다. 해당 과제에서는 실행결과를 보이기 위해
                                    주석처리함. 
        printf("equal\n");
    else
        printf("not equal\n");*/
    return 0;
}
