#ifndef TREE_H
#define TREE_H

#include "Plant.h"

//����� "������"
class Tree : public Plant {
    long int Age; //������� ������
public:
    void In_Data(ifstream& ifst); //������� ����� ������
    void Out_Data(string Name, ofstream& ofst); //������� ������ ������
    Tree() {};
};

#endif // TREE_H