#include<stdio.h>

int main(){

    // Rectangle perimeter
    int a,b;
    printf("Enter first side : ");
    scanf("%d",&a);
    printf("Enter second side : ");
    scanf("%d",&b);
    int c = 2*(a+b);
    printf("Perimeter of rectangle : %d\n",c);

    //cube of n
    float n;
    printf("Enter number : ");
    scanf("%f",&n);
    printf("Cube of %f : %f",n,n*n*n);

    
    return 0;
}