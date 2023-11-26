/*

//  1  Question

# include <stdio.h>

int main(){
    int n = 2;
    if(n=5)printf(" n equal to 5");            // we got this value as answer because here i didn't use     ==      it is a tricky quetion 😂
    else(printf("n is not equal to 5"));    
    return 0;
}

*/

/*
       find out if a student is pass or fail,  if pass requires 40% in total  or atleast 33% in each 
           subject.         assume all subjects as 3   &  capture marks from user via scanf.     

// 2  Question 

# include <stdio.h>

int main(){
    float sub1 , sub2 , sub3 ;   // considering subjects as sub 1,2,3
   
    printf("enter your marks in sub1 \n");
    scanf("%f",&sub1); 
    printf("enter your marks in sub2 \n");
    scanf("%f",&sub2); 
    printf("enter your marks in sub3 \n");
    scanf("%f",&sub3);            // require all marks from students 

    float total_percentage = (sub1+sub2+sub3)/3; 

    if(total_percentage<40 || sub1<33 || sub2 <33 ||sub3 <33){
        printf("your percentage is %f and you are fail \n ",total_percentage);
    }else{
        printf("your percentage is %f and you are pass \n",total_percentage);
    }


    return 0;
}
// what is the problem                   --------------->   always check for        %d       %f 
// works    done 

*/

/*
 3 Question               calculate some tax        if 2-5 l----> 5%        5-10l ---> 20%         above 10 l ----> 30%


# include <stdio.h>

int main(){
    float tax = 0;
    float income ;
    printf("whay is your income \n");
    scanf("%f",&income);
    if(income< 200000){
        printf("no need to pay tax");
    }else if(income>=20000  && income <=50000){
        tax = tax + 0.05*(income-20000);
    }else if(income>=50000  && income <=100000){
        tax = tax + 0.2*(income-50000);
    }else if(income >100000){
        tax = tax + 0.3*(income-100000);
    }
    printf("your net tax amount would be %f \n",tax);
    return 0;
}

// works fine

*/

/*
 4Quetion             write a programm to check whether it is a leap year or not 


# include <stdio.h>

int main(){
    int year ;
    printf("give a year number \n");
    scanf("%d",&year);
    //if(( year % 4== 0 )){
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("given year is a leap year that is %f",year);
    }else{
        printf("this is not a leap year %d",year);    }
    return 0;
}

// works

*/


/*
 5Quetion         check if entered cahracter by user is lowercase or not         --------> from ascii table a-z  97-122

*/

# include <stdio.h>

int main(){
    char cha;
    printf("enter your character \n");
    scanf("%c",&cha);    
    // a-z  ----> 97-122
    if(cha<=122 && cha >=97){
        printf("it is lowercase");
    }
    else{
        printf("it is not a lowercase character");
    }
    return 0;
}
// works fine 

//ok bye