#pragma once

#ifndef __MENU_H__
#define __MENU_H__

#include <iostream>
#include "skewHeap.h"
using namespace std;


skewHeap* nSH(){
    skewHeap* t = new skewHeap;
    int op = -1,aux;
    while (op != 0)
    {
        cout << endl;
        
        cout << "-----NUEVO SKEW HEAP-----"<< endl;
        
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
    skewHeap* s;
    skewHeap* k;
public:
    Menu();
    void PresentarMenu();

    ~Menu();
};

Menu::Menu(){
    op = -1;
    s = new skewHeap;
}

void Menu::PresentarMenu(){
    while (op != 0)
    {
        cout << endl;
        cout << "-----SKEW HEAP-----"<< endl;
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
            s->insert(aux);
            cout << "----------------------" << endl;
            s->print(s->getRaiz(),0); 
            cout << "----------------------" << endl;
            break;
        case 2:    
            cout << "El menor elemento es: " << s->getMin() << endl;
            cout << "----------------------" << endl;
            s->print(s->getRaiz(),0); 
            cout << "----------------------" << endl;
            break;
        case 3:
            s->deleteMin();
            cout << "----------------------" << endl;
            s->print(s->getRaiz(),0); 
            cout << "----------------------" << endl;
            break;
        case 4:
            k = nSH();
            cout << "----------------------" << endl;
            s->print(s->getRaiz(),0); 
            cout << "----------------------" << endl;
            cout << "----------------------" << endl;
            k->print(k->getRaiz(),0); 
            cout << "----------------------" << endl;
            s->setRaiz(s->merge(k->getRaiz()));
            cout << "----------------------" << endl;
            s->print(s->getRaiz(),0); 
            cout << "----------------------" << endl;
            break;
        case 5:
            s->print(s->getRaiz(),0); 
            break;
        default:
            break;
        }        
    }
    
    
}

Menu::~Menu()
{
}
#endif
