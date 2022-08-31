//{---------------------------------
//! @file input_output.h
//{---------------------------------

#ifndef INPUT_OUNPUT_H
#define INPUT_OUNPUT_H

//{----------------------------------------------------------------------------
//! \brief ������� �������� ������� ����������� ���������
//
//! \param [in] num_solutions ���������� ������ ���������
//! \param [in] solutions[]   ������ ������ ����������� ���������
//}----------------------------------------------------------------------------

void Print_Square_Data (int num_solutions, double solutions[]);

//{----------------------------------------------------------------------------
//! \brief ������� ��������� ������������ ����������� ��������, �������� � ����������
//
//! \param [in] a ��������� �� ����������� a
//! \param [in] b ��������� �� ����������� b
//! \param [in] c ��������� �� ����������� c
//}----------------------------------------------------------------------------

void Scan_Square_Data (double* a, double* b, double* c);

//{----------------------------------------------------------------------------
//! \brief ������� ��������� ������������ ��������� ���������, �������� � ����������

//! \param [in] b ��������� �� ����������� ��� x
//! \param [in] c ��������� ��������� ����
//}----------------------------------------------------------------------------

void Scan_Line_Data (double* b, double* c);

//{----------------------------------------------------------------------------
//! \brief ������� �������� ������� ��������� ���������

//! \param [in] num_solutions ���������� ������ ���������
//! \param [in] solution      ��������� �� ������� ���������
//}----------------------------------------------------------------------------

void Print_Line_Data (int num_solutions, double* solution);

#endif