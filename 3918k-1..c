#include<stdio.h>

main()
{
	 FILE *p;
	 char data[1000];
	 
	 p = fopen("D:/kkb.txt","w");
	 
	 if(p == NULL)
	 {
	 	printf("file could not open");
	 }
	 else
	 {
	 	printf("enter data =");
	 	gets(data);
	 	fputs(data,p);
	 	printf("data add succsesfully....");
	 }
	 fclose(p);
}

