#include "quadratic_equation.h"

exceptions solveSquareProblem(double *x1, double *x2, double a, double b, double c){
    double D = b*b - 4 * a * c; 
    if(a == 0){
        return solveLineProblem(b,c,x1,x2);
    }
    else if (fabs(D) < EPS) {
        *x1 = -b / (2 * a);
        *x2 = *x1;
        return One_solution;
    }
    if(D>EPS){
        *x1 = (-b + sqrt(D)) / (2 * a);
        *x2 = (-b - sqrt(D)) / (2 * a);
        return Two_solutions;
    }
    else {
        return No_solutions;
    }
}

void print_ans(double x1, double x2, exceptions exception){
    if (exception == Two_solutions)
    {
        printf("x1 = %lf\nx2 = %lf\n",x1,x2);
    }
    else if (exception == One_solution)
    {
        printf("I solved the quadratic equation, where x1=x2\n");
        printf("x=%lf",x1);
    }
    else if (exception == Linear_equation){
        printf("I solved the linear equation\n");
        printf("x=%lf",x1);
    }
    else if (exception == Inappropriate_b)
    {
        printf("x belongs to the empty set\n");
    }
    else if (exception == Zero_values) {
        printf("x belongs to the R set \n");
    }
    else{
        printf("D < 0 ; x belongs to the empty set\n");
    }
 }

 void safe_scan(double* a, double* b, double* c) {
    printf("Hello, I am a quadratic solver. Please, enter 3 nombers:\n");
    assert(a != NULL);
    assert(b != NULL);
    assert(c != NULL);
    //safe scan
    while ((scanf("%lf%lf%lf", a, b, c)) != 3) {
        printf("Wrong value, try again:\n ");
        while (getchar() != '\n');
    }
}  

exceptions solveLineProblem(double b, double c, double* x1, double* x2) {
    if (b == 0 && c == 0)
    {
        return Zero_values;
    }
    if (b == 0)
    {
        return Inappropriate_b;
    }
    *x1 = -c / b;
    *x2 = *x1;
    return Linear_equation;
}