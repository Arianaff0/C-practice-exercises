#include <stdio.h>

//cel to fahrenheit: mult by 1.8 (or 9/5) and add 32

double cel_to_fahren(double cel);

int main() {
    double cel= 0;
    double start;
    double end;
    double step;
    char headerC = 'C';
    char headerF = 'F';

    printf("Enter start C temp: ");
    scanf("%lf", &start);
    printf("Enter end C temp: ");
    scanf("%lf", &end);
    printf("Enter step C temp: ");
    scanf("%lf", &step);

    printf("cel to fahren conv table: \n");
    printf("%-8c %4c\n", headerC, headerF);

    for (cel = start;cel <=end; cel+=step) {
        double fahren = cel_to_fahren(cel);
        printf("%-8.2lf %8.2lf\n", cel, fahren);
    }
    return 0;
}

double cel_to_fahren(double cel) {
    double fahren = cel*(9.0/5.0)+32;
    return fahren;
}