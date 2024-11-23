#include<stdio.h>
#include<stdlib.h>
int gcd_iterative(int a, int b);
int gcd_recursive(int a,int b);

int main(){
    int a,b;
    printf("Enter the 2 non- zero integers\n");
    scanf("%d %d",&a,&b);
    printf("GCD calculation using iteration %d\n",gcd_iterative(a,b));
    printf("GCD calculation using recursion %d\n",gcd_recursive(a,b));
    return 0;

}

int gcd_iterative(int a, int b){
    int temp;
    while(b!=0){
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int gcd_recursive(int a, int b){
    if (b==0){
        return a;
    }
    else{
        return gcd_recursive(b,a % b);
    }
}
