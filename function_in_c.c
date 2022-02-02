#include<stdio.h>
#include<string.h>



//this function is existed with the proper program to print the full name of the user
void print_fullname(char name[20], char surname[20]);

//this function is made for to do a simple sum of two digits numbers.
void print_sum(int a, int b);


int main(){
    int first_num,second_num;
    char first_name[20],second_name[20];
    printf("Enter your first name: ");scanf("%s", first_name);
    printf("Enter your surname: ");scanf("%s", second_name);

    //calling the print_fullname function.
    print_fullname(first_name,second_name);
    
    first_num=12;
    second_num=12;

    //calling the print_sum function.
    print_sum(first_num,second_num);
    return 0;
}

void print_fullname(char name[20],char surname[20]){
    
    printf("Hello %s %s.Do you know: \n",name, surname);

}


void print_sum(int a, int b){
        int sum;
        sum = (a+b);
        printf("The sum of %d + %d = %d",a,b,sum);

}

