#include<stdio.h>
#include<conio.h>
int main(){
    int a=10,b=15,c;
    printf("a=%d b=%d\n",a,b);
    c=a;
    a=b;
    b=c;
    printf("a=%d b=%d",a,b);

    return 0;
}