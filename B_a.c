#include <stdio.h>

int main( )
{
    /*Write a program to calculate overtime pay of 10 employees. 
    Overtime is paid at the rate of Rs. 12.00 per hour for every hour
     worked above 40 hours. Assume that employees do not work for fractional 
     part of an hour.*/
     int hoursworked;
     int regularhours = 40;
     float overtimerate = 12.00;
     float extrapay, totalovertimepay = 0.0 ;
     for (int i = 1; i <= 10; i++)
     {
        printf("Enter hours worked by employee %d: ", i);
        scanf("%d",&hoursworked);
        
        if(hoursworked > regularhours){
            extrapay = (hoursworked - regularhours)*overtimerate;
        }
        else{
            extrapay = 0.0;
            
        }
        totalovertimepay += extrapay;
        printf("Over time pay for employee no. %d is %.2f \n", i, extrapay);

     }
        printf("The total overtime pay for all employees  is %.2f \n454", totalovertimepay);
     
    return 0;
}
