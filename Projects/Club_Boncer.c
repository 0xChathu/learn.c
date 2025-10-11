#include <stdio.h> 
int main(void)

{
   int age;
    printf("What is your age ? \n");
    scanf("%d", &age);
    
    if(age>=18)
    {
    printf("You are allowed to enter\n");
    }
    else
    {
    printf("You are not allowed to enter\n");
    }
    
    return 0;
}

