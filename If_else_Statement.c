// Check Odd or Even
#include <stdio.h>
int main() {
    int num;
    printf("Enter the number");
    scanf("%d",& num);
    
    if (num%2 != 0){
        printf("Number is Odd");
    }    
    else{
        printf("Number is Even");
    } 
// Here program chooses one of two paths.
// Either "Even" or "Odd".

}
