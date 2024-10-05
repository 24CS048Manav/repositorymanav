#include<stdio.h>
int main(){
    int i,b,e,power=1;
    printf("\n Enter base : ");
    scanf("%d",&b);

    printf("\n Enter exponent : ");
    scanf("%d",&e);
    for(i=1;i<=e;i++){
        power*=b;
    }
    printf("\n power is %d ",power);
    return 0;
}