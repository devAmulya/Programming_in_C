#include<stdio.h>
#include<string.h>

struct student{
        char name[100];
        int rollno;
        float cgpa;
    }s2;


void printInfo(struct student s1){
    struct student *ptr = &s1;
    printf("\nDetails are %s\n%d\n%f\n",ptr->name,ptr->rollno,ptr->cgpa);
}

typedef struct Address{
    int houseno;
    int block;
    char city[100];
    char state[100]; 
}ad;

void printAdd(ad add){
    printf("Address is : %d , %d , %s , %s",add.houseno,add.block,add.city,add.state);
}

typedef struct vector{
    int i;
    int j;
}v;

typedef struct complex{
    int real;
    int img;
}c;

int main(){
    /*v v1 = {1,2};
    v v2 = {3,4};
    v v3;
    v3.i = v1.i + v2.i;
    v3.j = v1.j+v2.j;
    printf("Resultant vector is : %d icap + %d jcap",v3.i,v3.j);*/

    /*c c1 = {1,2};
    c *ptr = &c1;
    printf("Number is : %d + %dicap",ptr->real,ptr->img);*/

    /*ad add[5];
    for(int i = 0; i < 5; i++){
        printf("enter info for person %d : ",i+1);
        scanf("%d",&add[i].houseno);
        scanf("%d",&add[i].block);
        scanf("%s",&add[i].city);
        scanf("%s",&add[i].state);
    }
    for(int i = 0; i < 5; i++){
         printAdd(add[i]);
    }*/

    /*struct student s1;
    s1.cgpa = 9.9;
    s1.rollno = 20;
    strcpy(s1.name,"Amulya Gupta");
    printf("student name : %s\n",s1.name);
    printf("Student rollno : %d\n",s1.rollno);
    printf("Student cgpa : %f\n",s1.cgpa);


    strcpy(s2.name,"Ishhan aggarwal");
    s2.rollno = 11;
    s2.cgpa = 5.8;
    printf("student name : %s\n",s2.name);
    printf("Student rollno : %d\n",s2.rollno);
    printf("Student cgpa : %f\n",s2.cgpa);

    struct student s3;
    strcpy(s3.name,"Vrind Mangla");
    s3.rollno = 12;
    s3.cgpa = 8.0;
    printf("student name : %s\n",s3.name);
    printf("Student rollno : %d\n",s3.rollno);
    printf("Student cgpa : %f\n",s3.cgpa);

    
    struct student s2 = {"Amulya Gupata",20,9.9};
    struct student *ptr;
    ptr = &s2;
    printf("Details are %s,%d,%f",(*ptr).name,(*ptr).rollno,ptr->cgpa);
    printInfo(s2);*/
    /*struct student it[100];

    it[0].cgpa = 9.2;*/

    

    return 0;
}