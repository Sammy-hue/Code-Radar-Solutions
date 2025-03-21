#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if(a >== 60){
        printf("Eligible");
    }
    else if(a  < 60){
         printf("Not Eligible");
    }
    
    return 0;
}