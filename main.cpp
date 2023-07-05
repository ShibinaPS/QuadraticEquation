#include "SquareSolver.h"
#include "InputOutput.h"
//===========================================================================================================

int main()
{
        double a, b, c, x1, x2;
        a = b = c = x1 = x2 = NAN;

        InputCoeff(&a, &b, &c);

        int nRoots = SquareSolver(a, b, c, &x1, &x2);

        Output(&x1, &x2, nRoots);
        
}

//===========================================================================================================

/*
int Test()
{
    double x1 = 0, x2 = 0;

    int nRoots = SquareSolver(1, 0, -4, &x1, &x2);

    assert(nRoots == 2 && x1 == -2 && x2 == 2);

    if (!(nRoots == 2 && x1 != -2 && x2 != 2))
    {
        printf("FAILED(%lg %lg %lg), nRoots = %d, x1 = %lg, x2 = %lg\n");

        printf("Expected: nRoots = %d, x1 = %lg, x2 = %lg\n", nRoots, x1, x2, 2, -2, 2);
    }
}
*/
