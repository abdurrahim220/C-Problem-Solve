#include<stdio.h>
int main(){

    int i,n;
    long sum=0;
    printf("Input lust Number of the Series= ");
    scanf("%d", &n);
    printf("1+2+3+....+%d= ",n);

    for(i=2;i<=n;i=i+2)
    {
        sum=sum+i;
    }
    printf("%d",sum);
    getch();
}
