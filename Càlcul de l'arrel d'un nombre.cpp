// CÀLCUL DE L'ARREL D'UN NÚMERO
// TREBALL DE RECERCA 2018-2020. OMAR BRIQA

#include<iostream>
#include<cmath>

using namespace std;

int main(){


	int opcio, numero;

		cout << "// CALCUL DE L'ARREL D'UN NUMERO\n// TREBALL DE RECERCA 2018-2020. OMAR BRIQA\n";

		cout<<"\nEscrigui un nombre: " ;
		cin>> numero;


		cout<< "\n1. Arrel quadrada\n2. Arrel cubica\n3. Arrel quarta "<< endl;
		cout<< "\nEsculli una opcio: "; 
		

		cin>> opcio;

			switch(opcio){


			case 1: cout<< "\nL'arrel quadrada de " << numero << " es +/- " << sqrt(numero) << "\n" << endl;
			break;

			case 2: cout<< "\nL'arrel cubica de " << numero << " es " <<  pow(numero,(long double)1/3) << "\n"  << endl;
			break;

			case 3: cout<< "\nL'arrel quarta de " << numero <<  " es +/- " << pow (numero,(long double)1/4)  << "\n" << endl;
			break;

			default: cout<< "\nAquesta opcio no esta disponible" << endl;


		}
		


	system("pause");
	return 0;

}
