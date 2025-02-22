#include <stdio.h>

int main() {
    float f;
    float c;

    printf("\nFahrenheit: ");
    scanf("%f", &f);
    c = (f - 32)*5/9;
    printf("\nFahrenheit (%.f) To Celcious : %.2f\n",f,c);

    return 0;
}
