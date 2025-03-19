// Your code here...
#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d%D",&a,&b,&c);
    if(a!=b && b!=c && c!=a){
    printf("Scalene");
    }
    else if(a==b && b!=c) || (b=c &&  a!=c){
        printf("Isosceles");
    }
    else {
        printf("Equilateral");
    }
    return 0;
}


