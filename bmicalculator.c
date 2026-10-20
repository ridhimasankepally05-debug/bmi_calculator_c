#include <stdio.h>
int main (){
    float weight, height, bmi;
    printf("enter weight : ");
    scanf("%f",&weight);
    printf("enter height : ");
    scanf("%f",&height);
    if(weight <=0 || height <= 0){
        printf("invalid input");
    }
    else{
        bmi = weight/((height/100)*(height/100));
        printf("bmi : %f\n",bmi);
        if(bmi < 18.5){
            printf("underweight \n");
        }
        else if(bmi == 18.5 || bmi <25){
            printf("normal weight\n");
        }
        else if(bmi ==25 || bmi <35){
            printf("overweight\n");
        }
         else{
            printf("obesity\n");
         }
    }
return 0;
}
