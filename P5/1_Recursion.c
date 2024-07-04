#include<stdio.h>
#include<math.h>

/* Print hello world for count times
void printHW(int count){
    if (count == 0){
        return;
    }
    printf("Hello world\n");
    printHW(count-1);
}

int main(){
    printHW(10);
    return 0;
}*/

/*int sum(int n){
    if(n==1){
        return 1;
    }
    int s = n + sum(n-1);
    return s;
}
int fact(int n){
    if(n==1||n==0){
        return 1;
    }
    int s = n * fact(n-1);
    return s;
}

int main(){
    printf("%d\n%d",sum(30),fact(10));
}*/

/*int fibonacci(int a,int b,int n){
    if(n==0){
        return 0;
    }
    int c = a +b;
    printf("%d\n",c);
    fibonacci(b,c,n-1);
}
int main(){
    int n;
    printf("Enter number of fibonacci to print : ");
    scanf("%d",&n);
    printf("%d\n%d\n",0,1);
    fibonacci(0,1,n-2);
}*/

/*fibonacci
int fib(int n){
    if(n==0||n==1){
        if(n==0){
            return 0;
        }else{
            return 1;
        }
    }
    int fibN = fib(n-1) + fib(n-2);
    return fibN;
}

int main(){
    int n;
    printf("Enter number of fibonacci to print : ");
    scanf("%d",&n);
    printf("%d",fib(n));
}*/

/*sum of digits
int sum(int a ,int b){
    return a+b;
}
int main(){
    int a = 11, b = 56;
    printf("%d",sum(a,b));
    return 0;
}*/

/*squarerooot of a number
void sq(int n){
    float a = pow(2, 0.5 * log2(n));
    printf("%f\n",a);
    a = sqrt(n);
    printf("%f",a);
}
int main(){
    int n = 16;
    sq(n);
}*/

/*identify hot and cold
void temp (int T){ 
    if(T<=27){
        printf("cold");
    }else if(T>50){
        printf("Hot");
    }
}
int main() {
    int T;
    printf("enter temperature");
    scanf("%d", &T);
    temp(T);
    return 0;
}*/

/*pow function
int spow(int a,int b){
    if(b==0){
        return 1;
    }
    int p = a*spow(a,b-1);
    return p;
}
int main(){
    int a = 3;
    int b = 7;
    printf("%d",spow(a,b));
}*/