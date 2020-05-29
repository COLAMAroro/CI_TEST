/*
** EPITECH PROJECT, 2020
** CI_TEST [WSL: fedoraremix]
** File description:
** tests
*/

#include "fibo.h"
#include <criterion/criterion.h>
#include <criterion/assert.h>

Test(fib, under_or_equal_0) {
    cr_assert_eq(fibonnaci(-5), 0);
    cr_assert_eq(fibonnaci(0), 0);
}

Test(fib, equal_1) {
    cr_assert_eq(fibonnaci(1), 1);
}

Test(fib, other) {
    cr_assert_eq(fibonnaci(10), 55);
    cr_assert_eq(fibonnaci(19), 4181);
}