
//ODD EVEN FINDER



#include<stdio.h>


int main(){
    int a,b;

    printf("Enter Number: ");scanf("%d", &a);
    

    
        if (a % 2 == 0){
            printf("The number %d is EVEN!!\n", a);
        }
        else if(a % 2 != 0 ){
            printf("The number %d is ODD\n", a);
        }
        else{
            printf("The value you entered is wrong !!");
            
        }
        printf("Do you want to continue again(y=1/n=0): ");scanf("%d", b);

    

}
