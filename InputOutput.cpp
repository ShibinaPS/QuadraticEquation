#include "InputOutput.h"

//===========================================================================================================

void InputCoeff(double* a, double* b, double* c)
{
      printf("Hello, User! This program was created to solve quadratic equation!\n"
            "Please enter coefficient a, b, c of the common quadratic equation ax^2 + bx + c = 0 \
            with whitespaces:\n");

      while(scanf("%lf %lf %lf", a, b, c) != 3)
      {
            while (getchar() != '\n')
            {
                  ;
            }

            printf("Please be more attentive and enter coefficients correct. Try again.\n"
                   "Enter coefficient a, b, c of the common quadratic equation ax^2 + bx + c = 0 \
                    with whitespaces:\n");
      }
}

//===========================================================================================================

void Output(const double *x1, const double *x2, const int nRoots)
{
      switch (nRoots)
      {
            case NO_ROOTS:     printf("No roots\n");                                break;
            case ONE_ROOT:     printf("Root x = %lf\n", *x1);                       break;
            case TWO_ROOTS:    printf("Two roots: x1 = %lf, x2 = %lf\n", *x1, *x2); break;
            case ENDL_AMOUNT_ROOTS:  printf("Endless number of roots");             break;
            default: printf("main(): ERROR: nRoots = %d\n", nRoots);                break;
      }
}

//===========================================================================================================