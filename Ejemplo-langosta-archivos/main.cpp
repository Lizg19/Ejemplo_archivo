#include <iostream>
#include <fstream>
using namespace std;

int personas( );
void costo (int platos);
int main()
{
    int  numerop;
    numerop= personas();
    costo(numerop);


    return 0;
}

int personas( ){
    int nplatillos;
    cout << "BIENVENIDOS A 'La langosta ahumada' "<< endl;
    do{
    cout << "Para cuantas personas es el banquete? " ;
    cin >> nplatillos;
    if (nplatillos <0){
        cout << "Ingrese un valor valido" << endl;
    }
    } while (nplatillos <0);

    return nplatillos;
}

void costo (int platos){
    ofstream ar_banquete;
    ar_banquete.open("LangostaAhumada.txt", ios::app);
    ar_banquete << "\n*La langosta ahumada*\n";

    if (platos >0 &&platos<200){
        cout << "El costo por persona es de $95 " << endl;
        cout << "Presupuesto para " << platos <<" personas: $" << platos *95 << endl;
        ar_banquete << "El costo por persona es de $95 \n";
        ar_banquete << "Presupuesto para " << platos <<" personas: $" << platos *95 << "\n";
    }
    else {
        if (platos >200 && platos <=300){
             cout << "El costo por persona es de $85 " << endl;
             cout << "Presupuesto para " << platos <<" personas: $" << platos *85 << endl;
             ar_banquete << "El costo por persona es de $85 \n";
             ar_banquete << "Presupuesto para " << platos <<" personas: $" << platos *85 << "\n";

        } else {

        cout << "El costo por persona es de $75 " << endl;
        cout << "Presupuesto para " << platos <<" personas: $" << platos *75 << endl;
        ar_banquete << "El costo por persona es de $75 \n";
        ar_banquete << "Presupuesto para " << platos <<" personas: $" << platos *75 << "\n";

        }
    }
ar_banquete.close();
}
