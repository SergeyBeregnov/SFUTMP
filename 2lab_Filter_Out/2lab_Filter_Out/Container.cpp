#include "Container.h"

void Init_Container(Container* Head) {
    Head->Cont = NULL;
    Head->Next = NULL;
    Head->Len = 0;
}

void In_Container(Container* Head, ifstream& ifst) {
    Container* Temp_Head = Head;
    int Len = 0;

    while (!ifst.eof()) {
        if ((Head->Cont = In_Plant(ifst))) {
            Head->Next = new Container();

            Head = Head->Next;
            Len++;
        }
    }

    while (Temp_Head->Cont != NULL) {
        Temp_Head->Len = Len;
        Temp_Head = Temp_Head->Next;
    }
}

void Out_Container(Container* Head, ofstream& ofst) {
    ofst << "Container contains " << Head->Len
        << " elements." << endl << endl;

    for (int i = 0; i < Head->Len; i++) {
        ofst << i << ": ";
        Out_Plant(Head->Cont, ofst);
        Head = Head->Next;
    }
}

void Clear_Container(Container* Head) {
    for (int i = 0; i < Head->Len; i++) {
        Head->Len = 0;
        free(Head->Cont);
        Head = Head->Next;
    }
}

void Out_Only_Tree(Container* Head, ofstream& ofst) {
    ofst << "Only Trees." << endl << endl;

    Container* Temp_Head = Head;

    for (int i = 0; i < Head->Len; i++) {
        //�������� ����, ��� �������� - ������
        if (Temp_Head->Cont->K == TREE) {
            ofst << i << ": ";
            Out_Plant(Temp_Head->Cont, ofst);
        }

        Temp_Head = Temp_Head->Next;
    }
}