#include<stdio.h>

main()
{
	FILE *p;
	char data[1000];
	p=fopen("p-10 file krish.txt","a");
	if(p==NULL)
	{
		printf("colud not open file");
	}
	else
	{
		printf("enter any value:-");
		gets(data);
		fputs("\n",p);
		fputs(data,p);
		printf("data enter successfully.");
		
	fclose(p);	
	}
}