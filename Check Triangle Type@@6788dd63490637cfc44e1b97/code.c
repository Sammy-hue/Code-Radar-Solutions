#include <stdio.h>
int main(){
    int a,b,C;
    scanf("%d %d %d",&a,&b,&c);
    if(a=b=c){
        printf("Equilateral");
    }
    else if(a=b<c){
         printf("Isosceles");
    }
    else if(a!=b!=c){
        printf("Scalene");
    }
    return 0;
}