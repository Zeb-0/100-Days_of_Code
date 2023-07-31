#include <stdio.h>

/**
 * Accepts employee's details 
 * print employee's ID and Salary(2dp)
 * 
 * Return: 0
*/
int maim() {
    int Emp_ID[10];
    int W_Hrs;
    float Pay_per_hr = 15000;
    float Salary;

    printf("Input the Employees ID: ");
    scanf("%d", &Emp_ID);
    printf("\nInput the working hrs: ");
    scanf("&d", &W_Hrs);

    Salary = Pay_per_hr * W_Hrs;
    printf("Employees's ID is: %d\n", Emp_ID);
    printf("Salary = U$ %.2f\n", Salary);

    return (0);
}