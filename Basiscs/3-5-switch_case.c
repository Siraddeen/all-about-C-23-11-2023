/*
ok here in this switch_case scenario when ever we rich or extracted point 
         then we will able to break code from that place & able to get required values
*/

//  so it is important to introduce break to the system

# include <stdio.h>

int main(){
     int experience;
     printf("enter your experience level from 1-7 \n");
     scanf("%d",&experience);
     switch(experience){
        case 1:
            printf("your score is 1");
            break;
        case 2:
            printf("your score is 2 \n ");
            break;
        case 3:
            printf("your score is 3 \n ");
            break;
        case 4:
            printf("your score is 4 \n ");
            break;
        case 5:
            printf("your score is 5 \n ");
            break;
        case 6:
            printf("your score is 6 \n ");
            break;
        case 7:
            printf("your score is 7 \n ");
            break;
        default:
            printf("give proper experience score");
        break;

     }
    return 0;
}

// done  working perfectly          i will attach  github page link to this   _______     so you can cross check it in future
