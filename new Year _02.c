int add();
void pattern();
int habits () ;
void star() ;
int song ();
void bgmi();
int a=5;
int b=5;
int reating;
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
    habits () ;
    habits () ;
    habits () ;
    habits () ;
    habits () ;
    habits () ;
    
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
int habits (int) 
{
printf("Enter your Habits[S]\n(1-10)");
scanf("%d",&reating);
switch(reating)
{

case 1:
printf("You are Speak True  \n",reating);
break;
case 2:
printf("You are Speck false \n",reating);
break;
case 3:
printf("You  are Rise Early In Morning\n",reating);
break;
case 4:
printf("You are Rise Let in Morning \n",reating);
break;
case 5:
printf("You   are  Daily WorkouT \n",reating);
break;
case 6:
printf("You are Daily Not Workout \n",reating);
break;
case 7:
printf("You Respect The Others\n",reating);
break;
case 8:
printf("You are Don't respect Other's \n",reating);
break;
case 9:
printf("You are Fully Focas On Study's\n",reating);
break;
case 10:
printf("You are Not Focas On study \n",reating);
break;
default:
printf("Your Habits [Plz Chose To Under 10Number]is invalid \n",reating);
break;
}
}

