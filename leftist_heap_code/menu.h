#pragma once

#ifndef __MENU_H__
#define __MENU_H__

#include <iostream>
#include "leftistHeap.h"
using namespace std;

leftistHeap* nLH(){
    leftistHeap* t = new leftistHeap;
    int op = -1,aux;
    while (op != 0)
    {
        cout << endl;
        
        cout << "-----NUEVO LEFTIST HEAP-----"<< endl;
        
        cout << "1) Insertar" << endl;
        cout << "0) Combinar" << endl;
        cin >> op;
        switch (op)
        {
        case 1:
            cout << "Ingrese un entero: ";
            cin >> aux; 
            t->insert(aux);
            cout << "----------------------" << endl;
            t->print(t->getRaiz(),0); 
            cout << "----------------------" << endl;
            break;
        default:
            break;
        }
    }
    return t;
}


class Menu{
private:
    int op,aux;
    leftistHeap* l;
    leftistHeap* t;
public:
    Menu();
    void PresentarMenu();

    ~Menu();
};

Menu::Menu(){
    op = -1;
    l = new leftistHeap;
}

void Menu::PresentarMenu(){
    while (op != 0)
    {
        cout << endl;
        cout << "-----LEFTIST HEAP-----"<< endl;
        
        
        cout << "1) Insertar" << endl;
        cout << "2) Obtener minimo" << endl;
        cout << "3) Borrar minimo" << endl;
        cout << "4) Merge" << endl;
        cout << "5) Imprimir" << endl;
        cout << "0) Salir" << endl;
        cin >> op;
        switch (op)
        {
        case 1:
            cout << "Ingrese un entero: ";
            cin >> aux; 
            l->insert(aux);
            cout << "----------------------" << endl;
            l->print(l->getRaiz(),0); 
            cout << "----------------------" << endl;
            break;
        case 2:    
            cout << "El menor elemento es: " << l->getMin() << endl;
            cout << "----------------------" << endl;
            l->print(l->getRaiz(),0); 
            cout << "----------------------" << endl;
            break;
        case 3:
            l->deleteMin();
            cout << "----------------------" << endl;
            l->print(l->getRaiz(),0); 
            cout << "----------------------" << endl;
            break;
        case 4:
            t = nLH();
            cout << "----------------------" << endl;
            l->print(l->getRaiz(),0); 
            cout << "----------------------" << endl;
            cout << "----------------------" << endl;
            t->print(t->getRaiz(),0); 
            cout << "----------------------" << endl;
            l->setRaiz(l->merge(t->getRaiz()));
            cout << "----------------------" << endl;
            l->print(l->getRaiz(),0); 
            cout << "----------------------" << endl;
            break;
        case 5:
            l->print(l->getRaiz(),0); 
            break;
        default:
            break;
        }
    }
    
    
}

Menu::~Menu(){
}
#endif