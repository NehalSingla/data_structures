#include<stdio.h>
#include<string.h>
int main()
{
	char str[50],str2[50];
	int len1=0,len2=0;
	int same=0;
	int i=0;
	printf("enter first string\n");
	gets(str);
	printf("enter second string\n");
	gets(str2);

	len1=strlen(str);
	len2=strlen(str2);
	if(len1==len2)
	{        
	        while(i<len1)
		{
			
        	if(str[i]==str2[i])
		i++;
		
	
		else break;
         	}	
        
	if(i==len1)
	{
		same=1;
		printf("strings are equal");
	}
	}
	if(len1!=len2)
	{
		same=0;
		printf("strings are not equal");
         }
		if(same==0)
		  {  
			 
                   
			if(str[i]>str2[i])
				{
					printf("str is greater\n");
				}
			else if(str[i]<str2[i])
				printf("str is greater");
		}

    return 0;
}
      
         

