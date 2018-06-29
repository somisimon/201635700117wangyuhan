#include <stdio.h>
#include <string.h>
void stob(char s[]);                 
int main()
{
    char str[10];
    gets(str);                         
    stob(str);                       
    puts(str);                      
    return 0;
}
void stob(char s[])
{
    int i, j;
    char temp;
    for (i=0; i<10; i++)
        for (j=i+1; j<10; j++)
            if (s[i]>s[j]){
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
}
