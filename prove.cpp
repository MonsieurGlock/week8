#include <stdio.h>
int main(){
    int n,i;
    printf("How many numbers you going to enter : ");
    scanf("%d",&n);
    float num[n],Max,Min;
    printf("Enter number one by one : ");
    for(i=0 ; i < n ; i++){
        scanf("%f",&num[i]);
    }
    Max = Min = num[0];
    for(i=0 ; i < n ; i++){
        if(num[i] > Max){
            Max = num[i];
        }
        if(num[i] < Min){
            Min = num[i];
        }
    }
    printf("Minimum value is %.3f and Maimum value is %.3f",Min,Max);
    return 0;
}