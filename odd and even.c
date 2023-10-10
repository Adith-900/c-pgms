#include<stdio.h>
#include<conio.h>
main()
{
FILE *fp,*fp1,*fp2;
int c,i;
clrscr();
fp=fopen("data.txt","w");
printf("enter the numbers");
for(i=0;i<10;i++)
{
scanf("%d",&c);
putw(c,fp);
}
fclose(fp);
fp=fopen("data.txt","r");
fp1=fopen("even.txt","w");
fp2=fopen("odd.txt","w");
while((c=getw(fp))!=EOF)
{
if(c%2==0)
putw(c,fp1);
else
putw(c,fp2);
}
fclose(fp);
fclose(fp1);
fclose(fp2);
fp1=fopen("even.txt","r");
while((c=getw(fp1))!=EOF)
printf("%4d",c);
printf("\n\n");
fp2=fopen("odd.txt","r");
while((c=getw(fp2))!=EOF)
printf("%4d",c);
fcloseall();

}
