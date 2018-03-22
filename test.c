vgghdkjhhjgvl#include<stdio.h>
main()
{
char a[20],b[20];
int i;
printf("enter  a text");
for(i=0;i<20;i++)
{
scanf("%c",&a[i]);
}
printf("enter another text");
for(i=0;i<20;i++)
{
scanf("%c",&b[i]);
}
for(i=0;i<20;i++)
{
if(a[i]!=b[i])
{
printf("not equal");
break;
}
}
}
