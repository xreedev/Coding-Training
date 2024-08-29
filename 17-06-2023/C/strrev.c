#include<string.h>
void main()
{
    int i,j,k;
    char a[50],b[50];
    printf("Enter the string:");
    gets(a);
    int len = strlen(a);
    for(i=0;i<len;i++)
    {
        for(j=i+1;j<len;j++)
        {
            if(a[i] ==a[j])
            {
                for(k=j;k<len;k++)
                {
                    a[k] = a[k+1];
                    a[len]='\0';
                    
                }
                len--;
                j--;
            }
        }
    }
    k = len-1;
    for(i=0;i<len;i++)
    {
        b[i] = a[k];
        k--;
    }
    printf("%s",b);
}