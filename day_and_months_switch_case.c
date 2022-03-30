// #include <stdio.h>
// #include <conio.h>

// void main() {
//     int months,run = 1;

//     printf("Enter a number to know the 12 months: ");scanf("%d", &months);

    
//     switch(months){
//         case 1:
//             printf("It's January dude!");
//             break;
        
//         case 2:
//             printf("It's Febrauray dude!");
//             break;
        
//         case 3:
//             printf("It's March dude!");
//             break;
        
//         case 4:
//             printf("It's April dude!");
//             break;
        
//         case 5:
//             printf("It's May dude!");
//             break;
        
//         case 6:
//             printf("It's June dude!");
//             break;
        
//         case 7:
//             printf("It's July dude!");
//             break;
        
//         case 8:
//             printf("It's August dude!");
//             break;
        
//         case 9:
//             printf("It's September dude!");
//             break;
        
//         case 10:
//             printf("It's October dude!");
//             break;
        
//         case 11:
//             printf("It's November dude!");
//             break;
        
//         case 12:
//             printf("It's December dude!");
//             break;
        
//         default:
//             printf("!!Invalid section!!");
        
        
        
//     }
// }

#include <stdio.h>
#include <conio.h>




void main(){
    int days;

    printf("Enter Number For it's Day Name: ");scanf("%d", &days);

    switch (days){
        case 1:
            printf("It's Sunday\n");
            break;
        case 2:
            printf("It's Monday\n");
            break;
        case 3:
            printf("It's tuesday\n");
            break;
        case 4:
            printf("It's Wednesday\n");
            break;
        case 5:
        printf("It's Thrusday\n");
        break;
        case 6:
            printf("It's Friday\n");
            break;
        case 7:
            printf("It's Saturday\n");
            break;

        default :
            printf("Invalid Input");
    }
}
