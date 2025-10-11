#include <stdio.h>
int main(void)

{
char name[20];
printf ("Hey ... What is your first name - ");
scanf("%s", &name);

printf ("Hello %s\n", name); 

int a,b,sum,multiply;

printf("What is your first number - ");
scanf ("%d", &a);
printf("What is your second number - ");
scanf("%d", &b);

sum = a+b;
printf("Your sum is = %d\n", sum);

multiply = a*b;
printf("Your multiply value = %d", multiply);

return 0;
}
