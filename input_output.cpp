#include <stdio.h>
#include <cmath>
#include <assert.h>

#include "other_functions_and_constants.h"
#include "input_output.h"

//-----------------------------------------------------------------------------

void Scan_Square_Data (double* a, double* b, double* c)
{
    const int Correct_Coef_Input = 3;

    printf ("#Enter square equation coefficients:\n");

    while (true)
    {
        int correct_input_num = scanf ("%lf %lf %lf", a, b, c);

        if (correct_input_num == Correct_Coef_Input) break;

        printf ("Try to enter coefficients again\n");

        Clear_Buf();
    }

    printf ("#coefficients accepted\n");
}

//-----------------------------------------------------------------------------

void Print_Square_Data (int num_solutions, double solutions[])
{
    assert (num_solutions == 0 || num_solutions == 1 || numsolutions == 2 || num_solutions == INFINITY_SOL);	

    switch (num_solutions)
    {
        case 0:
            printf ("#The equation has no solutions\n");
            break;

        case 1:
            printf ("#num_solutions = 1, x = %.2lf\n", solutions[0]);
            break;

        case 2:
            printf ("#num_solutions = 2, x1 = %.2lf, x2 = %.2lf\n", solutions[0], solutions[1]);
            break;

        case INFINITY_SOL:
            printf ("#The equation has infinity solutions\n");
            break;

     /* default:
            printf ("#Try to enter coefficients again\n");
            break;   */
    }
}

void Scan_Line_Data (double* b, double* c)
{
    const int Correct_Coef_Input = 2;

    printf ("#Enter line equation coefficients:\n");

    while (true)
    {
        int correct_input_num = scanf ("%lf %lf", b, c);

        if (correct_input_num == Correct_Coef_Input) break;

        printf ("Try to enter coefficients again\n");

        Clear_Buf();
    }

    printf ("#coefficients accepted\n");
}

//-----------------------------------------------------------------------------

void Print_Line_Data (int num_solutions, double* solution)
{
    assert (num_solutions == 0 || num_solutions == 1 || num_solutions == INFINITY_SOL);

    switch (num_solutions)
    {
        case 0:
            printf ("#The equation has no solutions\n");
            break;

        case 1:
            printf ("#num_solutions = 1, x = %.2lf\n", *solution);
            break;

        case INFINITY_SOL:
            printf ("#The equation has INFINITY_SOL solutions\n");
            break;

    /*  default:
            printf ("#Try to enter coefficients again\n");
            break; */
    }
}

