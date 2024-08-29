#include <stdio.h>

void main()
{
int parking[100][100],row,col,flag=0,free[100],i,j;
printf("ENTER NUM OF ROWS");
scanf("%d",&row);
printf("ENTER NUM OF COLUMNS");
scanf("%d",&col);
for(i=0;i<row;i++)
{
    for(j=0;j<col;j++)
    {
        printf("ENTER THE STATUS OF ROW %d AND COLUMN %d",i,j);
        scanf("%d",&parking[i][j]);
    }
}
for(i=0;i<row;i++)
{
    for(j=0;j<col;j++)
    {
        if(parking[i][j]==1)
        flag+=1;
    }
    if(flag==col)
    {
        free[i]==1;
    }
}
for(i=0;i<row;i++)
{
    if(free[i]==1)
    printf("ROW NUMBER -%d",i);
}
}