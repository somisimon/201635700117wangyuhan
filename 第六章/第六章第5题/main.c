#include<stdio.h>

int  main()
{
    int a[5]={8,6,5,4,1},i,n=5,temp;
    for(i=0;i<n/2;i++)
    {
        temp=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=temp;          
    }                 
   for(i=0;i<n;i++)
   {
      printf("%d\t",a[i]);        
   }               
    system("pause");
    return 0;
}
