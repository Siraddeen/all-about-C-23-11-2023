# include <stdio.h>

int main(){
    int n;
    printf("give a number \n");
    scanf("%d",&n);
    if(n==1){
        printf("your number is 1 \n");
    }else if(n==2){
        printf("your number is 2 \n");
    }else if(n==3){
        printf("your number is 3 \n");
    }else{
        printf("your number is not 1 2 3");
    }
    return 0;
}


// Operator precedence
/*
        1          !
        2       *  /  %
        3        +   -
        4    <>    <=    >=
        5       ==    !=  
        6         &&
        7         ||
        8         = 
        
*/