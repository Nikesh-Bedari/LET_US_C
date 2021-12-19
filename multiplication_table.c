#include<stdio.h>
#include<conio.h>

void main(){
    int i,j;
    
    //asking user for inputs
    printf("Enter your number:\n");
    scanf("%d", &i);
    
    //the main logic is used for for loop
    for (j=1;j<=10;++j) {
        printf("%d * %d = %d\n",i,j,i*j);
    }
}
