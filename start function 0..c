int add();
void pattern();
void star() ;
int song ();
void bgmi();
int yash();
void pubg();
int a=5;
int b=5;
int g=10;
int r=1;
int f=0;
int s;
int x;
int i;
int q;
int p;
    
#include<stdio.h>
#include<conio.h>
int main()
{   
    pattern ();
    printf("Print Star\n");
    pattern();
    add();
    
    song();
    
    star() ;
    pattern ();
    pubg();
    bgmi();
    pubg();
    pattern ();
    driving ();
    yash();
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
  printf("\n Star is  %d ⭐\n",g);

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
void bgmi (void) 
{
while(r<=10)
{
printf("\n 😈 Sachin Gavali 👿\n");

r++;

}

}
void pubg (void) 
{
for(f=1;f<=10;f++)
{
printf(" *");
}
}
int driving (int) 
{
printf("\nEnter the Age ::");
scanf("%d",&q);
if(q<=18)
{
printf("\n Tu Drive Nahi karu Shakat.");
}
else
{
printf(" \nTr Tu drive kru shakato. \n");
}
}

int yash(int)
{

    printf("\n\tenter value for days\n");
    scanf("%d",&p);
    switch(p)
    {
        case 1:
        printf("somvar");
        break;
        case 2:
        printf("mangalvar");
        break;
        case 3:
        printf("budhvar");
        break;
        case 4:
        printf("guruvar");
        break;
        case 5:
        printf("shukravar");
        break;
        case 6:
        printf("shanivar");
        break;
        case 7:
        printf("ravivar");
        break;
        default:
        printf("no this type of day...!😁");
    }
}
