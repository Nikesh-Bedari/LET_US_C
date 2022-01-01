//factorial finder in c

#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){
    int i,num,factorial=1;

    
    printf("Enter your number: ");
    scanf("%d", &num);

    for (i=1;i<=num;++i) {
        factorial = factorial*i;
        
        
    }
    printf("The factorial of %d = %d", num,factorial);




    return 0;
}
