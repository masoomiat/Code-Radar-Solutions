// Your code here...
#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d%D",&a,&b,&c);
    if(a!=b && b!=c && c!=a){
    printf("Scalene");
    }
    else{
        if((a==b && b!=c) || (b==c && c!=a) || (c=a && a!=b))
        printf("Isosceles");
    
    else 
        printf("Equilateral");
    
    }
    return 0;
}


