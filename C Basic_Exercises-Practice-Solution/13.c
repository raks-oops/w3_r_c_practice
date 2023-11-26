#include<stdio.h>

int main(){
    int n1, n2, n3;

    printf("n1 - ");
    scanf("%d" ,&n1);
    printf("n2 - ");
    scanf("%d" ,&n2);
    printf("n3 - ");
    scanf("%d" ,&n3);

    if(n1>n2){
        if(n1>n3){
            printf("n1 greater");
        }
        else{
            printf("n3 greater");
        }
    }
    else{
        if(n2>n3){
            printf("n2 greater");
        }
        else{
            printf("n3 greater");
        }
        
    }
    
}