#include <stdio.h>
#include <cmath>
#include <assert.h>
#include <string.h>
#include <stdlib.h>

#include "Square_Line_Eq.h"
#include "SquareTesting.h"
#include "other_functions_and_constants.h"

//-----------------------------------------------------------------------------

int Unit_Test (double a,               double b,       double c,
               int true_num_solutions, double true_x1, double true_x2, int test_number)
{
    double solutions[2] = {NAN, NAN};

    int sq_num_solutions = Solve_Square_Eq (a, b, c, solutions);

    if (!((sq_num_solutions == true_num_solutions) &&
        Compare_Double (solutions[0], true_x1)     &&
        Compare_Double (solutions[1], true_x2)))
    {

            printf ("#Test %d failed: number of solutions is %d, solutions: %.2lf, %.2lf\n"
                    "TRUE: number of solutions is %d, solutions: %.2lf, %.2lf\n",
                    test_number, sq_num_solutions, solutions[0], solutions[1],
                    true_num_solutions, true_x1, true_x2);

            return 0;
    }

    return 1;
}


//-----------------------------------------------------------------------------

int File_Unit_Test (FILE* file)
{
    const int max_str_size  = 100;
    const int square_data   = 3;
    const int correct_input = 6;

    int ok_tests = 0;

    double a = 0;
    double b = 0;
    double c = 0;

    int true_num_solutions = 0;
    int test_number        = 0;

    double true_x1 = 0;
    double true_x2 = 0;

    int count_str = 0;

    char str[square_data][max_str_size] = {};

    while(fscanf (file, "%lf %lf %lf %8s %8s %8s",
                  &a,       &b,      &c,
                  str[0],   str[1],  str[2]) == correct_input)
    {
        true_num_solutions = (strcmp (str[0], "Infinity")) ? atof (str[0]) : INFINITY_SOL;
        true_x1            = (strcmp (str[1], "NAN"     )) ? atof (str[1]) : NAN;
        true_x2            = (strcmp (str[2], "NAN"     )) ? atof (str[2]) : NAN;

        count_str++;

        ok_tests += Unit_Test (a, b, c, true_num_solutions, true_x1, true_x2, count_str);
    }

    return ok_tests;
}
