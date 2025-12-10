#include<stdio.h>
int main(){
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    int maxab = (a>b)?a:b;
    int minab = (a>b)?b:a;
    int maxcd = (c>d)?c:d;
    int mincd = (c>d)?d:c;   

    int check1= (maxab>maxcd)?maxcd:maxab;
    int check2= (minab>mincd)?minab:mincd;
    int second= (check1>check2)?check1:check2;

    printf("%d",second);

}
