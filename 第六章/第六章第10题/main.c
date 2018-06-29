#include <stdio.h>
int main()
{
    int upper,lower,digit,space,other,i,j;
    upper=lower=digit=space=other=0;
    char a[3][80]={'\0'};
    printf("请输入三段文字：\n");
    for(i=0;i<3;i++)
    {
        for(j=0;(a[i][j]=getchar())!='\n';j++)
        {
            if(a[i][j]>='a'&&a[i][j]<='z')
                lower++;
            else if(a[i][j]>='A'&&a[i][j]<='Z')
                upper++;
            else if(a[i][j]>='0'&&a[i][j]<='9')
                digit++;
            else if(a[i][j]==' ')
                space++;
            else
                other++;
        }
    }
    printf("这三行文字中共有:\n小写字母：\t%d\n大写字母:\t%d\n数字：\t\t%d\n空格：\t\t%d\n其他字符：\t%d\n",lower,upper,digit,space,other);
}

