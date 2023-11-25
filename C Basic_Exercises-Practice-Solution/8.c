#include<stdio.h>

int main(){
    int Number = 1329;
    int years = Number/365;
    int weeks= (Number%365)/7;
    int days =(Number- ((years*365) + (weeks*7)));

    printf("years = %d\n" , years);
    
    printf("weeks = %d\n" , weeks);

    printf("days = %d\n" , days);

}