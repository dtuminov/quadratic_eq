#pragma once
/*! \file quadratic_equation.h
    \brief functions prototypes 
    
    this file contains the functions prototypes 
*/
const double EPS = 1.0E-7;
/** enum of the function's return values*/
typedef enum {
    One_solution, /**< enum value 1 */
    Two_solutions, /**< enum value 2 */
    No_solutions, /**< enum value 3 */
    Linear_infinity_solution, /**< enum value 4 */
    Linear_one_solution, /**< enum value 5 */
    Linear_no_solution /**< enum value 6 */
} exceptions;
exceptions solveSquareProblem(double *x1, double *x2, double a, double b, double c);
void print_ans(double x1, double x2, exceptions exception);
void safe_scan(double* a, double* b, double* c);
exceptions solveLineProblem(double b, double c, double* x1, double* x2);
/** An enum type. 
     *  The documentation block cannot be put after the enum! 
 */

