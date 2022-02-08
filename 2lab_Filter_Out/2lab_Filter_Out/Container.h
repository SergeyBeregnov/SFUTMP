#ifndef CONTAINER_H
#define CONTAINER_H

#include "Plant.h"

//��������� "���������"
struct Container {
    Container* Next; //��������� �� ��������� ������� ����������
    Plant* Cont; //��������� �� ��������
    int Len; //���������� ����������
};

//������� ������������� ����������
void Init_Container(Container* Head);

//������� ����� ��������� � ���������
void In_Container(Container* Head, ifstream& ifst);

//������� ������ ����������
void Out_Container(Container* Head, ofstream& ofst);

//������� ������� ����������
void Clear_Container(Container* Head);

//������� ������ ������ ��������
void Out_Only_Tree(Container* Head, ofstream& ofst);

#endif // HEADER_H