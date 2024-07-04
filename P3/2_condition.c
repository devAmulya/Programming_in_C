#include<stdio.h>
#include<math.h>

int main(){

    /*int n,temp,len =0 ;
    printf("Enter number : ");
    scanf("%d",&n);
    temp = n;
    float sum = 0.0;
    int temp1 = n;
    while(temp != 0){
        len += 1;
        temp /= 10;
    }
    while(n != 0){
        int d = n%10;
        sum += pow(d,len);
        n /= 10;
    }
    if(temp1 == sum){
        printf("Number is armstrong");
    }else printf("NUmber is not armstrong");*/

    //given no is natural
    float a = 12.0;
    int n = a;
    if(a<=0){
        printf("Entered number is not natural");
    }else if(n!=a){
        printf("Entered number is not natural");
    }else printf("Entered number is natural");

    return 0;
}