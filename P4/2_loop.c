#include<stdio.h>

int main(){

    // nested loop pattern
    for(int i = 0; i<4;i++){
        for(int j = 0; j < 4;j++){
            printf("*\t");
        }printf("\n");
    }

    //number is prime or not
    int n = 5201;
    int count = 0;
    for(int i = 2;i*i <= n;i++){
        if(n%i==0){
            count++;
            break;
        }
    }
    if(count == 0){
        printf("Number is prime");
    }else printf("Number is not prime\n");

    //prime number in a range
    int x = 10;
    printf("Prime numbers are : ");
    for(int j = 2;j<= 10;j++){
        int count1 = 0;
        for(int i = 2;i*i <= j;i++){
            if(j%i==0){
                count1++;
                break;
            }
        }
        if(count1 == 0){
            printf("%d",j);
        }
    }

    return 0;
}