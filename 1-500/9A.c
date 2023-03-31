#include<stdio.h>
int main()
{
    float y, w;
    scanf("%f%f", &y, &w);
    int max = (y>w)?y:w;
    int a, b;
    switch (max)
    {
    case 1:
        printf("1/1");
        break;
    case 2:
        printf("5/6");
        break;
    case 3:
        printf("2/3");
        break;
    case 4:
        printf("1/2");
        break;
    case 5:
        printf("1/3");
        break;
    default:
    printf("1/6");
        break;
    } 
}