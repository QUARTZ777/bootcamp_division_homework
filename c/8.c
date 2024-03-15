/*
    main 함수 안의 내용만 수정해주세요.
    수정할 경우, 자동 채점 프로그램이 제대로 동작하지 않을 가능성이 있습니다.
*/

#include <stdio.h>
/*int Func(int a);*/
int main() {
    // 이곳에 코드를 작성해주세요!
    int a=0,b=1,n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        a = a+i;
        b = b*i;
    }
    printf("%d\n%d\n", a, b);
    return 0;
}
/*int main(){
    int b=0, n;
    scanf("%d", &n);
    b= Func(n);
}

int Func(int a){
    int c=1;
    for (int i =1; i<=a; i++)
        c=c*i;
    return c;
}*/