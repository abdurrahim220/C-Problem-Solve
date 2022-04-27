#include<stdio.h>
int main(){

    int i=2,n;
    printf("Input even number= ");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d\t",i);
        i+=2;
    }
    getch();
}
