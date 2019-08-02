#include<stdio.h>
#include<string.h>
void  checkPalindrome(char *str,char *str1)
{
     int len=strlen(str);
     int len2=strlen(str1);
     int count=0;
     if(len!=len2)
	     printf("not palindrome");
     if(len==len2)
     {
	     for(int i=0;i<len;i++)
	     {
		     if(str[i]!=str1[i])
			     count++;
	     }
     }
     if(count==0)
	     printf("Strings are palindrome");
     else
	     printf("Strings are not palindrome");
}

int main()
{
	char str[20];
	char str1[20];
	gets(str);

	strcpy(str1,str);
	printf("Original String\n");
	puts(str1);
	int i=0,j=0;
	j=strlen(str)-1;
	while(i<j)
	{
	  char temp;
	  temp=str[j];
	  str[j]=str[i];
	  str[i]=temp;
	  i++;
	  j--;
	}
	printf("reversed string\n");
	puts(str);
      checkPalindrome(str,str1);


	return 0;
}
