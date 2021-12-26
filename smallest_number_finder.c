#include<stdio.h>
#include<conio.h>

void main(){
    int num1,num2,num3,limit;

    //asking user a certain break point to end the loop of infinite
    printf("Enter Limit: ");scanf("%d", &limit);

    //as we know that the first two fibonacci numbers are 0 and 1 
    num1=0;num2=1;
    printf("\n%d\n%d\n", num1,num2);

    //decreasing 2 digits from the user limit because 0 and 1 are already those two numbers
    limit -= 2;

    //starting a while loop to finally process all the fibonacci numbers to the users desired limit
    while (limit){
        // if at first n1 is 0 and n2 is 1 than after that a new n3 will be the sum of those n1,n2
        num3 = num1+num2;
        printf("%d\n", num3);
        num1=num2;
        num2=num3;
        
        limit -= 1;

    }
}