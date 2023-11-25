/*
the thing here is that C dont care about bodmas   that it does
      here the first priority goesd to
      1) *  /  %
      2)  +  - 
      3)   =                main thing to remember  this action is done only in asence   of  () 

  Associaty operator 
                 always goes from left to right 

                  x * y / z ===>  (x*y) / z             &
                  x / y * z ===>  (x/y) * z                  this is how   C programme works 

                   *  ,  /   follows   left to right associativity
*/

# include <stdio.h>

int main(){
    int a = 3;
    int b = 5;
    printf("value of the equation is %d", 4 * a / b + 2 );  // generally you expect 4*3 /  5+2   as  12/7  as 1.7 but it is not gonna happen her
               // we got answer 4  because  c   calculate it as  4*3=> 12 then 12/5=> 2.4 then 2.4+2 => 4 (4.4)    but given input is int


    return 0;
}



// here we discussed about both   sequence & decision  control instructions