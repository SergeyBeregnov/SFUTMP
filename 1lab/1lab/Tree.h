#ifndef TREE_H
#define TREE_H

#include <fstream>
#include <string>

using namespace std;

//��������� "������"
struct Tree {
    long int Age; //������� ������
};

//������� ����� ������
void In_Tree(Tree& T, ifstream& ifst);

//������� ������ ������
void Out_Tree(string Name, Tree& T, ofstream& ofst);

#endif // TREE_H