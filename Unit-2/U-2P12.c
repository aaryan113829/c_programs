#include <stdio.h>

int main(){

    int num, i;

    printf("\nEnter You Want to Print Number: ");
    scanf("%d", &num);

    for (i=1;i<=num;i++){
        printf("%d ", i);
    }
     
    return 0;
}
