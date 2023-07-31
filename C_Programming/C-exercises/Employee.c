#include <stdio.h>

/**
 * Accepts employee's details 
 * print employee's ID and Salary(2dp)
 * 
 * Return: 0
*/
int main() {
    char Emp_ID[10];
    int W_Hrs;
    double Pay_per_hr = 15000.00;
    double Salary;

    printf("Input the Employees ID: ");
    scanf("%s", &Emp_ID);

    printf("\nInput the working hrs: ");
    scanf("%d", &W_Hrs);

    Salary = Pay_per_hr * W_Hrs;
    printf("Employee's ID is: %s\nSalary = U$ %.2f\n", Emp_ID, Salary);

    return (0);
}