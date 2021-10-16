#include "unint_tests.h"
#include <stdio.h>
#include <assert.h>

void run_all_tests() { 
    assert(OK == test_solve_linear_equation());
    assert(OK == test_solve_quadratic_equation());
} 
Errors test_solve_linear_equation(){
    // test 1
    double test_value1 = 5;
    double test_value2 = 10;
    double test = -2;
    double *test_pointer1 = &test;
    double *test_pointer2 = test_pointer1;
    exceptions returned = One_solution;
    solveLineProblem(test_value1, test_value2, test_pointer1, test_pointer2);
    if (*test_pointer1 != test  || returned != solveLineProblem(test_value1, test_value2, test_pointer1, test_pointer2)) {
        printf("F*ck this sh*t I'm out\n");
        return ligma;
    }
    //test2
    test_value1 = 0;
    test_value2 = 10;
    test = 0;
    test_pointer1 = &test;
    test_pointer2 = test_pointer1;
    returned = Linear_no_solution;
    if (returned != solveLineProblem(test_value1, test_value2, test_pointer1, test_pointer2)) {
        printf("F*ck this sh*t I'm out\n");
        return ligma;
    }
    //test 3
    test_value1 = 10;
    test_value2 = 0;
    test = 0;
    test_pointer1 = &test;
    test_pointer2 = test_pointer1;
    returned = Linear_infinity_solution;
    if (*test_pointer1 != test  || returned != solveLineProblem(test_value1, test_value2, test_pointer1, test_pointer2)) {
        printf("F*ck this sh*t I'm out\n");
        return ligma;
    }
    return OK;
}
Errors test_solve_quadratic_equation(){
    double test_value1 = 1;
    double test_value2 = 17;
    double test_value3 = -18;
    double test1 = 1;
    double test2 = -18;
    double *test_pointer1 = &test1;
    double *test_pointer2 = &test2;
    exceptions returned = Two_solutions;
    //test1
    if ((*test_pointer1 != test1 || *test_pointer1 != test2) || (*test_pointer2 != test1 || *test_pointer2 != test2)) {
        printf("F*ck this sh*t I'm out\n");
        return ligma;
    }
    // test2 
    test_value1 = 1;
    test_value2 = 4;
    test_value3 = 4;
    test1 = -2;
    *test_pointer1 = test1;
    test_pointer2 = test_pointer2;
    if (*test_pointer1 != test1 || *test_pointer2 != test1) {
        printf("F*ck this sh*t I'm out\n");
        return ligma;
    }
    //test 3
    test_value1 = 1;
    test_value2 = 2;
    test_value3 = 3;
    *test_pointer1 = test1;
    test_pointer2 = test_pointer2;
    returned = No_solutions ;
    if (returned != solveSquareProblem( test_pointer1, test_pointer2,test_value1, test_value2, test_value3)) {
        printf("F*ck this sh*t I'm out\n");
        return ligma;
    }
    return OK;
}