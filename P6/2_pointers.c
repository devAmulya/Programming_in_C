#include<stdio.h>
/*int max_no(int *a,int *b){
    if(*a>*b){
        return a;
    }else return b;
}*/
int main(){
    
    /*//Maximum Number 
    int a = 10,b = 12;
    int *c;
    //c = max_no(&a,&b);
    //printf("Maximum number is %d",*c);

    //Elemsts of an array 
    int arr[] = {1,2,3,4,5};
    for(int i = 0; i < sizeof(arr)/4;i++){
        printf("%d\t",arr[i]);
    }*/

    //print all letters of english
    char a[] = "abcdefghijklmnopqrsstuvwxyz";
    char *p;
    p = &a[0];
    while(*p != '\0'){
        printf("%c\t",*p);
        p++;
    }

    return 0;
}