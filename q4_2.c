#include<stdio.h>

    int main(){
    int n,sum=0;
    printf("enter number\n");
    scanf("%d",&n);
    for(int j;n!=0;n=n/10){
         j=n%10;
         sum+=j;
    }

    /*
    while(n !=0){
        
        int j=n%10;
sum +=j;
n=n/10;
    }
    */
   printf("%d",sum);



return 0;
}
