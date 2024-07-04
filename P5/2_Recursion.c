#include<stdio.h>

/*Stair case
int stair(int n){
    if(n==1||n==2){
        return n;
    }
    int ways = stair(n-1)+stair(n-2);
    return ways;
}
int stair1(int n){
    if(n==1||n==2){
        return n;
    }else if(n==3){
        return 4;
    }
    int way = stair1(n-1)+stair1(n-2)+stair1(n-3);
    return way;
}
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int ways = stair(n);
    int way = stair1(n);
    printf("%d\n%d\n",ways,way);
    return 0;
}*/

/*maze path
int maze(int cr,int cc,int er,int ec){
    int rightways = 0;
    int downways = 0;
    if(cr == er && cc == ec){
        return 1;
    }
    if(cr == er){
        rightways += maze(cr,cc+1,er,ec);
    }
    if(cc == ec){
        downways += maze(cr+1,cc,er,ec);
    }
    if(cr<er&&cc<ec){
        rightways += maze(cr,cc+1,er,ec);
        downways += maze(cr+1,cc,er,ec);
    }
    int p = rightways+downways;
    return p;
}
int main(){
    int n,m;
    printf("Enter no of rows : ");
    scanf("%d",&n);
    printf("columns : ");
    scanf("%d",&m);
    int p = maze(1,1,n,m);
    printf("no of ways : %d", p);
    return 0;
}*/

/*maze path 2

int maze(int cr,int cc){
    int rightways = 0;
    int downways = 0;
    if(cr == 1 && cc == 1){
        return 1;
    }
    if(cr == 1){
        rightways += maze(cr,cc-1);
    }
    if(cc == 1){
        downways += maze(cr-1,cc);
    }
    if(cr>1&&cc>1){
        rightways += maze(cr,cc-1);
        downways += maze(cr-1,cc);
    }
    int p = rightways+downways;
    return p;
}

int main(){
    int n,m;
    printf("Enter no of rows : ");
    scanf("%d",&n);
    printf("columns : ");
    scanf("%d",&m);
    int p = maze(n,m);
    printf("no of ways : %d", p);
    return 0;
}*/

/*preInPost
void preInPost(int n){
    if(n==0) return;
    printf("Pre %d\n",n);
    preInPost(n-1);
    printf("In %d\n",n);
    preInPost(n-1);
    printf("Post %d\n",n);
    return;
}

int main(){
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    preInPost(n);

    return 0;
}*/

/*tower of hanoi

void tower(int n,char s, char h, char d){
    if(n==0){
        return;
    }
    tower(n-1,s,d,h);
    printf("Move disk from %c to %c\n",s,d);
    tower(n-1,h,s,d);
}

int main(){
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    tower(n,'A','B','C');

    return 0;
}*/

