#include<stdio.h>

void swap(char *str,char*str2)
{
	char   *temp;
	temp=str;
	str=str2;
	str2=temp;
	 printf("String 1 is %s and String2 is %s ",str,str2);

}

int main()
{
	char str[20];
	char str1[20];
        printf("enter string\n");
	gets(str);
         printf("enter second  string\n");
        gets(str1);
	swap(str,str1);
      //	printf("String 1 is %s and String2 is %s",str,str1);
	return 0;
}


        


