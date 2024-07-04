#include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("text.txt","r+");
    if(fptr == NULL){
        printf("file doesnot exist\n");
    }

    int a,b,c;
    fscanf(fptr,"%d",&a);
    fscanf(fptr,"%d",&b);
    printf("%d,%d",a,b);
    c = a+b;
    fprintf(fptr,"%d",c);

    /*int n;
    printf("Enter n : ");
    scanf("%d",&n);

    for(int i = 1; i <= n; i++){
        if(i%2!=0){
            fprintf(fptr,"%d\t",i);
        }
    }*/

    /*char name[100];
    int age;
    float cgpa;
    printf("Enter name : ");
    scanf("%s",&name);
    printf("Enter age : ");
    scanf("%d",&age);
    printf("Enter cgpa  :");
    scanf("%f",&cgpa);
    fprintf(fptr,"%s\t",name);
    fprintf(fptr,"%d\t",age);
    fprintf(fptr,"%f",cgpa);*/


    /*int n;
    fscanf(fptr,"%d",&n);
    printf("number = %d\n",n);
    fscanf(fptr,"%d",&n);
    printf("number = %d\n",n);
    fscanf(fptr,"%d",&n);
    printf("number = %d\n",n);
    fscanf(fptr,"%d",&n);
    printf("number = %d\n",n);
    fscanf(fptr,"%d",&n);
    printf("number = %d\n",n);
    fscanf(fptr,"%d",&n);
    printf("number = %d\n",n);*/

    /*char ch;
    fscanf(fptr,"%c",&ch);
    printf("Character = %c\n",ch);
    char s[10];
    //fscanf(fptr,"%s",&s);
    //printf("String = %s\n",s);
    char c[] = "\nMango";
    fprintf(fptr,"%s",c);
    printf("%s",fgets(s,10,fptr));
    fclose(fptr);*/

    /*char ch;
    ch = fgetc(fptr);
    while(ch!= EOF){
        printf("%c",ch);
        ch = fgetc(fptr);
    }*/



    return 0;
}