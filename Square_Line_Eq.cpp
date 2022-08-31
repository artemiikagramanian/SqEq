#include <stdio.h>
#include <cmath>
#include <assert.h>

#include "Square_Line_Eq.h"
#include "other_functions_and_constants.h"

//-----------------------------------------------------------------------------

int Solve_Line_Eq (double b, double c, double* solution)
{
    assert (std::isfinite (b));
    assert (std::isfinite (c));

    assert (solution != NULL);

    if (!Compare_Double (b, 0))
    {
        *solution = -c / b;

        return 1;
    }

    return Compare_Double (c, 0) ? INFINITY_SOL : 0;
}

int Solve_Square_Eq (double a, double b, double c, double solutions[])
{
    assert (std::isfinite (a));
    assert (std::isfinite (b));
    assert (std::isfinite (c));

    assert (!std::isfinite (solutions[0]));
    assert (!std::isfinite (solutions[1]));
    assert (solutions != NULL);

    if (Compare_Double (a, 0))
    {
        return Solve_Line_Eq (b, c, solutions);
    }

    else
    {
        double discriminant = b*b - 4*a*c;

        if (discriminant > 0)
        {
            double sqrt_discriminant = sqrt (discriminant);

            solutions[0] = (-b - sqrt_discriminant) / (2*a);
            solutions[1] = (-b + sqrt_discriminant) / (2*a);

            return 2;
        }

        else if (Compare_Double (discriminant, 0))
        {
            solutions[0] = -b / (2*a);
            solutions[1] = NAN;
            return 1;
        }

        return 0;
    }
}



