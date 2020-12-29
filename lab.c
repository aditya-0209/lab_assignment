#include<stdio.h>
#include<stdlib.h>
int main(){
int a, b;
printf("Enter The Numbers To be Swapped\n");
scanf("%d%d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("a=%d b=%d",a,b);
    
    return 0;
}