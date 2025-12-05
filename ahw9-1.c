#include <stdio.h>
#include <math.h>

int main() {

    int r, g, b;
    scanf("%d", &r);
    scanf("%d", &g);
    scanf("%d", &b);

    int colors[5][3] = {
        {0, 0, 0},       // Black
        {255, 0, 0},     // Red
        {0, 255, 0},     // Green
        {0, 0, 255},     // Blue
        {255, 255, 255}  // White
    };

    char *names[5] = {
        "Black", "Red", "Green", "Blue", "White"
    };

    double minDist = -1;
    int minIndex = 0;

    for(int i = 0; i < 5; i++) {
        double dr = r - colors[i][0];
        double dg = g - colors[i][1];
        double db = b - colors[i][2];

        double dist = sqrt(dr*dr + dg*dg + db*db);

        if(minDist < 0 || dist < minDist) {
            minDist = dist;
            minIndex = i;
        }
    }

    printf("The nearest color is %s", names[minIndex]);

    return 0;
}

