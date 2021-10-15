#include "unint_tests.h"
#include <stdio.h>
#include <assert.h>

void run_all_tests() { 
    assert(OK == test_solve_linear_equation());
    assert(OK == test_solve_quadratic_equation());
} 
Errors test_solve_linear_equation(){
    double test_value1 = 5;
    double test_value2 = 10;
    double *test_pointer1 = NULL;
    double *test_pointer2 = NULL;
    exceptions returned_value = Linear_one_solution;

    if (returned_value != solveLineProblem(test_value1, test_value2,test_pointer1,test_pointer2)) {
        printf("F*ck this sh*t I'm out\n");
        return ligma;
    }
    test_value1 = 0;
    test_value2 = 10;
    *test_pointer1 = NULL;
    *test_pointer2 = NULL;
    returned_value = Linear_no_solution;
    if (returned_value != solveLineProblem(test_value1, test_value2,test_pointer1,test_pointer2)) {
        printf("F*ck this sh*t I'm out\n");
        return ligma;
    }
    test_value1 = 10;
    test_value2 = 0;
    *test_pointer1 = NULL;
    *test_pointer2 = NULL;
    returned_value = Linear_infinity_solution;
    if (returned_value != solveLineProblem(test_value1, test_value2,test_pointer1,test_pointer2)) {
        printf("F*ck this sh*t I'm out\n");
        return ligma;
    }

    return OK;
}

Errors test_solve_quadratic_equation() {
    double test_lvalue1 = 1;
    double test_lvalue2 = 17;
    double test_value2 = -18;
    double *test_pointer1 = NULL;
    double *test_pointer2 = NULL; 
    exceptions returned_value = Two_solutions;
    if (returned_value != solveSquareProblem(test_lvalue1, test_lvalue2, test_lvalue3,test_pointer1, test_pointer2)) {
        printf("F*ck this sh*t I'm out\n");
        return ligma;
    }
    test_lvalue1 = 1;
    test_lvalue2 = 4;
    test_lvalue2 = 4;
    returned_value = One_solution;
    *test_pointer1 = NULL;
    *test_pointer2 = NULL;
    if (returned_value != solveSquareProblem(test_lvalue1, test_lvalue2, test_lvalue3,test_pointer1, test_pointer2)) {
        printf("F*ck this sh*t I'm out\n");
        return ligma;
    }
    test_lvalue1 = 1;
    test_lvalue2 = 2;
    test_lvalue2 = 3;
    returned_value = No_solutions;
    *test_pointer1 = NULL;
    *test_pointer2 = NULL;
    if (returned_value != solveSquareProblem(test_lvalue1, test_lvalue2, test_lvalue3,test_pointer1, test_pointer2)) {
        printf("F*ck this sh*t I'm out\n");
        return ligma;
    }
    return OK;
}
