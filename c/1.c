/*
    main 함수 안의 내용만 수정해주세요.
    수정할 경우, 자동 채점 프로그램이 제대로 동작하지 않을 가능성이 있습니다.
*/

#include <stdio.h>

int main() {
    // 이곳에 코드를 작성해주세요!
    int a,b,c,d;
    scanf("%d", &a);
    b = a / 100;
    c = (a-100*b) / 10;
    d = a - (100*b + 10*c);
    printf("%d%d%d\n", d, c, b);
    return 0;
}