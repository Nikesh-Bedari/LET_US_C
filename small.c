#include<stdio.h>
#include<conio.h>

void main(){
    int i,j;
    printf("Enter your number:\n");
    scanf("%d", &i);
    for (j=1;j<=10;++j) {
        printf("%d * %d = %d\n",i,j,i*j);
    }
}