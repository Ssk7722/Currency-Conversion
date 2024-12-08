#include <stdio.h>

int main() {
    int option;
    float value, result;

    printf("Currency Exchange Tool\n");
    printf("Choose an option:\n");
    printf("1: USD to INR\n2: INR to USD\n3: EUR to INR\n4: INR to EUR\n");
    printf("5: GBP to INR\n6: INR to GBP\n7: AUD to INR\n8: INR to AUD\n");
    printf("9: CAD to INR\n10: INR to CAD\n");
    scanf("%d", &option);

    printf("Enter the amount to convert: ");
    scanf("%f", &value);

    switch (option) {
        case 1: result = value * 82.5; break;
        case 2: result = value / 82.5; break;
        case 3: result = value * 89.7; break;
        case 4: result = value / 89.7; break;
        case 5: result = value * 101.3; break;
        case 6: result = value / 101.3; break;
        case 7: result = value * 53.2; break;
        case 8: result = value / 53.2; break; 
        case 9: result = value * 60.5; break;
        case 10: result = value / 60.5; break;
        default:
            printf("Invalid selection. Try again.\n");
            return 0;
    }

    printf("Converted amount: %.2f\n", result);
    return 0;
}
