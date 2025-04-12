#include<stdio.h>
int main(){
    int a,b,c;
    a=52;
    b=96;
    c=9556;
    if (a>b & a>c){
        printf("a is largest number...");
    }
    else if (b>c & b>a)
    {
        printf("b is largest number...");
    }
    else{
        printf("c is largest number...");
    }
    
}