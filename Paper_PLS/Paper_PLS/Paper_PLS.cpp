// Paper_PLS.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <fstream>
#include "INE.h"
#include "Pasaporte.h"
#include <windows.h>
#include <MMSystem.h>
#pragma comment(lib,"Winmm.lib")

using namespace std; 

ifstream Lec;
string nom, ape, edad;
char sexo, terror;

void ObtenerJorge(ifstream &Lec) {
    system("cls");
    Lec.open("C:/Users/ivanc/source/repos/Paper_PLS/Jorge.txt", ios::in);
    bool leido = false;
    while (!Lec.eof() && !leido) {
        Lec >> nom;
        Lec >> ape;
        Lec >> edad;
        Lec >> sexo;
        Lec >> terror;
        leido = true;
    }
    Lec.close();

    if (!leido) {
        system("pause");
    }

}

void ObtenerLeo(ifstream& Lec) {
    Lec.open("C:/Users/ivanc/source/repos/Paper_PLS/Leo.txt", ios::in);
    bool leido = false;
    while (!Lec.eof() && !leido) {
        Lec >> nom;
        Lec >> ape;
        Lec >> edad;
        Lec >> sexo;
        Lec >> terror;
        leido = true;
    }
    Lec.close();

    if (!leido) {
        system("pause");
    }

}

void ObtenerSam(ifstream& Lec) {
    Lec.open("C:/Users/ivanc/source/repos/Paper_PLS/Sam.txt", ios::in);
    bool leido = false;
    while (!Lec.eof() && !leido) {
        Lec >> nom;
        Lec >> ape;
        Lec >> edad;
        Lec >> sexo;
        Lec >> terror;
        leido = true;
    }
    Lec.close();

    if (!leido) {
        system("pause");
    }

}

void ObtenerMauricio(ifstream& Lec) {
    system("cls");
    Lec.open("C:/Users/ivanc/source/repos/Paper_PLS/Mauricio.txt", ios::in);
    bool leido = false;
    while (!Lec.eof() && !leido) {
        Lec >> nom;
        Lec >> ape;
        Lec >> edad;
        Lec >> sexo;
        Lec >> terror;
        leido = true;
    }
    Lec.close();

    if (!leido) {
        system("pause");
    }

}

void ObtenerChristian(ifstream& Lec) {
    system("cls");
    Lec.open("C:/Users/ivanc/source/repos/Paper_PLS/Christian.txt", ios::in);
    bool leido = false;
    while (!Lec.eof() && !leido) {
        Lec >> nom;
        Lec >> ape;
        Lec >> edad;
        Lec >> sexo;
        Lec >> terror;
        leido = true;
    }
    Lec.close();

    if (!leido) {
        system("pause");
    }

}

void ObtenerJesus(ifstream& Lec) {
    system("cls");
    Lec.open("C:/Users/ivanc/source/repos/Paper_PLS/Jesus.txt", ios::in);
    bool leido = false;
    while (!Lec.eof() && !leido) {
        Lec >> nom;
        Lec >> ape;
        Lec >> edad;
        Lec >> sexo;
        Lec >> terror;
        leido = true;
    }
    Lec.close();

    if (!leido) {
        system("pause");
    }

}

