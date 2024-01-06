#include <stdio.h>
//Determine Whether a Temperature is Below or Above the Freezing Point.
int main(){

    float a ;

    printf("please enter your temperature\n");
    scanf("%f",&a);

      

    if(a>0){
        printf("its above the freezing point\n ");
    }

    else if (a==0){
        printf("its on the freezing point\n ");
    }

    else {
        printf("its below the freezing point\n");
    }

    return 0;
    
    
}