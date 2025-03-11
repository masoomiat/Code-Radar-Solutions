// Your code here...
#include <stdio.h>
int main() {
    int a;
    scanf("%c", &a);
    if(a>='A' && a<='Z'){
    printf("Uppercase");
    }
    else if(a>='a' && a<='z'){
        printf("lower case");
    }
    else{
    printf("Not an alphabet");
    }
    return 0;
}