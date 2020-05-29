/*
** EPITECH PROJECT, 2020
** CI_TEST [WSL: fedoraremix]
** File description:
** fibo
*/

int fibonnaci(int n)
{
    if (n <= 0)
        return 0;
    if (n == 1)
        return 1;
    else
        return fibonnaci(n-1) + fibonnaci(n-2);
}