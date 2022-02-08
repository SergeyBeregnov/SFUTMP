#ifndef SHRUB_H
#define SHRUB_H

#include <fstream>
#include <string>

using namespace std;

//��������� "���������"
struct Shrub {
    //����� ��������
    enum Month {
        JENUARY,
        FEBRUARY,
        MARCH,
        APRIL,
        MAY,
        JUNE,
        JULY,
        AUGUST,
        SEPTEMBER,
        OCTOBER,
        NOVEMBER,
        DECEMBER
    };

    Month M; //����� ��������
};

//������� ����� ����������
void In_Shrub(Shrub& S, ifstream& ifst);

//������� ������ ����������
void Out_Shrub(string Name, Shrub& S, ofstream& ofst);

#endif // SHRUB_H