int add();
void pattern();
void star() ;
int song ();
void bgmi();
int a=5;
int b=5;
int g=10;
int r=1;
int i, x, s, p, q;
#include<stdio.h>
#include<conio.h>
int main()
{ 
    pattern ();
    printf("Happy New year 2022\n");
    pattern();
    add();
  
    song();
  
    star() ;
    pattern ();
    driving ();
    bgmi ();
    
    pattern ();
    
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
  printf("\n Star is  %d 💫\n",g);

}
void star(void)
{
for(s=1;s<=4;s++)
{
for(x=1;x<=s;x++)
{
printf("💫");
}
printf("\n");
}
}
void bgmi (void)
{
while(r<=5)
{
printf("\n ✨ Happy New year2022 ✨\n");

r++;

}

}
int driving (int)
{
printf("\nEnter the value ::");
scanf("%d",&q);
if(q>=18)
{
printf("\n yes you can celebrate.");
}
else
{
printf(" \n no you can not able to celebrate . \n");
}
}
