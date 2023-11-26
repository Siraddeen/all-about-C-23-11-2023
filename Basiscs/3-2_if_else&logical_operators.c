// in C a non 0 zero       value is considered   as   true
//     equal ==     assign =  


//logical    and &&   greaterthan <=   lessthan >=
//       ||  or           ! not

# include <stdio.h>

int main(){
    int age;
    int vp = 1;
    printf("what is your age \n");
    scanf("%d",&age);
    if((age <=70 && age>=18 && age<=100) || vp==1){             // here even  forst condition is wrong then second conditon is right then loop says ok true
        printf("your age is inbetween or wqual to 18-70");
    }else{
        printf("Age is either not enough or more than 100.\n");
    }
    return 0;
}


/* here 
      1) && --> AND     is true when both condition in if condition are true

         ' 1 and 0 '  is evaluted as false
         ' 0 and 0 '  is evaluted as false
         ' 1 and 1 '  is evaluted as true

      2) || --> OR  is true when at least one of the conditoin is true
      3) ! -->  NOT  returns false if condition is true       &  returns true if condition is false      
             !(35===35) -------> evaluates as false
             !(35<35)   -------> evaluates as true
*/


