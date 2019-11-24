//PROGRAMA PER AVERIGUAR SI UN NOMBRE ES PARELL O IMPARELL
//TREBALL DE RECERCA 2018-2020. OMAR BRIQA

#include<iostream>

using namespace std;

int main(){
	
	unsigned long long int n;
	
	cout << "//PROGRAMA PER AVERIGUAR SI UN NOMBRE ES PARELL O IMPARELL\n//TREBALL DE RECERCA 2018-2020\n";
	
	cout << "\nEscrigui un nombre: ";
	cin >> n;
	
	if( ( n % 2 ) == 0 ){
		
		cout << "\nEl nombre " << n << " es parell.\n" << endl;
		
	}
	
	else{
		
		cout << "\nEl nombre " << n << " es imparell.\n" << endl;
		
	}
	

	system("pause");
	return 0;
}
