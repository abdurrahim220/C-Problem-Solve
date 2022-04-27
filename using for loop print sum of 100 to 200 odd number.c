#include<stdio.h>
int main(){

    int i,N;

    long sum=0;

    printf("Input Last Number of the series = ");
    scanf("%d", &N);
    printf("101+103+....+%d = ", N);
    for(i=100;i<=N;i=i+2)
    {
        sum=sum+i;
    }
    printf("%d",sum);
    getch();
}
