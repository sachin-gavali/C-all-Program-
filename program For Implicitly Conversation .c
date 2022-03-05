#include<stdio.h>
int main() 
{
int x=10;
char y='a';
//y implicitly convert into int ASCII value of'c'is 97
x=x+y;
printf("x=%d",x);
return 0;
}
