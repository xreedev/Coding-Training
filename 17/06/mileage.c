// Online C compiler to run C program online
#include <stdio.h>

int main() {
 float diesel,distance,mileage=0;
 printf("ENTER THE QUANTITY OF DIESEL IN LITRES:");
 scanf("%f",&diesel);
 float gallons=0;
 gallons=diesel*0.2642;
 printf("ENTER THE DISTANCE COVERED in KILOMETRES:");
 scanf("%f",&distance);
 float miles=0;
 miles=distance*0.6214;
 mileage=(diesel/distance)*100;
 printf("MILEAGE IS %.2f km/100 ltr",mileage);
 float newmil;
 newmil=miles/gallons;
 printf("\nAMERICAN STANDARD MILEAGE IS %.2f miles/gallons",newmil);
}