#include<stdio.h>

int main(){
    /*int age;
    printf("Enter age:");
    scanf("%d",&age);
    if(age>18){
        printf("Adult\n");
        printf("They can vote and drive\n");
    }
    ekse if(age>13&&age<18){
        printf("teenager\n");
    }

    else
        printf("child\n");

    printf("Thank you");

    age >= 18 ? printf("adult\n"):printf("child\n");*/

    /*int day;
    printf("Enter day(1-7):");
    scanf("%d",&day);

    switch(day){
        case 1:
        printf("Monday\n");
        break;
        case 2:
        printf("Tuesday\n");
        break;
        case 3:
        printf("Wednessday");
        break;
        case 4:
        printf("THuresday");
        break;
        case 5:
        printf("Friday");
        break;
        case 6:
        printf("Saturday");
        break;
        case 7:
        printf("Sunday");
        break;
        default:printf("Not a valid input!");
    }*/
    /*int number;
    printf("Enter number :");
    scanf("%d",&number);

    if(number >= 0){
        printf("positive\n");
        if(number % 2 == 0){
            printf("Number is even");
        }else{
            printf("Number is odd");
        }
    }
    else{
        printf("negative\n");
    }*/

    /*STUDENT PASSED OR FAILED
    int marks;
    printf("Enter your marks :");
    scanf("%d",&marks);
    if (marks>30){
        printf("Student is passed");
    }
    else{printf("Student is failed");}*/

    /*int marks;
    printf("Enter your marks :");
    scanf("%d",&marks);
    if (marks < 30&&marks>=0){
        printf("Grade is 'C'");
    }else if(marks >= 30&&marks<70){
        printf("Grade is 'B'");
    }
    else if(marks>= 70&&marks < 90){
        printf("Grade is 'A'");
    }
    else if(marks>= 90&&marks<=100){
        printf("Grade is 'A+'");
    }
    else{
        printf("Wrong marks");
    }*/

    char ch;
    printf("Enter your character :");
    scanf("%c",&ch);
    int chn = (int)ch;

    //ch >= 'A' && ch <= 'Z'
    if(chn >= 65 && chn <= 90){
        printf("%c is uppercase",ch);
    }else{
        printf("%c is not uppercase",ch);
    }





    return 0;

}