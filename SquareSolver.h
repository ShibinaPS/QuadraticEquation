#ifndef SQUARE_SOLVER_H
#define SQUARE_SOLVER_H

//===========================================================================================================

#include <stdio.h>
#include <math.h>
#include <assert.h>

//===========================================================================================================

/**
 * @brief Notes the result of coefficient comparing.
 * 
 */

enum Comparison
{
    EQUAL   = 0,
    FIRST   = 1,
    SECOND  = 2,
};

//===========================================================================================================

/**
 * @brief Notes the number of roots.
 * 
 */

enum N_ROOTS
{
    NO_ROOTS            = 1,
    ONE_ROOT            = 2,
    TWO_ROOTS           = 3,
    ENDL_AMOUNT_ROOTS   = 4,
};

//===========================================================================================================

/**
 * @brief Takes three coefficients and two pointers and solves the quadratic equation
 * 
 * @param a the coefficient at x^2
 * @param b the coefficient at x
 * @param c the free coefficient
 * @param x1 the pointer to the first root of the quadratic equation
 * @param x2 the pointer to the second root of the quadratic equation
 * @return int 
 */

int SquareSolver (const double a, const double b, const double c, double* x1, double* x2);

//===========================================================================================================

/**
 * @brief Compares the differencee of two numbers with the constant EPS = 1e-6.
 * 
 * @param x the first element for the comparison
 * @param y the second element for the comparison
 * @return int 
 */

int Compare (const double x, const double y);

//===========================================================================================================

/**
 * @brief Takes two coefficients and one pointer and solves the linear equation.
 * 
 * @param b the coefficient at x
 * @param c the free coefficient
 * @param x1 the pointer to the root of the linear equation
 * @return int 
 */

int LinearSolver (const double b, const double c, double* x1);

//===========================================================================================================

#endif // SQUARE_SOLVER_H