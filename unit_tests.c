#include <stdio.h>
#include <math.h>
#include <assert.h>
#include "quadratic_equation.c"
// test of the linear equation solver unction
void testSolveLineProblem(){
    double x1 = 0, x2 = 0;
    assert(solveLineProblem(0,0,&x1,&x2) == Inappropriate_b);
    x1 = 0, x2 = 0;
    assert(solveLineProblem(0,5,&x1,&x2) == Linear_equation);
    x1 = -1, x2 = -1;
    assert(solveLineProblem(5,5,&x1,&x2) == Linear_equation);
}
// test of print unction 
/*void testPrint_ans(){
    assert(print_ans(1,2, Two_solutions) == "x1 = 1\nx2 = 2");
    assert(print_ans(1,1, One_solution) == "I solved the quadratic equation, where x1=x2\nx=1");
    assert(print_ans(1,1, Linear_equation) == "I solved the linear equation\nx=1");
    assert(print_ans(1,1, Inappropriate_c) == "coefficient c = 0, cannot be divided by zero\n";
    assert(print_ans(0,0, No_solutions) == "D < 0 ; x belongs to the empty set\n")
}*/
// test o quadratic equation solver function
void testSolveSquareProblem(){
}