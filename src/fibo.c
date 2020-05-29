/*
** EPITECH PROJECT, 2020
** CI_TEST [WSL: fedoraremix]
** File description:
** fibo
*/

int fibonnaci(int n)
{
    int first = 0;
    int second = 1;

    if (n <= 0)
        return 0;
    int tmp;
    while (n--) {
        tmp = first+second;
        first = second;
        second = tmp;
    }
    return first;
}