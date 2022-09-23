#include <stdio.h>

/*our calc*/

int main()
{
int choice;
long num1, num2, x;
printf("Please choose your operator:"
"\n1 = Add"
"\n2 = Sub"
"\n3 = Mult"
"\n4 = Div"
"\n5 = Sq"
"\n6 = exit"
"\n\nChoice: ");
scanf("%d", &choice);
//while loop to check range
while(choice < 1 || choice > 6)
{
printf("\nPlease choose the above indicated options."
"\nChoice: ");
scanf("%d", &choice);
}

switch (choice)
{
case 1:
printf("Enter two numbers: \n");
scanf("%ld %ld", &num1, &num2);
x = num1 + num2;
printf("Sum = %ld", x);
break;
case 2:
printf("Enter two numbers: \n");
scanf("%ld %ld", &num1, &num2);
x = num1 - num2;
printf("Subtraction = %ld", x);
break;
case 3:
printf("Enter two numbers: \n");
scanf("%ld %ld", &num1, &num2);
x = num1 * num2;
printf("product = %ld", x);
case 4:
printf("Enter Dividend: ");
scanf("%d", &num1);
printf("Enter Divisor: ");
scanf("%d", &num2);

while(num2 == 0)
{
printf("\nBe serious! tumia akili. "
"\nEnter something other than zero: ");
}
x = num1 / num2;
printf("\nQuotient = %ld", x);
break;
case 5:
printf("Enter any number: \n");
scanf("%ld", &num1);
x = num1 * num1;
printf("Square = %ld", x);
case 6:
return 0;
default: printf("\nError");
}
}
