#include<stdio.h>

main()
{
	FILE *p;
	char data[1000];
	p=fopen("p-10 file krish.txt","a");
	
	if(p==NULL)
	{
		printf("could not open file");
	}
	else
	{
		printf("enter any value:-");
		gets(data);
		fputs("\n",p);
		printf("data enter successfully.");
		
		fclose(p);
	}
  printf("\n*****************************************************************************\n");
  p=fopen("p-10 file krish.txt","r");
  if(p=NULL)
  {
  	printf("could not open file");
	  }	
	  else
	  {
	      while(fgets(data,50,p)!=NULL)
	      {
	      	printf("%s",data);
		  }
		  fclose(p);
	  }
}