# include <stdio.h>

int main(){
    int a;
    printf("give a number : \n");
    scanf("%d",&a);
    if(a%2==0){
        printf("the given number is dividble by 2 and given number is %d",a);
   
    }else{
        printf("number is odd");
    }
    return 0;
}