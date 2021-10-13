#pragma once
const double EPS = 1.0E-7;
typedef enum {
    One_solution, /**< enum value 1 */
    Two_solutions, /**< enum value 2 */
    No_solutions, /**< enum value 3 */
    Linear_equation, /**< enum value 4 */
    Inappropriate_b, /**< enum value 5 */
    Zero_values /**< enum value 6 */
} exceptions;
exceptions solveSquareProblem(double *x1, double *x2, double a, double b, double c);
void print_ans(double x1, double x2, exceptions exception);
void safe_scan(double* a, double* b, double* c);
exceptions solveLineProblem(double b, double c, double* x1, double* x2);
/** An enum type. 
     *  The documentation block cannot be put after the enum! 
 */

