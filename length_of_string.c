#include<stdio.h>

int main()
{
	char str[20];
      int i=0,length;
      printf("Enter the string\n");
      gets(str);
      while(str[i]!='\0')
	      i++;
      length=i;
      printf("Length of String is:  %d ",length);
      return 0;
}


