#include<stdio.h>
int main() 
{
int reating;
printf("Enter your Habits[S]\n(1-10)");
scanf("%d",&reating);
switch(reating){

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
return 0;
}
