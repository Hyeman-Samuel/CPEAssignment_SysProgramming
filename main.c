#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of values: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid number of values.\n");
        return 1;
    }

    double sum = 0;
    for (int i = 1; i <= n; i++) {
        double value;
        printf("Enter value %d: ", i);
        scanf("%lf", &value);
        sum += value;
    }

    double average = sum / n;
    printf("The average of the %d numbers is: %.2lf\n", n, average);

    return 0;
}
