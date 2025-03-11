// Your code here...
// Your code here...
#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d", &a);
    if(a<b+c && b<a+c && c<a+b){
    printf("Valid");
    }
    else{
    printf("Invalid");
    }
    return 0;
}