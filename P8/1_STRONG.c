#include<stdio.h>
#include<string.h>

void slice(char atr[],int n,int m){
    char satr[100];
    int j = 0;
    for(int i = n; i <= m; i++,j++){
        satr[j] = atr[i];
    }
    satr[j] = '\0';
    puts(satr);
}

int occ_vow(char otr[]){
    int i = 0,count = 0;
    while(otr[i]!='\0'){
        if(otr[i]=='a'||otr[i]=='e'||otr[i]=='i'||otr[i]=='o'||otr[i]=='u'){
            count++;
        }
        i++;
    }
    return count;
}

int insert(char str[],char ch,int a){
    int i = 0;
    strcat(str," ");
    char n_str[100];
    while(str[i] != '\0'){
        if(i<a){
            n_str[i] = str[i];
        }else if(i==a){
            n_str[i] = ch;
        }else{
            n_str[i] = str[i-1];
        }
        i++;
    }
    n_str[i] = '\0';
    strcpy(str,n_str);
}

int rev(char str[]){
    char n_str[100];
    int n = strlen(str);
    int i = 0;
    while(str[i]!='\0'){
        n_str[n-i-1] = str[i];
        i++;
    }
    n_str[i] = '\0';
    strcpy(str,n_str);
}

int main(){ 

    /*char str[] = "College";
    printf("%s\n",str);
    insert(str,'l',2);
    printf("%s\n",str);
    rev(str);
    printf("%s\n",str);*/

    /*char atr[] = "hello world to my program";

    slice(atr,6,14);
    char otr[] = "Hello world to my program";
    printf("%d\n",occ_vow(otr));*/

    /*char atr[] = "hello world to my program";
    char check = 'y';
    int i = 0;
    char ch;
    while(ch != '\0'){
        if(check==atr[i]){
            printf("Yes present at %d",i);
            break;
        }
        i++;
    }*/




    /*Take first name and last name as input and print them
    char firstname[] = {'s','h','r','a','d','h','h','a','\0'};
    char lastname[] = "Khapra";

    for(int i = 0; i < strlen(firstname);i++){
        printf("%c",firstname[i]);
    }
    printf(" ");
    for(int i = 0;lastname[i] != '\0';i++){
        printf("%c",lastname[i]);
    }
    printf("\n");
    printf("%s %s\n",firstname,lastname);

    char fname[40], lname[40];
    printf("Enter first name  : ");
    scanf("%s",&fname);
    printf("Enter last name  : ");
    scanf("%s",&lname);
    printf("Your name is : %s %s",fname,lname);*/

    /*char *canchange = "Hello world";
    puts(canchange);
    canchange = "Hello";
    puts(canchange);

    char cannotchange[] = "Hello world";
    puts(cannotchange);
    //cannotchange = "hello";*/
    
    /*char name[100];
    fgets(name,100,stdin);
    printf("%s : hell%d\n",name,strlen(name));
    int count = 0;
    for(int i = 0; name[i] != '\0'; i++){
        printf("%c : %d,%d\n",name[i],count,i);
        count++;
    }
    printf("Enter length of name : %d\n",--count);
    //--count as fgets an extra space(or dont know) character before\o which is not reflected on using puts();
    char name1[20];
    strcpy(name1,name);
    printf("%s",name1);*/

    /*char hell[10] = "hello ";
    char hack[12] = "world";
    printf("%d\n",strcmp(hell,hack));
    strcat(hell,hack);
    printf("%s\n",hell);
    printf("%d\n",strcmp(hack,hack));
    printf("%d",strcmp(hack,hell));*/

    char asc[100];
    char ch;
    int i = 0;
    while(ch != '\n'){
        scanf("%c",&ch);
        asc[i] = ch;
        i++;
    }
    asc[i] = '\0';
    printf("%s",asc);

    /*Salting - to secure password {passwaord+salt}
    char pass[100];
    scanf("%s",pass);
    char salt[] = "123";
    printf("%s\n",salt);
    strcat(pass,salt);
    puts(pass);*/



    
    return 0;



}

