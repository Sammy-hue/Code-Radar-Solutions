#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if(a / 3 && a / 5 ){
        printf("Divisible by Both");
    }
    else if(a / 3){
         printf("Divisible by 3");
    }
    else if(a / 5){
         printf("Divisible by 5");
    }
    else{
         printf("Not Divisible");
    }
    return 0;
}