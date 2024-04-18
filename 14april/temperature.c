#include <stdio.h>

int main()
{
    char temp;
    float tempc, tempf;
    printf("Enter temperature in Fahrenheit (f) / Celsius (c): ");
    scanf("%c", &temp);
    if( temp =='f')
    {
        float tempc, tempf;
        printf("Enter temperature in Fahrenheit : ");
        scanf("%f", &tempf);
       // tempc = (5 / 9) * tempf - 32; 
        tempc = (tempf - 32) * 5/9;
        printf("Temperature in celsius : %f  °C", tempc );
    }
    else if( temp == 'c'){
        float F, C;
        printf("Enter temperature in Celsius : ");
        scanf("%f", &C);
        F = (C * 9/5) + 32;
        printf("Temperature in Fahrenheit : %f °F", F );
        
    }
    else{
        printf("Input Mismatch !!!");
    }
        
    return 0;
}