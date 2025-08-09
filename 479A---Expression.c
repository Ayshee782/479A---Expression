#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int max_val = a + b + c;

    if (a * b * c > max_val) max_val = a * b * c;
    if ((a + b) * c > max_val) max_val = (a + b) * c;
    if (a * (b + c) > max_val) max_val = a * (b + c);
    if (a + b * c > max_val) max_val = a + b * c;
    if (a * b + c > max_val) max_val = a * b + c;

    printf("%d\n", max_val);
    return 0;
}

