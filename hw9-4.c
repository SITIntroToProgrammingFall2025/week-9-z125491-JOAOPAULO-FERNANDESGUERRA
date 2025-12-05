#include <stdio.h>

int main() {

    int r, g, b;

    scanf("%d", &r);
    scanf("%d", &g);
    scanf("%d", &b);

    printf("The hex code is #%02X%02X%02X", r, g, b);

    return 0;
}

