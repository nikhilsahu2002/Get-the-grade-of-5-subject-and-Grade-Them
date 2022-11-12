#include<stdio.h>
#include<conio.h>
void main()
{
int math=0,physic=0,chemistry=0,biology=0,computer=0;
int mark,sum;
clrscr();
printf("Enter Math marks");
scanf("%d",&math);
printf("Enter physics marks");
scanf("%d",&biology);
printf("Enter chemistry marks");
scanf("%d",&chemistry);
printf("Enter biology marks");
scanf("%d",&physic);
printf("Enter computer marks");
scanf("%d",&computer);
sum =math + physic + chemistry + biology + computer ;
mark = sum/5;
// printf("%d",mark);

	if(mark<=100 && mark>=90)
		printf("Grade A");
	else if(mark<=89 && mark>=80)
		printf("Gread B");
	else if(mark<=79 && mark>=70)
		printf("Gread C");
	else if(mark<=69 && mark >=60)
		printf("Gread D");
	else if(mark<=59 && mark>=40)
		printf("Gread E");
	else
		printf("Gread F");
getch();
}