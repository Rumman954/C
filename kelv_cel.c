#include <stdio.h>

int main() {
    float k;
    float c;

    printf("\nKelvin: ");
    scanf("%f", &k);
    c = (k - 273.15);
    printf("\nKelvin (%.f) To Celcious : %.2f\n",k,c);

return 0;
}

