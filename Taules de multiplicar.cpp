// APLICACIÓ QUE CALCULA LA TAULA DE MULTIPLICAR DE QUALSEVOL NÚMERO [ 20 Primers multiplicants ]
// TREBALL DE RECERCA 2018-2020. OMAR BRIQA

#include<iostream>

using namespace std;

int main(){
	
	long double num1, num;		
		
		cout << "// APLICACIO QUE CALCULA LA TAULA DE MULTIPLICAR DE QUALSEVOL NUMERO [ 20 Primers multiplicants ].\n// TREBALL DE RECERCA 2018-2020. OMAR BRIQA\n" << endl;
		
		a:cout<< "Escigui el nombre del qual vol saber la taula de multiplicar: ";	                                                                                                                                                                         				
		cin>> num1 ;
			
			if( num1 > -1000000000000000000 && num1 < 0 || num1 > 0 && num1 <= 1000000000000000000 ){
				
				cout << "\n";
				
				for( num = 1; num <= 20; num++ ){	
					
				cout << num1 << " * " << num << " = " << num1 *	num << endl;
						
				}
				
				cout << "\n";

								
			}
			
			else{
			
				cout<< "\nTaula no disponible. \n" << endl ;
				goto a;
			
			}
	
	system("pause");
	return 0;
}
