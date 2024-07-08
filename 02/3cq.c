#include <stdio.h>

int main() 
{
    // 아래 배열로 구구단 코드 제작 하기
    int a[8] = {2,3,4,5,6,7,8,9};
    int b[9] = {1,2,3,4,5,6,7,8,9};

    int na_a = sizeof(a) / sizeof(a[0]); //요소의 개수
    int na_b = sizeof(b) / sizeof(b[0]); //요소의 개수

    for(int i = 2; i < na_a; i++)
    {
        for(int j = 1; j < na_b; j++)
        {
            printf("%d * %d = %d \t",i, j, (i * j));
        }
        printf("\n");
    }
    return 0;
}