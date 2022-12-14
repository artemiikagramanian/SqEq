//{------------------------------
//! @file SquareTesting.h
//}-----------------------------

#ifndef SQUARETESTING_H
#define SQUARETESTING_H

//{----------------------------------------------------------------------------
//! \brief  ??????? ????????? ?????? ??????? Solve_Square_Eq, ??????? ?????????
//! \brief  ??? ??????? Unit_Test ? ??????? ??????????? ? ??????? ???????????
//! \brief  ???????????? ??????
//
//! \return ?????????? ?????????? ??????
//}----------------------------------------------------------------------------

int Unit_Test (double a, double b, double c, int true_num_solutions,
               double true_x1, double true_x2, int test_number);

//{-----------------------------------------------------------------------------------
//! \brief ??????? ?????????? ??? ?????? ??????? Solve_Square_Eq ?? ?????? ?? ?????
//! \brief file

//! \param [in] file ????????? ?? ????, ?? ???????? ???????? ??????????

//! \return ?????????? ?????????? ??????. ????? ??????? ??????????? ???????????? ??????
//}-----------------------------------------------------------------------------------

int File_Unit_Test (FILE* file);

#endif
