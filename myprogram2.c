#include<stdio.h>
main()
{
char name[25];
float mark1,mark2,mark3,sum=0,avg=0;
printf("Enter the name of the student");
scanf("%[^\n]",name);
printf("Enter the three marks of the student");
scanf("%f%f%f",&mark1,&mark2,&mark3);
sum=mark1+mark2+mark3;
avg=sum/3;
printf("name %s",name);
printf("\nmark1 %f,\nmark2 %f,\nmark3 %f",mark1,mark2,mark3);
printf("/nsum %f",sum);
printf("/naverage %f",avg);
}
