#ifndef NODE_H
#define NODE_H

#include "Plant.h"

//��������� "���� ����������"
struct Node {
    Node* Next; //��������� �� ��������� ������� ���������� (����)
    Plant* Cont; //��������� �� ��������
};

#endif // NODE_H