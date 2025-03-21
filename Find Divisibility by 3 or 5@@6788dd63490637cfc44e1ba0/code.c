#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if(a / 3 && a / 5 ){
        printf("Divisible by Both");
    }
    else (a / 3 ){
         printf("Divisible by 3");
    }
    
    return 0;
}