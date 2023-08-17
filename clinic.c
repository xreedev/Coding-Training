// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
   int patient[19],earnings=0,i;
   for(i=0;i<20;i++)
   {   patient[i]=0;
       printf("\nENTER AGE OF PATIENT %d :",i+1);
       scanf("%d",&patient[i]);
       if(patient[i]<0)
       printf("INVALID INPUT");
       else if(patient[i]<17)
       earnings+=200;
       else if(patient[i]<40)
       earnings+=400;
       else if(patient[i]<120)
       earnings+=300;
       else
       printf("INVALID INPUT");
   }
 
    printf("TOTAL EARNINGS = %d",earnings);
    return 0;
}