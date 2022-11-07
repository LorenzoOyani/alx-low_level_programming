#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the minimum number of coins to
 * make change for an amount of money
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
    int num, result , j;

    int coins [] = {25 ,10, 5, 2, 1};
    
    if (argc !=2)
    {
        printf("Error\n");
        return (1);
    }

    num = atoi(argv[1]);
    result = 0;

    for ( j =0;  j< coins[j]; j++)
    {
        if ( num >= coins[j])
        {
            result ++;
            num -= coins[j];
        }
    }

    printf("%d\n", result);
    return (1);
}