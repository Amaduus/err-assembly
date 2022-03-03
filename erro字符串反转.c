
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

int main()
{
    int  n,m=0,t;
    char * a,*b;

    printf("要输入的元素个数：");
    scanf("%d", &n);
         
    a = (char *)malloc(n * sizeof(char));
    b = (char*)malloc(n * sizeof(char));
    scanf("%s", &a);
    scanf("%d", &m);
    t = n - m + 1;
    printf("dddd\n");       
    for (int i = 0; i < t; i++)
    {
        b[i] = a[m - 1]; m++;
    }

    return 0;
}