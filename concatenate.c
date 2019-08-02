#include<stdio.h>

int main()
{
	char str1[50],str2[50],str3[50];
	int i=0,j=0;
        printf("enter str1\n");
	gets(str1);
	 printf("enter str2\n");
        gets(str2);
	while(str1[i]!='\0')
	{
	    str3[j]=str1[i];
	    i++;
	    j++;
	}
	i=0;
	while(str2[i]!='\0')
	{
		str3[j]=str2[i];
		i++;
		j++;
	}
	str3[j]='\0';
	printf("concatenated string\n ");
	puts(str3);
	return 0;
}

