#include <stdio.h>

int main()
{
    int age;
    float mark;
    char name[20];

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter mark: ");
    scanf("%f", &mark);

    printf("Enter name: ");
    scanf("%s", name);

    printf("Age is %d\n", age);
    printf("Mark is %.2f\n", mark);
    printf("Name is %s\n", name);

    return 0;
}