int main()
{
    int pas, error, punt=0;
    cout << "Bryan Ivan Noe Ramirez Vivanco - 22110100 - 2O \n Comencemos a jugar.\n\n -----------PAPERS PLEASE-----------\n\n";
    system("pause");
    system("cls");
    system("color 0B");
    cout <<"\n-----------DIA 1----------- \nDurante el primer dia, no habra restricciones sobre el acceso a nuestro pais\n solo hay que verificar que los datos de los documentos de los pasajeros coincidan.\nMucha suete en tu primer dia!!\n\n";
    system("pause");
    system("cls");
    system("color 06");
    ObtenerJorge(Lec);
    Persona* Jorge;
    Jorge = new INE(nom, ape, edad, sexo, terror, "JORAMHCJ0217", "12/02/01", "Rafael Castro 3800, GDL");
    Jorge->Mostrar();
    Jorge = new Pasaporte(nom, ape, edad, sexo, terror, "Mexicana", "12/02/01", "4658", "Rafael Castro 3080, GDL");
    Jorge->Mostrar();
    delete Jorge; 
    system("pause");
    system("color 07");
    cout << "\n";
    cout << "\n¿Quieres dejarlo pasar?\n0.Si\n1.No\n\nIngrese opcion:\n";
    cin >> pas;
    if (pas > 0) {
        cout << "\n¿En donde esta la incongruencia?\n0.Nombres\n1.Apellidos\n2.Edad\n3.Sexo\n4.Domicilio\n5.Nacionalidad\n\nIngrese opcion:\n";
        cin >> error;
        if (error == 0 || error == 1 || error == 2 || error == 3 || error == 5) {
            punt = punt -100;
            PlaySound(L"C:\\Users\\ivanc\\source\\repos\\Paper_PLS\\Error.wav", NULL, SND_FILENAME | SND_SYNC);
        }
        else {
            punt = punt + 150;
            PlaySound(L"C:\\Users\\ivanc\\source\\repos\\Paper_PLS\\Aplauso.wav", NULL, SND_FILENAME | SND_SYNC);
        }
    }
    else {
        punt = punt -200;
        PlaySound(L"C:\\Users\\ivanc\\source\\repos\\Paper_PLS\\Error.wav", NULL, SND_FILENAME | SND_SYNC);
    }
    system("cls");
    system("color 06");
    cout << "\nSiguiente persona:\n";
    cout << "\nPuntaje: " << punt << "\n\n";
    ObtenerLeo(Lec);
    Persona* Leo;
    Leo = new INE(nom, ape, edad, sexo, terror, "LEFAMHCJ0220", "10/07/02", "Legalidad 264, ZAP");
    Leo->Mostrar();
    Leo = new Pasaporte(nom, ape, edad, sexo, terror, "Canadiense", "10/07/02", "2222", "Legalidad 264, ZAP");
    Leo->Mostrar();
    delete Leo;
    cout << "\n";
    system("pause");
    system("color 07");
    cout << "\n";
    cout << "\n¿Quieres dejarlo pasar?\n0.Si\n1.No\n\nIngrese opcion:\n";
    cin >> pas;
    if (pas > 0) {
        cout << "\n¿En donde esta la incongruencia?\n0.Nombres\n1.Apellidos\n2.Edad\n3.Sexo\n4.Domicilio\n5.Nacionalidad\n\nIngrese opcion:\n";
        cin >> error;
        if (error == 0 || error == 1 || error == 2 || error == 3 ) {
            punt = punt -100;
            PlaySound(L"C:\\Users\\ivanc\\source\\repos\\Paper_PLS\\Error.wav", NULL, SND_FILENAME | SND_SYNC);
        }
        else {
            punt = punt + 150;
            PlaySound(L"C:\\Users\\ivanc\\source\\repos\\Paper_PLS\\Aplauso.wav", NULL, SND_FILENAME | SND_SYNC);
        }
    }
    else {
        punt = punt -200;
        PlaySound(L"C:\\Users\\ivanc\\source\\repos\\Paper_PLS\\Error.wav", NULL, SND_FILENAME | SND_SYNC);
    }
    system("cls");
    system("color 06");
    cout << "Puntaje: " << punt << "\n\n";
    ObtenerSam(Lec);
    Persona* Sam;
    Sam = new INE(nom, ape, edad, sexo, terror, "SAMTMHJC1002", "10/10/02", "Legalidad 264, GDL");
    Sam->Mostrar();
    Sam = new Pasaporte(nom, ape, edad, sexo, terror, "Mexicana", "10/10/02", "24222", "Legalidad 264, ZAP");
    Sam ->Mostrar();
    delete Sam;
    cout << "\n";
    system("pause");
    system("color 07");
    cout << "\n";
    cout << "\n¿Quieres dejarlo pasar?\n0.Si\n1.No\n\nIngrese opcion:\n";
    cin >> pas;
    if (pas > 0) {
        cout << "\n¿En donde esta la incongruencia?\n0.Nombres\n1.Apellidos\n2.Edad\n3.Sexo\n4.Domicilio\n5.Nacionalidad\n\nIngrese opcion:\n";
        cin >> error;
        if (error == 0 || error == 1 || error == 2 || error == 3|| error == 4 || error == 5) {
            punt = punt - 200;
            PlaySound(L"C:\\Users\\ivanc\\source\\repos\\Paper_PLS\\Error.wav", NULL, SND_FILENAME | SND_SYNC);
        }

    }
    else {
        punt = punt + 200;
        PlaySound(L"C:\\Users\\ivanc\\source\\repos\\Paper_PLS\\Aplauso.wav", NULL, SND_FILENAME | SND_SYNC);
    }
    system("cls");
    system("color 0B");
    cout << "\nPuntaje acumulado: " << punt << "\n";
    cout << "\n-----------DIA 2----------- \nParece ser que sobrevisite a tu primer dia, durante este nuevo dia habra restricciones\n sobre el acceso a nuestro pais NO SE PERMITIRA EL ACCESO a personas CON TERMINACION '04' en su NUMERO DE PASAPORTE y\nTAMPOCO SE PERMITIRA EL PASO a personas con nacionalidad 'Canadiense' .\nMucha suete en tu segundo dia!!\n\n";
    system("pause");
    system("cls");
    system("color 06");
    ObtenerMauricio(Lec);
    Persona* Mauricio;
    cout << "Puntaje: " << punt << "\n\n";
    Mauricio = new INE(nom, ape, edad, sexo, terror, "MAUMHJC1586", "15/05/22", "Maple Avenue, YTO");
    Mauricio->Mostrar();
    Mauricio = new Pasaporte(nom, ape, edad, sexo, terror, "Canadiense", "25/03/23", "24222", "Maple Aveue, YTO");
    Mauricio->Mostrar();
    delete Mauricio;
    cout << "\n";
    system("pause");
    system("color 07");
    cout << "\n";
    cout << "\n¿Quieres dejarlo pasar?\n0.Si\n1.No\n\nIngrese opcion:\n";
    cin >> pas;
    if (pas > 0) {
        cout << "\n¿En donde esta la incongruencia?\n0.Nombres\n1.Apellidos\n2.Edad\n3.Sexo\n4.Domicilio\n5.Nacionalidad\n6.Numero de Pasaporte\n\nIngrese opcion:\n";
        cin >> error;
        if (error !=5) {
            punt = punt - 200;
            PlaySound(L"C:\\Users\\ivanc\\source\\repos\\Paper_PLS\\Error.wav", NULL, SND_FILENAME | SND_SYNC);
        }
        else {
            punt = punt + 200;
            PlaySound(L"C:\\Users\\ivanc\\source\\repos\\Paper_PLS\\Aplauso.wav", NULL, SND_FILENAME | SND_SYNC);
        }

    }
    else {
        punt = punt - 200;
        PlaySound(L"C:\\Users\\ivanc\\source\\repos\\Paper_PLS\\Error.wav", NULL, SND_FILENAME | SND_SYNC);
    }
    system("cls");
    system("color 06");
    ObtenerChristian(Lec);
    Persona* Christian;
    cout << "Puntaje: " << punt << "\n\n";
    Christian = new INE(nom, ape, edad, sexo, terror, "CHRUMHJC1459", "18/12/25", "Campos Celius 504, FRA");
    Christian->Mostrar();
    Christian = new Pasaporte(nom, ape, edad, sexo, terror, "Francesa", "26/05/22", "44494", "Campos Celicuis 504, FRA");
    Christian->Mostrar();
    delete Christian;
    cout << "\n";
    system("pause");
    system("color 07");
    cout << "\n";
    cout << "\n¿Quieres dejarlo pasar?\n0.Si\n1.No\n\nIngrese opcion:\n";
    cin >> pas;
    if (pas > 0) {
        cout << "\n¿En donde esta la incongruencia?\n0.Nombres\n1.Apellidos\n2.Edad\n3.Sexo\n4.Domicilio\n5.Nacionalidad\n6.Numero de Pasaporte\n\nIngrese opcion:\n";
        cin >> error;
        if (error == 0 || error == 1 || error == 2 || error == 3 || error == 4 || error == 5) {
            punt = punt - 200;
            PlaySound(L"C:\\Users\\ivanc\\source\\repos\\Paper_PLS\\Error.wav", NULL, SND_FILENAME | SND_SYNC);
        }

    }
    else {
        punt = punt + 200;
        PlaySound(L"C:\\Users\\ivanc\\source\\repos\\Paper_PLS\\Aplauso.wav", NULL, SND_FILENAME | SND_SYNC);
    }
    system("cls");
    system("color 06");
    ObtenerJesus(Lec);
    cout << "Puntaje: " << punt << "\n\n";
    Persona* Jesus;
    Jesus = new INE(nom, ape, edad, sexo, terror, "JSLRMHJC0782", "10/08/24", "Cadiz 2823, SPA");
    Jesus->Mostrar();
    Jesus = new Pasaporte(nom, ape, edad, sexo, terror, "Español", "10/08/24", "15304", "Cadiz 2023, SPA");
    Jesus->Mostrar();
    delete Jesus;
    cout << "\n";
    system("pause");
    system("color 07");
    cout << "\n";
    cout << "\n¿Quieres dejarlo pasar?\n0.Si\n1.No\n\nIngrese opcion:\n";
    cin >> pas;
    if (pas > 0) {
        cout << "\n¿En donde esta la incongruencia?\n0.Nombres\n1.Apellidos\n2.Edad\n3.Sexo\n4.Domicilio\n5.Nacionalidad\n6.Numero de Pasaporte\n\nIngrese opcion:\n";
        cin >> error;
        if (error !=6) {
            punt = punt - 200;
            PlaySound(L"C:\\Users\\ivanc\\source\\repos\\Paper_PLS\\Error.wav", NULL, SND_FILENAME | SND_SYNC);
        }
        else {
            punt = punt + 200;
            PlaySound(L"C:\\Users\\ivanc\\source\\repos\\Paper_PLS\\Aplauso.wav", NULL, SND_FILENAME | SND_SYNC);
        }

    }
    else {
        punt = punt - 300;
        PlaySound(L"C:\\Users\\ivanc\\source\\repos\\Paper_PLS\\Error.wav", NULL, SND_FILENAME | SND_SYNC);
    }
    system("cls");
    cout << "\n";
    cout << "Tu puntaje total ha sido: " << punt << "\n\n";
    if (punt > 0 && punt <100) {
        cout << "Hiciste un buen trabajo, podrias a verlo hecho mejor le has negado la entrada a varias personas que\n no tenian problemas con sus papeles, ojala que no suceda despues.\n\n";
        system("color 02");
    }
    if (punt < 0) {
        cout << "La estacion ha sido tomada por los terroristas, los has dejado pasar\n -----------------------FIN DEL JUEGO----------------------------.\n\n";
        system("color 04");
        PlaySound(L"C:\\Users\\ivanc\\source\\repos\\Paper_PLS\\Error.wav", NULL, SND_FILENAME | SND_SYNC);
    }
    if (punt > 100) {
        cout << "Hiciste un trabajo impecable, esperemos la frontenra se mantenga limpia de inmigrantes\n NOS VEMOS AL DIA SIGUIENTE.\n\n";
        system("color 09");
    }
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
