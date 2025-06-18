#include <stdio.h>
void useri(void);
float calc(float one, char sign, float two);
void disp(float one, char sign, float two, float display);
int main() {
    float display;
    float one, two;
    char sign, option;
    printf("\n");
    do {
        useri();
        scanf("%f %c %f", &one, &sign, &two);
        display = calc(one, sign, two);
        disp(one, sign, two, display);
        printf("\n  Another calculation? (y/n): ");
        scanf(" %c", &option);
    } while (option == 'y' || option == 'Y');
    printf("\n");
    for(int i = 1; i <= 35; i++) {
        printf("=");
    }
    printf("\n");
    printf("    www.parvejhusentalukder.com\n");
    for(int i = 1; i <= 35; i++) {
        printf("=");
    }
    printf("\n\n");
    return 0;
}
void useri(void) {
    printf("\n");
    printf("  ");
    printf("\t");
    for(int i = 1; i <= 3; i++) {
        printf("+- -+");
    }
    printf("\n");

    printf("\t<<<vSIM CALC>>>\t\n");
    printf("\t");
    for(int i = 1; i <= 3; i++) {
        printf("+- -+");
    }
    printf("\n  +----- INSTRUCTIONS -----+\n");
    printf("  |                        |\n");
    printf("  | Use operators:         |\n");
    printf("  | +  -  * / only         |\n");
    printf("  |                        |\n");
    printf("  |                        |\n");
    printf("  | Format:                |\n");
    printf("  | 10 + 2 <Enter>         |\n");
    printf("  |                        |\n");
    printf("  | Note: Division by      |\n");
    printf("  | zero not allowed       |\n");
    printf("  | * To continue enter y/Y|\n");
    printf("  | * To stop enter n      |\n");
    printf("  +------------------------+\n");
    printf("\n  >> Enter calculation: ");
}

float calc(float one, char sign, float two) {
    if (sign == '+')
    {
        return one + two;
    } else if (sign == '-') {
        return one - two;
    } else if (sign == '*') {
        return one * two;
    } else if (sign == '/') {
        if (two == 0 ) {
            return 404;
        } else {
            return one / two;
        }
    } else {
        return 500;
    }
}
void disp(float one, char sign, float two, float display) {
    printf("\n  +--- RESULT ---------+\n");

    if (display == 404) {
        printf("  |                    |\n");
        printf("  | ERROR:             |\n");
        printf("  | Can't Be           |\n");
        printf("  | Divided by         |\n");
        printf("  | Zero               |\n");
        printf("  |                    |\n");
    } else if (display == 500) {
        printf("  |                    |\n");
        printf("  | ERROR:             |\n");
        printf("  | Unrecognized       |\n");
        printf("  | character          |\n");
        printf("  | detected           |\n");
        printf("  |                    |\n");
    } else {
        printf("  | Answer:            |\n");
        printf("  | %.0f %c %.0f = %.1f |\n", one, sign, two, display);
        printf("  |                    |\n");
    }
    printf("  +--------------------+\n");
}
