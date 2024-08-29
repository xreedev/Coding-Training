#include<stdio.h>

void main()

{
int interior,exterior,i;
float surfint[100],surfext[100],totalext,totalint;

printf("ENTER NUMBER OF INTERIOR WALLS \n");
scanf("%d",&interior);
printf("\nENTER NUMBER OF EXTERIOR WALLS\n");
scanf("%d",&exterior);
for(i=0;i<interior;i++)
{
printf("\nENTER SURFACE AREA OF INTERIOR WALL -%d\n",i+1);
scanf("%f",&surfint[i]);
totalint+=surfint[i];
}
for(i=0;i<exterior;i++)
{
printf("\nENTER SURFACE AREA OF EXTERIOR WALLS -%d\n",i+1);
scanf("%f",&surfext[i]);
totalext+=surfext[i];
}
float total;
total=(totalint*18)+(totalext*12);
printf("\nTOTAL COST IS %f",total);
}
