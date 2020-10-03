#include <stdio.h>
int main(){
    int n,i,j,Maxcount=0,count=0,Mode,modeCount=0;
    printf("How many integers you going to enter : ");
    scanf("%d",&n);
    int num[n];
    printf("Enter number one by one : ");
    for(i=0 ; i < n ; i++){
        scanf("%d",&num[i]);
    }
    for(i = 0 ; i < n ; i++){
        for(j = i ; j < n ; j++){
            if(num[i] == num[j]){
                count++;
            }
        }
        if(count > Maxcount){
            Maxcount = count;
            
        }
        count = 0;
    }
    printf("Max count is %d \n",Maxcount);
    for(i = 0 ; i < n ; i++){
        for(j = i ; j < n ; j++){
            if(num[i] == num[j]){
                count++;
            }
        }
        if(count == Maxcount){
            Mode = num[i];
            modeCount++;
        }
        count = 0;
    }
    if(modeCount == 1){
        printf("Mode is %d",Mode);
    }
    if(modeCount != 1){
        printf("No mode");
    }

    return 0;
}