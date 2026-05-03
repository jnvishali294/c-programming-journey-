#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);

    printf("%d\n", a++);
    printf("%d\n", ++b);
    printf("%d\n", a > 0 && b > 0);

    return 0;
}
