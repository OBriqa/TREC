//PROGRAMA PER A CALCULAR LA MITJANA ARITMÈTICA.
//TREBALL DE RECERCA 2018-2020. OMAR BRIQA

#include<iostream>

using namespace std;

int main(){
	
	float num, vector[1000], sum = 0;
		
		cout << "//PROGRAMA PER A CALCULAR LA MITJANA ARITMETICA.\n//TREBALL DE RECERCA 2018-2020. OMAR BRIQA\n" << endl;

		
		cout <<"Aquest programa calcula la mitjana aritmetica" << endl;
		cout <<"De quants nombres vol fer la mitjana: "; cin>> num;
	    cout << "\nEscrigui " << num << " numeros:\n";
		
		cout << "\n";
		
			for ( int i = 0; i < num; i++ ){
				
				cin>> vector[i];
				sum = sum + vector[i];
				 
			}

		cout << "\nLa mitjana aritmetica es de " << sum/num << " unitats.\n" << endl;
	
	system("pause");
	return 0;
}
