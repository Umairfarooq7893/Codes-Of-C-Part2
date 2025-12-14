#include<stdio.h>
#include<conio.h>
int main(){
    int a,b,c;
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);
    printf("Enter c:");
    scanf("%d",&c);
    if(a > b){
        if(a > c){
            printf("a is the largest\n");
        } 
        else {
            printf("c is the largest\n");
        }
    } else {
        if(b > c){
            printf("b is the largest\n");
        } 
        else {
            printf("c is the largest\n");
        }
    }
    return 0;
}