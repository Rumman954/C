#include<stdio.h>
int main(){
    float h;
    float w;
    float a;
    printf("\nEnter Height: ");
    scanf("%f", &h);
    printf("\nEnter Width: ");
    scanf("%f", &w);
    a = h*w;

    printf("\nTotal Area is (h: %.2f) x (w: %.2f) = %.2f\n",h,w,a);


return 0;
}
