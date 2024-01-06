#include <stdio.h>
//Write C code to convert the length in feet to centimeter.
int main(){
    float i ,b,c ;
    int a;
    i=1;
    while(i==1){
        printf("cm yi feete mi dönüştürmek istiyorsunuz , feeti mi cm ye ? \n");
        printf("eğer cm yi feete ise 1 e , feeti cm ye ise 2 ye basın\n" );
        scanf("%d",&a);
        if (a==1){
            i=0;
            printf("lütfen cm yi giriniz : \n");
            scanf("%f",&b);
            c=b/(30.48);
            printf("feet değerin = %f",c);
            
        }
        else if (a==2){
            i=0;
            printf("lütfen feeti girin\n");
            scanf("%f",&b);
            c=b*(30.48);
            
            printf("cm değerin = %f",c);

        }
        else{
            printf("kanka boş yapma : D\n");
        }
    }
    
    return 0;
}