#include <stdio.h>
#include <stdlib.h>

#include "root.h"

int main() {
    double mas[2];
    if (root(mas, 1, -5, 6)){
        printf("%f %f\n", mas[0], mas[1]);
    }
    return 0;
}