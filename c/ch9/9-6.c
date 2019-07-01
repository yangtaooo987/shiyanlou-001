#include<stdio.h>

int main(){
    double average(double arr[10]);
    double score[10],ave;
    int i;

    printf("please enter 10 scores:");
    for(i=0;i<10;i++){
        scanf("%lf",&score[i]);
    }
    printf("\n");
    ave = average(score);

    printf("average score is:%lf\n",ave);
}

double average(double arr[10]){

    int i,sum;
    int ave;
    for(i=1,sum=arr[0];i<10;i++){
        sum = sum + arr[i];
    }
    ave = sum /10;
    return ave;

}
