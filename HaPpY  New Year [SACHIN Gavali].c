//FY Bcs [Sachin & Abujar]HaPpY New Year 
int add();
void pattern();
int habits () ;
void star() ;
int song ();
void bgmi();
int Sachin();
int a=5;
int b=5;
int reating;
int g=10;
int r=1;
int x, p, q;
int s;
int e;
int w;
int t;
int i;
int j;
int n;
//Using Global scope [For Costmize Code]
#include<stdio.h>
#include<conio.h>
//Headar File
int main()
// Main Function [Predefined function]
{ 
    pattern ();
    printf("Happy New year 2022\n");
    pattern();
        add();
     pattern();
        song();
        star();
    pattern ();
    driving ();
       bgmi ();
    pattern ();
        song();
        star();
        bgmi();
    habits () ;
    pattern() ;
    habits () ;
    pattern() ;
    habits () ;
    pattern() ;
    habits () ;
    pattern() ;
    habits () ;
    pattern() ;
    habits () ;
    pattern() ;
    Sachin () ;
    pattern() ;
       song() ;
       star() ;
       bgmi() ;
     Abujar() ;
    //Declaration function
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
printf(" _");
}
printf("\n");

}
int song (int)
{
  printf("\n Form [Bcs]Student %d 💫\n",g);

}
void star(void)
{
for(s=1;s<=4;s++)
{
for(x=1;x<=s;x++)
{
printf(" FY\t💖");
}
printf("\n");
}
}
void bgmi (void)
{
while(r<=5)
{
printf("\n \t✨ HaPpY New Year-20✨\n \t😈From SACHIN 😈\n");

r++;

}

}
int driving (int)
{
printf("\nEnter the value ::");
scanf("%d",&q);
if(q>=18)
{
printf("\n You Can Are Celebrate ");
}
else
{
printf(" \n You Are Don't Able To Celebrate\n");
}
}
int habits (int) 
{
printf("\nEnter The Number FOR::\n See Your Habits[S]\n(1-10)\n");
scanf("%d",&reating);
switch(reating)
{

case 1:
printf("\nYou are Speak True [Good]\n",reating);
break;
case 2:
printf("\nYou are Speck false[BAD]\n",reating);
break;
case 3:
printf("You  are Rise Early In Morning[Good]\n",reating);
break;
case 4:
printf("\nYou are Rise Let in Morning[BAD]\n",reating);
break;
case 5:
printf("\nYou   are  Daily WorkouT[Good]\n",reating);
break;
case 6:
printf("\nYou are Daily Not Workout[BAD]\n",reating);
break;
case 7:
printf("\nYou Respect The Others [GooD]\n",reating);
break;
case 8:
printf("\nYou are Don't respect Other's [BAD]\n",reating);
break;
case 9:
printf("\nYou are Fully Focas On Study's[ GooD]\n",reating);
break;
case 10:
printf("\nYou are Not Focas On study [BAD]\n",reating);
break;
default:
printf("\nYour Habits [Plz Chose To Under 1 To 10Number]is invalid \n",reating);
break;
}
}
int Sachin (int)
{
printf("\n\tEnter your reating (1-5)");
scanf("%d",&reating);
switch(reating)
{

case 1:
printf("Your reating is .Thank You ❤1\n",reating);
break;
case 2:
printf("Your reating is .\n\tThank You ❤2\n",reating);
break;
case 3:
printf("Your reating is .\n\tThank you❤3\n",reating);
break;
case 4:
printf("Your reating is. \n\tThank You ❤4\n",reating);
break;
case 5:
printf("Your reating is 5 .\n\t💖Thank You❤\n",reating);
break;
default:
printf("Your reating is invalid \n",reating);
break;
}
}


int Abujar(int)
{
 

    printf("Enter value of n : ");
    scanf("%d", &n);

    for(i=n/2; i<=n; i+=2)
    {
        for(j=1; j<n-i; j+=2)
        {
            printf(" ");
        }

        for(j=1; j<=i; j++)
        {
            printf("*");
        }

        for(j=1; j<=n-i; j++)
        {
            printf(" ");
        }

        for(j=1; j<=i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    for(i=n; i>=1; i--)
    {
        for(j=i; j<n; j++)
        {
            printf(" ");
        }

        for(j=1; j<=(i*2)-1; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    
}