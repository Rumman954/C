#include<stdio.h>
int main(){
    float r;
    float cir_f;

    printf("\nEnter the Radius: ");
    scanf("%f", &r);
    cir_f = 2*3.1416*r;
    printf("\nFor Radius (%.f) Circumference of a Circle: %.3f\n",r,cir_f);

return 0;
}

