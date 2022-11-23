#include <stdio.h>
#include <math.h>

int main()
{
    int x, z;
    double y;

    printf_s("insert x: ");
    scanf_s("%d", &x);

    printf_s("insert z: ");
    scanf_s("%d", &z);

    while (x < 0 || z < 0 || sqrt(x) - 2 * sqrt(x * z)==0) {
        printf_s("insert x: ");
        scanf_s("%d", &x);

        printf_s("insert z: ");
        scanf_s("%d", &z);
    } 
   
    
    y = (sqrt(x) + 2 * sqrt(x * z)) / (sqrt(x) - 2 * sqrt(x * z));
    
    printf_s("y = (sqrt(x) + 2sqrt(x * z)) / (sqrt(x) - 2sqrt(x * z))\n");
    printf_s("result: %.0lf", y);
}
