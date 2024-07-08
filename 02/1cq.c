#include <stdio.h>

int main() 
{
    //a 배열안에 요소 넣는다
    int a[5];
    for(int i = 0; i < 5; i++)
    {
        printf("a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    //a 배열안에 요소 출력한다
    puts("각 요소의 값");
    for(int i = 0; i < 5; i++)
    {
        printf("a[%d] = %d\n", i, a[i]);
    }
    return 0;
}