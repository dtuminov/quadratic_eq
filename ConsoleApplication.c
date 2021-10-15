#include <stdio.h>
#include <math.h>
#include <assert.h>
#include "quadratic_equation.c"
/*! \file ConsoleApplication.c
    \brief functions includes main function

*/
/*! \fn int main()
    
*/

int main()
{
    double a = 0, b = 0, c = 0, x1 = 0, x2 = 0; exceptions exception; 
    safe_scan(&a, &b, &c);
    exception = solveSquareProblem(&x1,&x2,a,b,c);
    print_ans(x1,x2,exception);    
    
    return 0;
}
//1)doxygen
//2)unit-tests     
