// Question  1                write a programm to calculate area of rectangle 
//                     by   a) hard code input          &       b) using input by user

/* 

// a)

# include <stdio.h>

int main(){
    int length = 15;
    int breadth = 12;
    printf("the area of rectangle is %d",length*breadth);
    return 0;
}


// b)
# include <stdio.h>

int main(){
    int len , bre;
    printf("give value of lentgh \n");
    scanf("%d",&len);
    printf("give value of breadth \n");
    scanf("%d",&bre);
    printf("the area of rectangle is %d",len*bre);
    return 0;
}

*/


/*

// Question  2          Calculate area of cicle & modify same programm to calculate volume of cylinder given its radius & height

# include <stdio.h>

int main(){
    int radius = 8;
    float pi = 3.14;
    printf("area of this circle is %f \n",pi*radius*radius);   // for circle

    int height = 12;
    printf("volume of cylinder is %f",pi*radius*radius*height);
    


    return 0;
}

*/


/*

// Question 3        convert celcius to fahrenheit

# include <stdio.h>

int main(){
    float celcius = 37.6 ;
    float fare = (celcius*9/5)+32;
    printf("the temperature is %f",fare)  ;
    return 0;
}

*/


// Question 4         calculate simple interest for a set of values representing principal, no of years & rate of interst

# include <stdio.h>

int main(){
    int principle=100, rate=4, years=1;
    int simpleinterest = (principle* rate* years)/100;
    printf("the value of interest is  %d \n",simpleinterest);
    printf("the total amount you owe is %d",simpleinterest+principle);

    return 0;
}