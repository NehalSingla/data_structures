#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[])
{
int c= atoi(argv[1]);
printf("Number of elements are %d",c);
int first_num=0;
int sec_num=1;
printf("\n");
printf("%d %d ",first_num,sec_num);
for(int i=2;i<c;i++)
{ 	
    int	new_num=first_num+sec_num;
        first_num=sec_num;
	sec_num=new_num;
	printf("%d ",new_num);

}
return 0;
}

