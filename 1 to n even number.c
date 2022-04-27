#include<stdio.h>
#include<conio.h>
int main(){
int a,n ;

printf("How many even number= ");
scanf("%d", &n);
for (a=2; a<=n; a+=2)
    printf("%d\t",a);
getch();
}
