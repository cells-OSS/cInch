#include <stdio.h>

int main() {
    printf("##################################\n 1: Inches to centimeters\n 2: Centimeters to inches\n##################################\n");
    printf("> ");
    int a = 0;
    scanf("%d", &a);
    
    if (a == 1) {
        int inch;
        printf("Inches: ");
        scanf("%d", &inch);
        float cm = inch * 2.54;
        printf("%f\n", cm);
	printf("Press Enter to exit...");
	getchar();
	getchar();
        return 0;
    }

    if (a == 2) {
        int cm = 0;
        printf("Centimeters: ");
        scanf("%d", &cm);
        float inch = cm / 2.54;
        printf("%f\n", inch);
	printf("Press Enter to exit...");
	getchar();
	getchar();
        return 0;
    }
}
