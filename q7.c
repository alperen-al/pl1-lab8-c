#include <stdio.h>
//7) Write C code to find the largest of three numbers A, B, and C.
int main(){
    int a1,a2,a3;
    printf("lütfen sırasıyla 3 sayı giriniz   :  \n");
    scanf("%d",&a1);
    scanf("%d",&a2);
    scanf("%d",&a3);
    if (a1>a2&&a1>a3){
        printf("en büyük sayı = %d",a1);
    }
    else if(a2>a1&&a2>a3){
        printf("en büyük sayı = %d",a2);
    }
    else {
        printf("en büyük sayı = %d",a3);
    }
    return 0;
}