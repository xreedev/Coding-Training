// Online C compiler to run C program online
#include <stdio.h>

void main()
{
    int weight;
    printf("ENTER LOAD OF MACHINE\n");
    scanf("%d",&weight);
    if(weight>7000)
     printf("OVERLOAD");
    else if(weight<0)
     printf("INVALID INPUT");
    else
    {
      if(weight<2000)
      printf("TIME REQUIRED IS 25 MINUTES");
      else if(weight<4000)
      printf("TIME REQUIRED IS 35 MINUTES");
      else
      printf("TIME REQUIRED IS 45 MINUTES");
    }
}