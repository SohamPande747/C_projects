#include <stdio.h>

int main() {
    int cent, quarter = 25, dime = 10, nickel = 5, penny = 1, i = 0, j = 0, k = 0, l = 0, count2, count3, count4, count5;
    printf("Enter the required change: ");
    scanf("%d", &cent);

    while(cent - i*quarter >= 0){
        count2 = cent - i*quarter;
        i++;
    }
    while(count2 - j*dime >= 0){
        count3 = count2 - j*dime;
        j++;
    }
    while(count3 - k*nickel >= 0){
        count4 = count3 - k*nickel;
        k++;
    }
    while(count4 - l*penny >= 0){
        count5 = count4 - l*penny;
        l++;
    }

    printf("Total Coins: %d\n", i+j+k+l-4);
    printf("%d\n", i-1);
    printf("%d\n", j-1);
    printf("%d\n", k-1);
    printf("%d\n", l-1);
    return 0;
}