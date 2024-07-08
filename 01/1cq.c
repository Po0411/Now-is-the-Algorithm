#include <stdio.h>

int main() 
{
    // 3개 정수 중 최댓값을 구하는 알고리즘 구현
    int a, b, c;

    printf("세 정수의 최댓값을 구합니다. \n");
    printf("a 값: "); scanf("%d", & a);
    printf("b 값: "); scanf("%d", & b);
    printf("c 값: "); scanf("%d", & c);

    //최댓값을 구하는 알고리즘은 아래 처럼 하면 됩니다.
    int max = a;
    if(b > max) max = b;
    if(c > max) max = c;

    printf("최댓값은 %d 입니다.", max);
    return 0;
}