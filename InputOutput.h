#ifndef INPUT_OUTPUT_H
#define INPUT_OUTPUT_H

//===========================================================================================================

#include "SquareSolver.h"

//===========================================================================================================

/**
 * @brief Works with user, asks him to enter coefficients for the quadratic equation and controls
 *        the correctness of user`s answer.
 * 
 * @param a the coefficient at x^2
 * @param b the coefficient at x
 * @param c the free coefficient
 */

void InputCoeff(double* a, double* b, double* c);

//===========================================================================================================

/**  
 * @brief Using the return values of SquareSolver prints the solution to the terminal.
 * 
 * @param x1 the pointer to the first root of the quadratic equation
 * @param x2 the pointer to the second root of the quadratic equation
 * @param nRoots constant value - the result of working SquareSolver
 */

void Output(const double *x1, const double *x2, const int nRoots);

//===========================================================================================================

#endif // INPUT_OUTPUT_H