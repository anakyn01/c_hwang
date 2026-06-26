#include <stdio.h>

int main() {

    //for
    int sum = 0;
    int i;

    for(i=1; i <=5; i++) {
        sum = sum + i;
    }

    printf("%d",sum);

    int countdown = 3;
    while (countdown > 0) {
        printf("%d\n", countdown);
        countdown--;
    }
printf("happy new year");

    return 0;
}