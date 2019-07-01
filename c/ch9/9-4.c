#include <stdio.h>
int main(){
    int fac(int n);
    int n,y;
    printf("please enter an integer number:");
    scanf("%d",&n);
    y = fac(n);
    printf("%d! = %d\n",n,y);
}

int fac(int n){
    int f;
    if(n==0||n==1){
        f=1;
    }
    else
        f = n*fac(n-1);
    return f;
}
