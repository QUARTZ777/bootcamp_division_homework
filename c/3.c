/*
    main 함수 안의 내용만 수정해주세요.
    수정할 경우, 자동 채점 프로그램이 제대로 동작하지 않을 가능성이 있습니다.
*/

#include <stdio.h>

int main() {
    // 이곳에 코드를 작성해주세요!
    int a;
    scanf("%d", &a);
    if(a>=0 && a<12) printf("AM\n");
    else if(a>=12 && a<=23) printf("PM\n");
    return 0;
}