/*
    main 함수 안의 내용만 수정해주세요.
    수정할 경우, 자동 채점 프로그램이 제대로 동작하지 않을 가능성이 있습니다.
*/

#include <stdio.h>

int main() {
    // 이곳에 코드를 작성해주세요!
    int a;
    scanf("%d", &a);
    if(a>=90 && a<=100) printf("A\n");
    else if(a>=80 && a<90) printf("B\n");
    else if(a>=70 && a<80) printf("C\n");
    else if(a>=60 && a<70) printf("D\n");
    else if(a<60) printf("F\n");
    return 0;
}