#include <stdio.h>
#include <cmath>

#include "other_functions_and_constants.h"
#include "Square_Line_Eq.h"
#include "input_output.h"

//-----------------------------------------------------------------------------

bool Compare_Double (double a, double b)
{
    if (!std::isfinite (a) && !std::isfinite (b)) return true; // expected a = NAN, b = NAN

    return (fabs (a - b) < ACCURACY);
}

//-----------------------------------------------------------------------------

void Clear_Buf()
{
    while (getchar() != '\n') ;
}
