#include<stdio.h>
int main(){
    int apple=0, orange=0;
    printf("Initially You Have Apple = %d and Orange %d\nAdd Apple:",apple, orange);
    scanf("%d", &apple);
    printf("Now You Have: \nApple = %d Orange = %d\n", apple, orange);
    orange = apple++;
    printf("::After Post Increment::\n Now You Have: \nApple = %d  Orange = %d\n", apple, orange);

return 0;
}
