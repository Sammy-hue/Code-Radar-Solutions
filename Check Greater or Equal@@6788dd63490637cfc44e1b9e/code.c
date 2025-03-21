#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if(a >= b){
        printf("Yes");
    }
    else if(a < 0){
         printf("Negative");
    }
else if(a == 0){
         printf("Zero");
    }
    
    return 0;
}