#include<stdio.h>
#include<math.h>
int main()
{int choice,n;
double fact=1,i,square,product,sum,difference,quotient,remainder,a,b,exp;
printf("CALCULATOR \n");
printf("------------------------------------------------------------------------- \n");
printf(" 1. Square \n");
printf(" 2. Factorial \n");
printf(" 3. Find Odd or Even \n");
printf(" 4. Sum Of Two Numbers \n");
printf(" 5. Difference Of Two Numbers \n");
printf(" 6. Product Of Two Numbers \n");
printf(" 7. Quotient \n");
printf(" 8. Remainder \n");
printf(" 9. a^b \n");
printf(" 10. Exit \n");
printf(" Enter your Choice: ");
scanf("%d", &choice);
if(choice<4)
{printf("\n Enter Any Number: ");
scanf("%d", &n);}
else if(choice>3,choice<10)
{printf("\n Enter The First Number: ");
scanf("%lf",&a);
printf("\n Enter The Second Number: ");
scanf("%lf",&b);}
else
{printf("Exit The CALCULATOR \n");}
switch (choice)
{
case 1: square=n*n;
printf("The Square of the Given number is %lf\n", square);
break;
case 2:
for(i=1;i<=n;i++)
{
fact=fact*i;
 }
printf("The Factorial of a given number is %lf\n", fact);
break;
case 3:
switch (n%2)
{
case 0:
printf("Given Number is Even\n");
break;
case 1:
printf("Given Number is Odd\n");
break;}
break;
case 4: sum=a+b;
printf("The Sum Of The Two Numbers is %lf\n", sum);
break;
case 5: difference=a-b;
printf("The Difference Of The Two Numbers is %lf\n", difference);
break;
case 6: product=a*b;
printf("The Product Of Two Numbers is %lf\n", product);
break;
case 7: quotient=a/b;
printf("Quotient is %lf\n", quotient);
break;
case 8: remainder=fmod(a,b);
printf("Remainder is %lf\n", remainder);
break;
case 9: exp=pow(a,b);
printf("a^b is %lf\n", exp);
case 10:
exit(0);
default:
printf("Invalid Choice. Please try again\n");
}
return 0;
}