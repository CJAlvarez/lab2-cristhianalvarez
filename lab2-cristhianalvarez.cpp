#include <iostream>
#include <math.h>
using namespace std;

// Primer ejercicio
void firstE(){
	double sideA, sideB, sideC=0, angleA, angleB=0, angleC=0;
        cout << "Ingrese lado a: ";
        cin >> sideA;
        cout << "Ingrese lado b: ";
        cin >> sideB;
        cout << "Ingrese angulo A: ";
        cin >> angleA;

	const double PI = 3.14159265;

        angleB = asin((sideB * sin(angleA* (PI/180))) / sideA)* (180/PI);
	angleC = 180 - angleA - angleB;
        sideC = (sideB * sin(angleC* (PI / 180))) / sin(angleB*(PI/180));

        cout << "a = " << sideA << ", b = " << sideB << ", c = " << sideC << endl;
        cout << "A = " << angleA << ", B = " << angleB << ", C = " << angleC << endl;
}

// Segundo ejercicio
void secundE(){
	int firstNumber, secundNumber, adding = 0, sAdding=0;
        cout << "Ingrese primer numero: ";
        cin >> firstNumber;
        cout << "Ingrese segundo numero: ";
        cin >> secundNumber;
	for(int i = 1; i < firstNumber; i++){
		if(firstNumber % i == 0){
			adding = adding + i;
		}
	}

	for(int i = 1; i < secundNumber; i++){
                if(secundNumber % i == 0){
                        sAdding = sAdding + i;
                }
        }

	if(secundNumber == adding && firstNumber == sAdding){
		cout << "Son amigos"<< endl;
	} else {
		cout << "No son amigos" << endl;
	}
}

// Tercer ejercicio
float thirdE(float x1, float x2, float y1, float y2){
	return sqrt( pow(x2 - x1, 2) + pow(y2 - y1, 2) );
}

int main(){
	int option;
	cout << "\tMENU\n\n1.- Primer ejercicio\n2.- Segundo ejercicio\n3.- Tercer ejercicio\n";
	cin >> option;
	if(option == 1){
		firstE();
	} else if(option == 2){
		secundE();
	}else{
		float x1, x2, y1, y2, d;
		cout << "Ingrese x1: " << endl;
		cin >> x1;
		cout << "Ingrese x2: " << endl;
                cin >> x2;
		cout << "Ingrese y1: " << endl;
                cin >> y1;
		cout << "Ingrese y2: " << endl;
                cin >> y2;

		cout << "La distancia es: " << thirdE(x1, x2, y1, y2) << endl;
	}
	return 0;
}
