#include<stdio.h>
void LCM(int x, int y);
void HCF(int x, int y);
int main(){
    int x, y;
    printf("\nEnter any two number :");
    scanf("%d %d", &x, &y);
    printf("\n");
    LCM(x, y);
    HCF(x, y);
    printf("\n");
}

void LCM(int x, int y){
    int a, b;
    a=x;
    b=y;
    while(a!=b){
        if(a<b)
            a+=x;
        else
            b+=y;
    }
    printf("LCM of %d and %d is %d \n", x, y, a);
}
void HCF(int x, int y){
    int a, b;
    a = x;
    b = y;
    while(a!=b){
        if (a>b)
            a = a-b;
        else    
            b = b-a;
    }
    printf("HCF of %d and %d is %d", x, y, a);
}