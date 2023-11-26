// here we are gonna use if else statement in a single line   known as ternary statements

# include <stdio.h>

int main(){
    int h;
    printf("give value of a \n");
    scanf("%d",&h);
    (h<7)? printf("h is lessthan 7"):printf("h is not less than 7");
    return 0;
}
/*
                  // here (a<7)?   is the main if condition
                         if conditon statement true then run    printf("h is lessthan 7") 
                             else    run                        printf("h is not less than 7")
                             just like in javascript
*/
//   done   but if you still feel not able to grab it's syntax   then here is actual if else code  compare them & tyr to understand them


# include <stdio.h>

int main(){
    int a;
    printf("give a number you like \n");     // printf -----> prints what ever we write in code
    scanf("%d",&a);                         // scanf -----> asks for input from user   and   %d  is for denoting integer    and    &a is denoting address in ram 
    if (a<8){
        printf("a is less than 8 ");
    }else{
        printf("a is not lessthan 8 or a is greater than 8");
    }
    return 0;
}


// try to use this in a place wher only if else gonna use
//    not recommended to use where you gonna use if, elif & else if