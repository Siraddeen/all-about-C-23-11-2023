# include <stdio.h>

int main(){
    int a = 4;
    int b = 6;
    printf("value of a + b is : %d\n",a +b);
    printf("value of a - b is : %d\n",a -b);
    printf("value of a * b is : %d\n",a *b);
    printf("value of a / b is : %d\n",a /b);
    printf("value of a / b is : %f\n",a /b);     //   to this work change a or b as float 
    return 0;
}

/*
legal                         --->   int a = 12;   int b= 4 ;        int x ;    x = a*b
illegal  or    not allowed    --->   int a = 12;   int b= 4 ;        int x ;     a*b =x

printf("value of 4^5 is not 4*4*4*4 in c language %d",4^5)   --->   gives anwer as 1  due to xor in bitwise

to include power values use pow(4,5 )         and also use         # include(math.h)    at top of code 

general things     
      int & int  ------->   int
      int & float   ---->   float
      float & float ---->   float



IMPORTANT   
       5/2 -->  2           5.0/2 ---> 2.5
                                                   observe the difference      while taking as only int & mingle of int with float
       2/5 - -> 0            2.0/5 ---> 0.4



as a thing if code is mistakenly write as this then c store it as

        int a = 5.3 ----> a stores as 5 or 6      it's  choice                         &
        float c = 7  ---> c stores as 7.0       by default

*/