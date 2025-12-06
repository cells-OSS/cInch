#include <stdio.h>

int main() {
    printf("Would you like to convert inches to centimeters or centimeters to inches(1/2)?\n");
    int a;
    scanf("%d", &a);
    
    if (a == 1) {
        int inch;
        printf("inches: ");
        scanf("%d", &inch);
        float cm = inch * 2.54;
        printf("%f\n", cm);
        return 0;
    }
    if (a == 2) {
        int cm;
        printf("centimeters: ");
        scanf("%d", &cm);
        float inch = cm / 2.54;
        printf("%f\n", inch);
        return 0;
    }
    return 0;
}