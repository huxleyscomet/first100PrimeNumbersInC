#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main()
{   
    printf("%d\n", 2);
    for (float i = 3; i <= 100; i++) {
        bool isPrime = true;
        for (float a=2; a < i - 1; a++) {
            if (fmodf(i,a)==0) {
                isPrime = false;
            }
        }
        if (isPrime == true) {
            printf("%.0lf\n", i);
        }
        
    }

    return 0;
}
