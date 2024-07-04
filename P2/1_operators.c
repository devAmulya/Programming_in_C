#include<stdio.h>

int main(){
    #include<stdio.h>
    int age = 22;
    int oldAge = age;
    int newAge = oldAge + 2;
    printf("new age is : %d\n", newAge);
    int rupee = 1, dollar;
    dollar = 74;
    // valid declaration
    int age1, age2, age3;
    age1 = age2 = age3 = 22;
    //invalid
    //int a1 = a2 = a3 = 22;
    second();
    int a = 1, b = 2, c = 3;
    //valid
    a = b + c;
    //invalid
    // b + c = a;
    printf("%d \n", 3 % 2);
    printf("%d \n", -3 % 2);

    printf("sum of 2 & 3 : %d", 2 + 3);
    printf("sum of 2.0 & 3 : %f", 2.0 + 3);
    printf("sum of 2.0 & 3.0 : %f", 2.0 + 3.0);

    printf(" Output : %d", 5+2/2*3);

    printf("%d \n", 4==4);
    printf("%d \n", 4<3);
    printf("%d \n", 3<4);
    printf("%d \n", 4<4);
    printf("%d \n", 4<=4);
    printf("%d \n", 4>3);
    printf("%d \n", 3>4);
    printf("%d \n", 4>4);
    printf("%d \n", 4>=4);
    printf("%d \n", 4!=4);
    printf("%d \n", 3!=4);

    printf("%d \n", 3<4 && 3<5);
    printf("%d \n", 3<4 && 5<4);
    printf("%d \n", 3<4 && 5<4);
    printf("%d \n", 3>4 && 5>4);
    printf("%d \n", 3<4 && 3<5);
    printf("%d \n", !(3<4 && 3<5));
    printf("%d \n", !(4<3 || 5<3));

    a = 10;
    a += 10;
    printf("a+10 = %d \n", a);
    a -= 10;
    printf("a-10 = %d \n", a);
    a *= 10;
    printf("a*10 = %d \n", a);
    a /= 10;
    printf("a/10 = %d \n", a);
    a %= 10;
    printf("a%c10 = %d \n", '%', a);
    return 0;



}
int sttat(){
    static int a = 10;
    a += 1;
    printf("%d",a);
}
int second(){
    //short int a;
    int b;
    long int c;
    long long int d;
    //printf("%d,%d,%d,%d\n",sizeof(a),sizeof(b),sizeof(c),sizeof(d));
    int a = 20;
    float x;
    x = a;
    printf("%d,%f",a,x);

    
}