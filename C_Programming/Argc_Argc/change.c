#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to
 * make change for an amount of money
 *
 * Return: 0
 */

int main(int argc, char *argv[]){
        int coins = 0, cents;

        if (argc != 2){
                printf("Error\n");
                return (1);
        }
        if (atoi(argv[1]) < 0){
                printf("0\n");
                return (0);
        }

	cents = atoi(argv[1]);
        if (cents % 25 >= 0){
                coins += cents / 25;
                cents = cents % 25;
        }
        else if (cents % 10 >= 0){
                coins += cents / 10;
                cents = cents % 10;
        }
        else if (cents % 5 >= 0){
                coins += cents / 5;
                cents = cents % 5;
        }
        else if (cents % 2 >= 0){
                coins += cents / 2;
                cents = cents % 2;
        }
        else if (cents % 1 >= 0)
                coins += cents;
        printf("%d\n", coins);
        return (0);
}
