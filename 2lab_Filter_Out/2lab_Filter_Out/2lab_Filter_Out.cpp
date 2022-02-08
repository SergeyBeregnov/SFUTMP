﻿#include <iostream>

#include "Container.h"

int main(int argc, char* argv[]) {
    if (argc != 3) {
        cout << "incorrect command line! "
            "Waited: command in_file out_file"
            << endl;
        exit(1);
    }

    ifstream ifst(argv[1]);
    ofstream ofst(argv[2]);

    cout << "Start" << endl;

    Container* Head = new Container(); //Создание нового контейнера

    Init_Container(Head); //Инициализация контейнера

    In_Container(Head, ifst); //Ввод элементов в контейнер

    ofst << "Filled container. " << endl;

    Out_Container(Head, ofst); //Вывод контейнера

    Out_Only_Tree(Head, ofst); //Вывод только деревьев

    Clear_Container(Head); //Очистка контейнера

    ofst << "Empty container. " << endl;

    Out_Container(Head, ofst); //Вывод контейнера

    cout << "Stop" << endl;
    system("pause");
    return 0;
}
