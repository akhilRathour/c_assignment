#include <stdio.h>

int main() {
    int a ;
    int b ;
    int c ;
    printf("enter numbers\n");
    scanf("%d %d %d",&a,&b,&c);
    int max_num, min_num;

    max_num = min_num = a;

    if (b > max_num) {
        max_num = b;
    }
    else if (b < min_num) {
        min_num = b;
    }

   
    if (c > max_num) {
        max_num = c;
    }
    else if (c < min_num) {
        min_num = c;
    }

    printf("Maximum number: %d\n", max_num);
    printf("Minimum number: %d\n", min_num);

    return 0;
}
