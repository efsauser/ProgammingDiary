#include <stdio.h>
int main(void){
    int a=0, b=0, c=0;
    scanf("%d %d", &a, &b);
    c = a;
    a = b;
    b = c;
    printf("%d %d", a, b);
    return 0;
}
