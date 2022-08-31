#include <stdio.h>
#include <string.h>
#include <cmath>
#include <assert.h>
#include <stdlib.h>

#include "Square_Line_Eq.h"
#include "SquareTesting.h"
#include "input_output.h"
#include "options.h"
#include "other_functions_and_constants.h"

//-----------------------------------------------------------------------------

int main (int argc, char* argv[])
{
    Use_Options (argc, argv);

    double solutions[2] = {NAN, NAN};
    double a = 0, b = 0, c = 0;

    Scan_Square_Data (&a, &b, &c);

    int num_solutions = Solve_Square_Eq (a, b, c, solutions);
    Print_Square_Data (num_solutions, solutions);
}

//-----------------------------------------------------------------------------


