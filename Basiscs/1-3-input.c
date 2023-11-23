/*
here  scanf    is act as agent to require parament from user      
here we mentioned {{ scanf("%d",&a); }}   ---->   here    &a    means   we are allocating space in ram with address of a  for this we use &
        &   is  important to mention when requering data from user 
*/

#include<stdio.h>

int main(){
    int a,b;
    printf("give value of a \n " );
    scanf("%d",&a);
    printf("value of b is \n");
    scanf("%d",&b);

    printf("value of a & b is %d", a+b);
    return 0;
}
