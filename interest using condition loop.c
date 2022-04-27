#include<stdio.h>
#include<conio.h>
void main(){

    int year=1;
    float amount=5000, value,inrate=0.10;
    //clrscr();
    printf(" Year   Amount\n ");
    for(year=1;year<=5; year++);
    {
        printf("%.2d   %.2f\n",year ,amount);
        value=amount+inrate*amount;
        amount=value;
    }
    getch();
}
