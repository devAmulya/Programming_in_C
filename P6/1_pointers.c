#include<stdio.h>

/*void square(int n){
    n = n*n;
    printf("square = %d\n",n);
}

void squaree(int *n){
    *n = (*n)*(*n);
    printf("square = %d\n",*n);
}*/

void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void printAddress(int n){
    printf("%p\n",&n);
}

void doWork(int *sum, int *product, int *average, int a, int b){
    *sum = a+b;
    *product = a*b;
    *average = (a+b)/2;
}

int main(){

    /*int age = 22;
    int *ptr = &age;
    int _age = *ptr;
    printf("%d,%d\n",*ptr,_age);

    printf("%p",&ptr);*/

    /*int *ptr;
    int x;
    ptr = &x;
    *ptr = 0;

    printf("x = %d\n",*ptr);
    printf("*ptr = %d\n",*ptr);

    *ptr += 5;
    printf("x = %d\n",*ptr);
    printf("*ptr = %d\n",*ptr);

    (*ptr)++;
    printf("x = %d\n",*ptr);
    printf("*ptr = %d\n",*ptr);*/

    /*float price = 100.00;
    float *ptr = &price;
    float **pptr = &ptr;*/

    /*int i = 5;
    int *iptr = &i;
    int **ipptr = &iptr;
    printf("Value : %d",**ipptr);*/

    /*int number = 4;
    square(number);
    printf("number=%d\n",number);
    squaree(&number);
    printf("number=%d\n",number);*/
    
    /* Call by reference
    int a = 10,b = 38;
    printf("%d,%d\n",a,b);
    swap(&a,&b);
    printf("after : %d,%d\n",a,b);*/

    /*adress output be same or not
    int n = 4;
    printf("%p\n",&n);
    printAddress(n);*/

    /*pass by reference
    int a = 3,b=5,s,p,avg;
    doWork(&s,&p,&avg,a,b);
    printf("%d,%d,%d",s,p,avg);*/


    

    return 0;
}