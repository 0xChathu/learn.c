#include <stdio.h>
int main (void)

{
int order;
char more;
float total = 0.0;

puts("|• WELCOME TO CHATHU CAKE SHOP •|");
puts("");

do {

// Display Menu

puts("¥¥-- CAKE MENU --¥¥");
puts("#1. Butter Cake");
puts("#2 Chocolate Cake");
puts("#3 Carromal Cake");
puts("#4 Icing Cake");
puts("#5 Velvet Cake");
puts("");
printf("What cake you wish to order (1-5) : ");
scanf("%d", &order);

    switch (order)
    {
    case 1:
    printf("∆ Butter Cake ∆ successfully ordered | Price would be Rs.500 \n");
    total +=500;
    break;
    case 2:
    printf("∆ chocolate Cake ∆ successfully ordered | Price would be Rs.650 \n");
    total +=650;
    break;
    case 3:
    printf("∆ Carromal Cake ∆ successfully ordered | Price would be Rs.450 \n");
    total +=450;
    break;
    case 4:
    printf("∆ icing Cake ∆ successfully ordered | Price would be Rs.1500 \n");
    total +=1500;
    break;
    case 5:
    printf("∆ Velvet Cake ∆ successfully ordered | Price would be Rs.6500 \n");
    total +=6500;
    break;
    default:
    printf("Invalid Choice, Please select 1-5\n");
    continue;
    }
    
    printf("\nAnything else ? : (Y/N) ");
    scanf(" %c", &more);
    puts("");
   } 
    
while (more=='y' || more=='Y');

puts("--- HERE IS YOUR TOTAL ---");
printf("Total amount is : Rs.%.2f\n",total);
puts("");
puts("∆∆ Come Back Again ∆∆");
puts("°°°°°°° Welcome °°°°°°°");
    
    return 0;
}
