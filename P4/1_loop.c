#include<stdio.h>

int main(){
    /*Print 0 to 10(for loop)
    for(int i = 0;i<= 10;i++){
        printf("%d\n",i);
    }*/
    /*infinite loop which is finite
    for(int i = 83647; i > 0; i = i + 100000){
        printf("%d\n",i);
    }*/
    /*print number 0 to n(while loop)
    int n;
    printf("Enter number : ");
    scanf("%d",&n);
    int i = 0;
    while(i<=n){
        printf("%d\n",i);
        i++;
    }*/

    /*(do-while loop)
    int i = 1;
    do{
        printf("%d\n",i);
        i++;
    }while(i <= 5);*/

    /*sum of first n natural number
    int n,sum = 0;
    printf("Enter number : ");
    scanf("%d",&n);
    for(int i = 1; i<= n;i++){
        sum += i;
        printf("%d\n",n-i+1);
    }
    printf("SUm is %d\n",sum);*/

    /*table of n number
    int n;
    printf("Enter number : ");
    scanf("%d",&n);
    for(int i = 1; i <= 10;i++){
        printf("%d X %d = %d\n",n,i,n*i);
    }*/

    /*break-input untill odd number

    int n;
    for(int i = 1;;i++){
        printf("Enter number");
        scanf("%d",&n);
        if(n%2!=0){
            break;
        }
    }*/

    /*input untill a seven is not printed
    int i,n;
    do{
        printf("Enter number");
        scanf("%d",&n);
        printf("%d",n);
        if(n%7==0){
            break;
        }
    }while(i=1);
    printf("end");*/

    /*continue - print all no from 1 to 10 except 6
    for(int i = 1 ; i <= 10; i++){
        if(i==6){
            continue;
        }
        printf("%d\n",i);
    }*/

    /*print odd no btw 5 to 50
    for(int i =5; i <= 50; i++){
        if(i%2==0){
            continue;
        }
        printf("%d\n",i);
    }*/

    /*print factorial
    int n,fact = 1;
    printf("Enter number : ");
    scanf("%d",&n);
    for(int i = 2;i<=n;i++){
        fact *= i;
    }
    printf("Factorial of %d is %d",n,fact);*/

    /*Reverse table

    int n;
    printf("Enter number : ");
    scanf("%d",&n);
    for(int i = 10;i>= 1; i--){
        printf("%d X %d = %d\n",n,i,n*i);
    }*/

    /*sum of natural n btw 5 -50
    int sum=0;
    for(int i = 5;i<= 50;i++){
        sum += i;
    }
    printf("Sum is %d",sum);*/





    
    return 0;
}