#include <stdio.h>

int main()
{
    int max = 10;
    float s;
    float sum = 0;
    float average;

    for (int i = 1; i <= max; i++) {
        printf("Input heigh %d : ", i);
        scanf("%f", &s);
        printf("s=%.2f\n", s);
        sum = sum + s;
    }

    average = sum / max;
    printf("average height = %.2f", average);

    return 0;
}