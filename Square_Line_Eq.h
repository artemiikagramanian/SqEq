//{---------------------------------
//! @file Square_Line_Eq.h
//{---------------------------------

#ifndef SQUARE_H
#define SQUARE_H

//{----------------------------------------------------------------------------
//! \brief ������� ������ ���������� ��������� � ����������� �� ����� ��������������
//
//! \param [in] a             ����������� ��� x � ��������
//! \param [in] b             ����������� ��� x
//! \param [in] c             ��������� ����
//! \param [in] solutions[]   ������ ������ ����������� ���������
//
//! \warning ������� �������� ������ ������, ������� � ��� �������� ������� ���������
//! \warning ������� ��������� �� ���� ������ �� ���� NAN ���������
//}----------------------------------------------------------------------------

int Solve_Square_Eq (double a, double b, double c, double solutions[]);

//{----------------------------------------------------------------------------
//! \brief ������� ������ �������� ��������� � ����������� �� ����� ��������������
//
//! \param [in] b        ����������� ��������� ��� x
//! \param [in] c        ��������� ����
//! \param [in] solution ��������� �� ����������, � ������� ���������� ������� �-�
//
//! \return ���������� ������ ���������
//}----------------------------------------------------------------------------

int Solve_Line_Eq (double b, double c, double* solution);

#endif