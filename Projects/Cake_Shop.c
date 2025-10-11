#include <stdio.h>
int main (void)

{
int order, quantity;
char more;
float total = 0.0;
float price;

puts("|• WELCOME TO CHATHU CAKE SHOP •|");
puts("");

do {

// Display Menu

puts("¥¥-- CAKE MENU --¥¥");
puts("#1. Butter Cake");
puts("#2 Chocolate Cake");
puts("#3 Caramel Cake");
puts("#4 Icing Cake");
puts("#5 Velvet Cake");
puts("");
printf("What cake you wish to order (1-5) : ");
scanf("%d", &order);
printf("Quantity : \n");
scanf("%d",&quantity);

    switch (order)
                {
    case 1:
    price = 350; printf("~Butter Cake");
    break;
    
    case 2:
    price = 250; printf("~Chocolate Cake");
    break;
    
    case 3:
    price = 150; printf("~Caramel Cake");
    break;
    
    case 4:
    price = 1500; printf("~icing Cake");
    break;
    
    case 5:
    price = 2000; printf("~velvet Cake");
    break;
    
    default:
    printf("Invalid Choice, Please select 1-5\n");
    continue;
                }
    
    float ItemTotal = price * quantity;
    total += ItemTotal;
    printf("x%d added! +Rs.%.2f\n", quantity, ItemTotal);
    
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
