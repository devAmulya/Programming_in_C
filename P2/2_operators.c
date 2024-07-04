#include<stdio.h>
#include<ctype.h>

int main(){

    //avg of 3 number
    float a,b,c;
    printf("Enter a : \n");
    scanf("%f",&a);
    printf("Enter b : \n");
    scanf("%f",&b);
    printf("Enter c : \n");
    scanf("%f",&c);
    float d = (a+b+c)/3;
    printf("Average of %f, %f , %f : %f",a,b,c,d);

    //if character is digit
    char c = 'a';
    char d = '1';
    if(c >= 48 && c <= 57){
        printf("%c is a digit\n",c);
    }else printf("%c is not a digit\n",c);
    if(d >= 48 && d <= 57){
        printf("%c is a digit\n",d);
    }else printf("%c is not a digit\n",d);
    if(isdigit(c)){
    printf("%c is a digit\n",c);
    }else printf("%c is not a digit\n",c);
    if(isdigit(d)){
    printf("%c is a digit\n",d);
    }else printf("%c is not a digit\n",d);

    //print smaller of two
    int a = 111;
    int b = 50;
    if(a>b){
        printf("%d is larger than %d",a,b);
    }else if(b>a){
        printf("%d is larger than %d",b,a);
    }else printf("%d is equal to %d",a,b);


    return 0;
}