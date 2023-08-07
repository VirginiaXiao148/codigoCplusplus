// librerias
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <conio.h> 


#define sumar(a,b) a + b


// variables
int num = 4;
int num2 = 26;


char letra = 'a';
char* palabra = "queso";

bool ret = false;
bool comprobador;

// operaciones
int suma = num + num2;
suma = sumar(num,num2);
int resta = num - num2;
int multiplicacion = num * num2;
int division = num / num2;
int restoDivision = num % num2;
int potencia = num ** num2;


// constantes
const char letra1 = 'a';
const int valor = 100;


using namespace std;


// funciones
void sumarFuncion (int num3 = 4); // parametro por defecto
void sumarFuncion (int num3){
    cout << (num3 + 1) << endl;
}


// main del programa
int main(){
    printf("");
    return 0;
    system("PAUSE");  // no se cerrara el programa
    getch();// no se cerrara el programa
    cin.get(); // no se cerrara el programa
    cout << suma << "\n \n" << endl;
    cout << letra << "\n \n" << endl;
    cout << palabra << "\n \n" << endl;

    float val = 1.567;
    cout << val << endl;

    comprobador = (num < num2);
    cout << comprobador << endl;

    if (comprobador){
        cout << "Es menor que " << endl;
    }else{
        cout << "Es mayor que " << endl;
    }

    char c = '';
    cout << "Escribe una letra " << endl;
    cin >> c;

    switch (c)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        cout << "Es una vocal " << endl;
        break;
    default:
        cout << "Es una consonante " << endl;
        break;
    }

    // arrays
    char arrayChar[8];
    arrayChar[0] = 'h';
    arrayChar[1] = 'i';
    arrayChar[2] = 'l';
    arrayChar[3] = 'a';
    for (int i = 0; i < arrayChar.length; i++)
    {
        cout << arrayChar[i];
    }
    cout << endl;
    
    // llamamos a la funcion
    sumarFuncion(); // 4 + 1 = 5
    sumarFuncion(1); // 1 + 1 = 2


    struct Hogar{

        string direccion;
        int numPortal;

        Hogar(){  // default
            direccion = "Plaza ";
            numPortal = 1;
        }

        string verDireccion(){
            return direccion;
        }

    } Fernando;
    Fernando.direccion = "Calle XXXX";
    Fernando.numPortal = "6";

    cout << Fernando.direccion << endl;

}

