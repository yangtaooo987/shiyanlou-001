#include <stdio.h>

int main(){
    int max4(int,int,int,int);
    int a,b,c,d,max;

    printf("please ener 4 numbers:");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    max = max4(a,b,c,d);
    printf("max is:%d\n",max);
}

int max(int a,int b){
    return a>b?a:b;
}

int max4(int a,int b,int c,int d){
    int max(int a,int b);
    int m;
    m = max(a,b);
    m = max(m,c);
    m = max(m,d);
    return m;
}
