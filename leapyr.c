#include <stdio.h>
int main()
{
	int year1 , year2,i;
	printf("Enter a range: ");
	scanf("%d%d", &year1 , &year2);
	printf("The leap years are :\n");
	for(i=year1; i<=year2; i++)
	{
		if(((i%400==0) &&(i%100==0))||((i%4==0)&& (i%100!=0))){
			printf("%d\n",i);
		}
	}
	return 0;
}

