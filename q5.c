#include <stdio.h>
//Convert Temperature from Fahrenheit (℉) to Celsius (℃).
int main(){
    float a;
    printf("please enter the fahrenheit :: ");
    scanf("%f",&a);
    a=(float)(a-32)/1.8;
    printf("the celcius degree is : %f",a);

    return 0;

    }
