#include <stdio.h>

// converts given days into years, weeks and days
int main() {
    int days, weeks, years;

    printf("Enter days to be converted: ");
    scanf("%d", &days);

    years = days / 365;
    printf("\nYears : %d\n", years);

    weeks = (days % 365) / 7;
    printf("Weeks : %d\n", weeks);

    days = (days % 365) % 7;
    printf("Days : %d\n", days);
    
    return (0);
}