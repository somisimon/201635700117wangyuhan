#include <stdio.h>
int main()
{
    int upper,lower,digit,space,other,i,j;
    upper=lower=digit=space=other=0;
    char a[3][80]={'\0'};
    printf("�������������֣�\n");
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
    printf("�����������й���:\nСд��ĸ��\t%d\n��д��ĸ:\t%d\n���֣�\t\t%d\n�ո�\t\t%d\n�����ַ���\t%d\n",lower,upper,digit,space,other);
}

