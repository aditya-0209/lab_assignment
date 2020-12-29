#include<stdio.h>
int main()
{
int num1, num2,choice;

printf("Enter The Choice\n");
printf("1.Addition\n2.Substraction\n3.Multiplication\n4.Division");
scanf("%d",&choice);
if (choice > 4)
{
    printf("Select Within The Range!\n");
}
else
{
    printf("Enter Two Numbers");
    scanf("%d %d",&num1,&num2);
}

switch(choice)
{
    case 1:
    printf("%d + %d =%d\n",num1,num2,(num1+num2));
    break;
     case 2:
    printf("%d - %d =%d\n",num1,num2,(num1-num2));
    break;
     case 3:
    printf("%d * %d =%d\n",num1,num2,(num1*num2));
    break;
     case 4:
     if(num2 !=0)
    printf("%d / %d =%d\n",num1,num2,(num1/num2));
    else
    printf("number can't be divided by 0\n");
    break;
    default:
    printf("you entered the wrong choice");
    break;
}

    return 0;
}