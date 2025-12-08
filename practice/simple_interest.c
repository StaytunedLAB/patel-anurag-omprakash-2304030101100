#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time;
    printf("Enter principal amount: ");
    if (scanf("%lf", &principal) != 1) return 0;
    printf("Enter annual interest rate (percent): ");
    if (scanf("%lf", &rate) != 1) return 0;
    printf("Enter time (years): ");
    if (scanf("%lf", &time) != 1) return 0;

    double simple_interest = (principal * rate * time) / 100.0;
    double amount_compound = principal * pow(1.0 + rate / 100.0, time);
    double compound_interest = amount_compound - principal;

    printf("\nSimple Interest: %.2f\n", simple_interest);
    printf("Compound Interest: %.2f\n", compound_interest);
    printf("Amount after %.2f years (compound): %.2f\n", time, amount_compound);

    return 0;
}