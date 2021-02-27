#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void input();
void Exe(int n2,char choice2)
{
		int r=rand(),sum; char a;
		printf("Computers choice is %d,",r);
		sum=r+n2;
		printf("addition is %d,",sum);
		if(choice2=='E')
		{
			 if(sum%2==0)
			 {   printf("you have won");
			 }
			 else
			 {    printf("you have lost");
			 }
		}
		else
		{
			 if(sum%2==0)
			 {   printf("you have lost");
			 }
			 else
			 {    printf("you have won");
			 }
		}
	 printf("\nlets play again shall we??");
	 scanf("%c",&a);
		 if(a=='y')
		 {
			main();
		 }
		 else
		 {
			printf("\n sorry, we cant make u happy wid this game");
		 }
}
void main()
{   char name[10],choice; int n1;
	 printf("\nHey there welcome!!,Lets play a game of odd or even!!\n Please enter your name ");
	 scanf("%s",&name);
	 printf("hello, %s please choose (E)ven or (O)dd\n",name);
	 scanf("%s",&choice);
	 printf("%s Please enter your number\n",name);
	 scanf("%d",&n1);
	 Exe(n1,choice);
}





