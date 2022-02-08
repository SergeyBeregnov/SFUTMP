#ifndef PLANT_H
#define PLANT_H

#include "Key.h"
#include "Tree.h"
#include "Shrub.h"

//��������� "��������"
struct Plant {
    Key K; //������������� ��������
    string Name; //�������� ��������

    //������ ��������
    union {
        Tree T;
        Shrub S;
    };
};

//������� ����� ��������
Plant* In_Plant(ifstream& ifst);

//������� ������ ��������
void Out_Plant(Plant* P, ofstream& ofst);

#endif // PLANT_H