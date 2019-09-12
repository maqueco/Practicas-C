#include <stdio.h>
 
void swap(int *x, int *y);
 
int main(int argc, char *argv[])
{
    int a, b;
     
    printf("a: ");
    scanf("%d", &a);
     
    printf("b: ");
    scanf("%d", &b);
     
    swap(&a, &b);
     
    printf("a: %d\nb: %d\n", a, b);
     
    return 0;
}
 
void swap(int *x, int *y)
{
    int tmp;
     
    tmp = *x;
    *x = *y;
    *y = tmp;
}
