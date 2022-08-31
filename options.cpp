#include <stdio.h>
#include <cmath>
#include <assert.h>
#include <string.h>

#include "Square_Line_Eq.h"
#include "SquareTesting.h"
#include "input_output.h"
#include "other_functions_and_constants.h"

//-----------------------------------------------------------------------------

void Use_Options (int argc, char* argv[])
{
    const char* options[3] = {"--test", "--help", "--LnSolve"};
    const int   max_option_name_size = 10;

    for (int i = 1; i < argc; i++)
    {
        if (!strncmp (argv[i], options[0], max_option_name_size))
        {
            FILE* file = fopen ("test.txt", "r");
            assert (file != NULL);

            int ok_tests = 0;
            ok_tests = File_Unit_Test (file);

            printf ("%d/8 tests have been done\n", ok_tests);
        }

        else if (!strcmp (argv[i], options[1], max_option_name_size))
        {
            printf ("You can use this options:\n"
                    "--test - start testing Solve_Square_Eq on file data\n"
                    "--LnSolve - start solving line equation with Solve_Line_Eq function\n");
        }

        else if (!strcmp (argv[i], options[2], max_option_name_size))
        {
            double solution = 0;
            double b = 0, c = 0;

            Scan_Line_Data (&b, &c);

            int num_solutions = Solve_Line_Eq (b, c, &solution);
            Print_Line_Data (num_solutions, &solution);
        }
    }
}

