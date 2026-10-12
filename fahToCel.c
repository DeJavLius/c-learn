#include <stdio.h>

// C = (5/9)*(F-32)

static int main_while();

int main_while(void) {
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    printf("Fahr\tCelsius\n");
    fahr = lower;
    while (fahr <= upper) {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%3.0f\t\t%6.1f \n", fahr, celsius);
        fahr = fahr + step;
    }

    printf("Celsius\tFahr\n");
    celsius = lower;
    while (celsius <= upper) {
        fahr = (celsius / (5.0 / 9.0)) + 32.0;
        printf("%3.0f\t\t%6.1f \n", celsius, fahr);
        celsius = celsius + step;
    }

    return 0;
}

int main(void) {
    int fahr;

    for (fahr = 0; fahr <= 300; fahr = fahr + 20) {
        printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
    }

    printf("reverse print");
    for (fahr = 300; fahr >= 0; fahr = fahr - 20) {
        printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
    }
}