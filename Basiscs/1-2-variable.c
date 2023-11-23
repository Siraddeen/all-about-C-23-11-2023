/*
            %d   for  integers    ---->  99      5           45 
            %f   for  floats      ---->  2.3    56.2
            %c   for  characters  ---->   'de'  'a' 
*/

# include <stdio.h>

int main(){
    int a = 2;
    float m = 3.2;
    char w = 'u';
    printf("value of m is %f \n ",m );
    printf("and value of a is  %d \n",a);
    printf("value of w is  %c",w);
    return 0;
}