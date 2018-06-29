#include<stdio.h>
#include<string.h>
int main()
{
    char cs[3][20],*p[3]={cs[0],cs[1],cs[2]},*temp;
    int i,j;
 
    printf("Input three string:\n");
    for(i=0;i<3;i++)gets(cs[i]);
 
    for (i=0;i<2;i++)
    {
		for (j=i+1;j<3;j++)
		{
			if(strcmp(p[i],p[j])>0)
			{
				temp=p[i];
				p[i]=p[j];
				p[j]=temp;
			}
		}
	}
 
	printf("≈≈–Ú∫Û£∫\n");
    for(i=0;i<3;i++)
		printf("%s\n",p[i]);
    return 0;
}

