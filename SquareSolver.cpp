#include "SquareSolver.h"
//===========================================================================================================

const double EPS = 1e-6;

//===========================================================================================================

int SquareSolver (const double a, const double b, const double c, double* x1, double* x2)
{
    if (Compare(a, 0) == EQUAL)
    {
        LinearSolver(b, c, x1);
    }

    else
    {
        double discr = b*b - 4*a*c;
        double discr_sqrt = sqrt(discr);

        if(Compare(discr, 0) == SECOND)
        {
            return NO_ROOTS;
        }

        else if (Compare(discr, 0) == EQUAL)
        {
            *x1 = -b / (2*a);

            if (Compare(b, 0) == EQUAL)
            {
                *x1 = 0;
            }

            return ONE_ROOT;
        }

        else
        {
            if (Compare(c, 0) == EQUAL)
            {
                *x1 = 0;
                *x2 = -b/c;

                if (Compare(b, 0) == EQUAL)
                {
                    *x1 = *x2 = 0;
                    return ONE_ROOT;
                }
            }
            else
            {
                *x1 = (-b + discr_sqrt) / (2*a);
                *x2 = (-b - discr_sqrt) / (2*a);

                if (Compare(*x1, *x2) == EQUAL)
                    return ONE_ROOT;
                
                else
                    return TWO_ROOTS;
            }      
        }

        return 0;
    }
}

//===========================================================================================================

int Compare(const double x, const double y)
{
    if (fabs(x - y) <= EPS)
        return EQUAL;
    
    else
        return ((x - y) > EPS) ? FIRST : SECOND;
    
}

//===========================================================================================================

int LinearSolver(double b, double c, double* x1)
{
    if (Compare(b, 0) == EQUAL)
    {
        return (Compare(c, 0) == EQUAL) ? ENDL_AMOUNT_ROOTS : NO_ROOTS;
    }
    else
    {
        *x1 = -c / b;

        if (Compare(c, 0) == EQUAL)
            *x1 = 0;

        return ONE_ROOT;
    }
}

//===========================================================================================================
