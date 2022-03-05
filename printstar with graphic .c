int add();
void pattern ();
void star() ;
int song ();
int a=5;
int b=5;
int g=10;
int i, x, s, p, q, r;
#include<stdio.h>
#include<conio.h>
int main()
{   pattern();
    printf("Print Star\n");
    pattern();
    add();
    song();
    star() ;
    return 0;
}
int add(int) 
{int sum;

sum=a+b;
printf("%d+%d= %d\n",a,b,sum);

}
void pattern (void) 
{

for(i=1;i<=15;i++)
{
printf("-");
}
printf("\n");

}
 int song (int) 
{
  printf("\n Star is %d 👇\n",g);

}
void star(void) 
{
for(s=1;s<=4;s++)
{
for(x=1;x<=s;x++)
{
printf("⭐");
}
printf("\n");
}


}