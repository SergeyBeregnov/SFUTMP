#include "Tree.h"

void Tree::In_Data(ifstream& ifst) {
    ifst >> Age;
}

void Tree::Out_Data(string Name, ofstream& ofst) {
    ofst << "It's a tree with name: " << Name << endl;
    ofst << "Tree's age is " << Age << endl << endl;
}