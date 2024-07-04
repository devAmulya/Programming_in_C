#include<stdio.h>

int no(int arr[],int n,int x){
    int count = 0;
    for(int i = 0; i < n ; i++){
        if(arr[i]==x){
            count++;
        }
    }
    return count;
}

int lar(int arr[],int n){
    int max = arr[0];
    for(int i = 1; i < n;i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    return max;
}

int main(){
    
    //how many times a number came
    int arr[] = {2,3,5,7,3,6,5,3,5,7,9,9,8,4,92,3,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    /*int x = 5;
    int count = no(arr,n,x);
    printf("Number of %d is %d",x,count);

    //largest number in an array
    int max = lar(arr,n);
    printf("Maximum number is : %d",max);*/
    arr[n] = 50;
    for (int i = 0; i < n+1; i++)
        printf("%d ", arr[i]);
    printf("\n");

}