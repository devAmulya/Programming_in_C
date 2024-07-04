#include<stdio.h>

void printNumbers(int arr[], int n){
    for(int i = 0; i<n; i++){
        arr[i] = i;
        printf("%d\t",arr[i]);
    }
}

int countOdd(int arr[], int n){
    int count = 0;
    for(int i = 0; i < n; i++){
        if(arr[i]%2 != 0){
            count++;
        }
    }
    return count;
}

int main(){

    /*int marks1 = 97; 
    int marks2 = 98;
    int marks3 = 89;
    int marks[] = {97,98,89};
    printf("%d",marks[0]);

    int mark[3];
    printf("enter phy : ");
    scanf("%d",&mark[0]);

    printf("enter phy : ");    
    scanf("%d",&mark[1]);

    printf("enter phy : ");    
    scanf("%d",&mark[2]);*/

    /*float items[3];
    for(int i = 0; i < 3; i++){
        printf("enter item : ");
        scanf("%f",&items[i]);
    }
    for(int i = 0; i < 3; i++){
        printf("total price 1 : %f\n",items[i]*1.18);
    }*/

    /*int age = 22;
    int *ptr = &age;
    printf("ptr = %u\n",ptr);
    ptr++;
    printf("ptr = %u\n",ptr);
    ptr--;
    printf("ptr = %u\n",ptr);*/

    /*float price = 100.00;
    float *ptr = &price;
    printf("ptr = %u\n",ptr);
    ptr++;
    printf("ptr = %u\n",ptr);
    ptr--;
    printf("ptr = %u\n",ptr);*/

    /*char price = 'a';
    char *ptr = &price;
    printf("ptr = %u\n",ptr);
    ptr++;
    printf("ptr = %u\n",ptr);
    ptr--;
    printf("ptr = %u\n",ptr);*/

    /*int age = 22;
    int _age = 20;
    int *ptr = &age;
    int *_ptr = &_age;

    printf("difference = %u\n",ptr-_ptr);
    _ptr = &age;
    printf("comparison = %u\n",ptr==_ptr);*/

    /*int arr[10] = {11,12,13,14,15,16,17,18,19,10};
    printNumbers(arr,10);*/

    /*
    int marks[2][3];
    marks[0][0] = 90;
    marks[0][1] = 91;
    marks[0][2] = 92;
    marks[1][0] = 93;
    marks[1][1] = 94;
    marks[1][2] = 95;
    printf("%d",marks[1][0]);*/

    /*int arr[] = {1,2,3,4,5};
    printf("%d",countOdd(arr,5));*/

    int arr[] = {1,2,3,4,5,6};
    //printf("%d",*(arr+2));
    /*int n = 6;
    

    for(int i = 0; i < n/2; i++){
        int temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
    for(int i = 0; i <n; i++){
        printf("%d\n",arr[i]);
    }*/

    /*Fibonacci
    int n;
    printf("Enter n(n>2):");
    scanf("%d",&n);

    int fib[n];
    fib[0] = 0;
    fib[1] = 1;
    printf("%d\t%d\t",fib[0],fib[1]);

    for(int i = 2; i <n; i++){
        fib[i] = fib[i-1] + fib[i-2];
        printf("%d\t",fib[i]);
    }*/
    
    int table[2][10];
    for(int i = 0;i<2;i++){
        for(int j = 0;j<10;j++){
            table[i][j] = (i+2)*(j+1);
            printf("%d\t",table[i][j]);
        }
        printf("\n");
    }
    int age = 22,_age = 32;
    int *ptr = &age,*_ptr = &_age;
    




    



    return 0;
}