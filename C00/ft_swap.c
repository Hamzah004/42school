#include <stdio.h>
void ft_swap(int *a, int *b){
    int c = *b;
    *b = *a;
    *a = c;
}

int main(void)
{
    int a = 42;
    int b = 24;
    ft_swap(&a, &b);
    printf("a:%d\nb:%d",a,b);
}
