// APLICACIÓ QUE CALCULA EL FACTORIAL DE UN NÚMERO 
// TREBALL DE RECERCA 2018-2020. OMAR BRIQA

#include<iostream>

using namespace std;

int main(){
	
	unsigned long long int factorial = 1 , num;
	
		cout << "// APLICACIO QUE CALCULA EL FACTORIAL DE UN NUMERO\n// TREBALL DE RECERCA 2018-2020. OMAR BRIQA\n";
		
		cout<< "\nEscrigui el nombre del qual vol calcular el factorial: ";
		cin>> num;
	
			for( int i = 1; i <= num; i++ ){
			
				factorial = factorial * i;
				
			}
		
		cout << "\nEl factorial de " << num << " es " << factorial << "\n" << endl;
		

	system("pause");
	return 0;
}
