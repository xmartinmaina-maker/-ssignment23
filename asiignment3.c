/*
Name: Martin Maina
Reg:  CT100/G/26125/25
Description: loan eligibility check program
*/

#include <stdio.h>

int main(){
    int age, income;
    
    //prompt for age
    printf("please enter your age: ");
    scanf("%d", &age);
    
    //prompt for income
    printf("please enter your income: ");
    scanf("%d", &income);
    
    //eligibility check
    if (age >= 21 && income >= 21000){
        printf("Congratulations you qualify for a loan.\n");
    }else{
        printf("you do not qualify for a loan.\n");
    }
    
    return 0;
}