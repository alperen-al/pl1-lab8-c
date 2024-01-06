#include <stdio.h>
//Determine and Output Whether Number N is Even or Odd
int main (){
    int a,b,i,k;
    i=1;
    k=1;
    while(i==1){
        k=1;
        printf("please enter a number;\n");
        scanf("%d",&a);
        if (a%2==0){
            printf("this number is even \n");
        }
        else{
            printf("this number is odd \n");
        }
        printf("do you want to try again?\n");
        
        while(k==1){
            printf("if 'yes' press 1 ,  if ' no ' press 2  \n");
            scanf("%d",&b);
            if(b==1){
                k=0;
                i=1;
                printf("get readyyyyy\n");
            }
             else if (b==2){
                i=0;
                k=0;
                printf("oh see you soon");
            }
            else {
                printf("you wrote wrong number please write correct... \n");
                k=1;
            }
        }

        
    }
    return 0;

}