#ifndef SHRUB_H
#define SHRUB_H

#include "Plant.h"

//����� "���������"
class Shrub : public Plant {
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
public:
    void In_Data(ifstream& ifst); //������� ����� ����������
    void Out_Data(string Name, ofstream& ofst); //������� ������ ����������
    Shrub() {};
};

#endif // SHRUB_H