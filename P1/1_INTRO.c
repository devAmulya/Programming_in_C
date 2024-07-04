#include<stdio.h>

int main(){
    printf("hello world");
    //RUles of naming
    int number = 25;
    
    
    number = 24;
    

    int a = 30;
    int A = 40;

    int  _age = 22;

    int final_price = 100;

    //DATATYPES
    int age = 22;
    float pi = 3.14;
    char star = '*';

    //COMMENTS
    /*COMMENT IN 
    MULTIPLE LINES*/

    // INPUT AND OUTPUT
    printf("hELLO\n");
    printf("Age = %d\n",age);
    printf("Star is %c",star);

    printf("Enter age : \n");
    scanf("%d",&age);
    printf("Age is = %d\n",age);

    //add two
    int d,b;
    printf("Enter a and b : ");
    scanf("%d",&d);
    scanf("%d",&b);

    int c = d+b;
    printf("Sum is = %d , %d\n ",c,d+b);

    //Area of a square
    int side;
    scanf("%d",&side);
    printf("%d\n",side*side);

    // Area of circle
    float rad;
    scanf("%f",&rad);
    printf("Area of circle is %f",rad*rad*pi);

    return 0;
}