#include<stdio.h>
#include<stdlib.h>

int main(){
    /*float *ptr;
    ptr = (int *) malloc(5 * sizeof(int));
    ptr = (float *) malloc(5 * sizeof(float));
    ptr = (int*) calloc(5,sizeof(float));

    ptr[0] = 1;
    ptr[1] = 3;
    ptr[2] = 5;
    ptr[3] = 7;
    ptr[4] = 9;

    for(int i =0; i<5; i++){
        printf("%f\n",ptr[i]);
    }*/

    /*int *ptr;
    int n;
    printf("enter n : ");
    scanf("%d",&n);

    ptr = (int *) calloc(n,sizeof(int));
    for(int i = 0;i < n; i++){
        printf("%d\n",ptr[i]);
    }

    free(ptr);
    n = 2;
    ptr = (int *) calloc(n,sizeof(int));
    for(int i = 0;i < n; i++){
        printf("New : %d\n",ptr[i]);
    }

    ptr = realloc(ptr,8);
    for(int i = 0;i < 8; i++){
        printf("New X : %d\n",ptr[i]);
    }*/

    int *ptr;
    ptr = (int*) calloc(5,sizeof(int));
    ptr[0] = 1;
    ptr[1] = 3;
    ptr[2] = 5;
    ptr[3] = 7;
    ptr[4] = 9;

    for(int i = 0;i<5;i++){
        printf("%d\n",ptr[i]);
    }

    ptr = realloc(ptr,6);
    ptr[0] = 2;
    ptr[1] = 4;
    ptr[2] = 6;
    ptr[3] = 8;
    ptr[4] = 10;
    ptr[5] = 12;

    for(int i = 0;i<6;i++){
        printf("%d\n",ptr[i]);
    }

    return 0;
}