/*! \file quadratic_equation.c
    \brief body of functions 
    
    this file contains the body of fubctions
*/
#include "quadratic_equation.h"
#include <math.h>
#include <stdio.h>
#include <assert.h>
/*! \fn exceptions solveSquareProblem(double *x1, double *x2, double a, double b, double c)
    \brief Soleves quadratic equation 
    \param x1 the first double pointer
    \param x2 the first double pointer
    \param a the first doublt ratio
    \param b the second doublt ratio
    \param c the fird doublt ratio
*/
exceptions solveSquareProblem(double *x1, double *x2, double a, double b, double c){ 
    if(fabs(a)>EPS){
        double D = b*b - 4 * a * c;
        if(D>EPS){
            *x1 = (-b + sqrt(D)) / (2 * a);
            *x2 = (-b - sqrt(D)) / (2 * a);
            return Two_solutions;
        }
        else if (fabs(D) < EPS) {
            *x1 = -b / (2 * a);
            *x2 = *x1;
            return One_solution;
        }
        else {
            return No_solutions;
        }
    }
    else{
        return solveLineProblem(b,c,x1,x2);
    }
}
/*! \fn void print_ans(double x1, double x2, exceptions exception)
    \brief prints solutions of quadratic and linear equations 
    \param x1 the first double param
    \param x2 the first double param
    \param exception third exceptions type param 
*/
void print_ans(double x1, double x2, exceptions exception){
    switch (exception)
    {
        case Two_solutions:
            printf("I solved the quadratic equation\n");
            printf("x1 = %lf\nx2 = %lf\n",x1,x2);
            break;
        case One_solution: 
            printf("I solved the quadratic equation, where x1=x2\n");
            printf("x=%lf",x1);
            break;
        case Linear_one_solution:
            printf("I solved the linear equation\n");
            printf("x=%lf",x1);
            break; 
        case Linear_no_solution:
            printf("x belongs to the empty set\n");
            break;
        case Linear_infinity_solution:
            printf("x belongs to the R set\n");
            break;
        case No_solutions:
            printf("D < 0 ; x belongs to the empty set\n");
            break;
        }
    }
/*! \fn void safe_scan(double* a, double* b, double* c)
    \brief safly scans the values from console
    \param a the first double pointer
    \param b the second double pointer
    \param c the third double pointer 
*/
 void safe_scan(double* a, double* b, double* c) {
    printf("Hello, I am a quadratic solver. Please, enter 3 numbers:\n");
    assert(a != NULL);
    assert(b != NULL);
    assert(c != NULL);
    //safe scan
    while ((scanf("%lf%lf%lf", a, b, c)) != 3) {
        printf("Wrong value, try again:\n ");
        while (getchar() != '\n');
    }
}  
/*! \fn exceptions solveLineProblem(double b, double c, double* x1, double* x2)
    \brief Soleves linear equation 
    \param b a double coefficient before x.
    \param c  a double free coefficient.
    \param x1 the first double pointer.
    \param x2 the second double pointer.
*/ 
exceptions solveLineProblem(double b, double c, double* x1, double* x2) {
    assert(x1 != NULL);
    assert(x2 != NULL);
    if (fabs(b) > EPS)
    {
        if (fabs(c) > EPS)
        {
            *x1 = -c / b;
            *x2 = *x1;
            return Linear_one_solution;
        }
        else{
            return Linear_infinity_solution;
        }
    }
    else{
        if (fabs(c) > EPS)
        {
            return Linear_no_solution;
        }
        else{
            return Linear_infinity_solution;
        }
    }
}