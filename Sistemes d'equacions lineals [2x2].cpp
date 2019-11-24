
// PROGRAMA QUE RESOL UN SISTEMA LINEAL DE DUES EQUACIONS AMB DUES INCOGNITES MITJANÇANT EL TEOREMA DE CRAMER
// TREBALL DE RECERCA 2018-2020. OMAR BRIQA

#include<iostream>

using namespace std;

int main(){
	
	long double E1[3], E2[3], x, y, d1, d2;
	
	cout << "// PROGRAMA QUE RESOL UN SISTEMA LINEAL DE DUES EQUACIONS AMB DUES INCOGNITES MITJANÇANT EL TEOREMA DE CRAMER\n// TREBALL DE RECERCA 2018-2020. OMAR BRIQA\n";
	
	cout << "\nIntrodueix les dues equacions tenint en compte aquesta forma:" << endl;
	cout << "\n[ x1  y1 = n1 ]\n[ x2  y2 = n2 ]\n" << endl;
	
	cout << "\nIntrodueix les dades de la primera equacio:\n" << endl;
	
		for ( int i = 0; i < 3; i++ ){
			
			cin >> E1[i];
			
		}
	
	cout << "\nIntrodueix les dades de la segona equacio:\n" << endl;
	
		for ( int i = 0; i < 3; i++ ){
			
			cin >> E2[i];
			
		}
		
	cout << "\nEl sistema d'equacions es el seguent: \n" << endl;

		cout << "[ " << E1[0] << "x + " << E1[1] << "y = " << E1[2] << " ]";
		cout << "\n[ " << E2[0] << "x + " << E2[1] << "y = " << E2[2] << " ]\n" << endl;
	
			d1 = ( E1[0] * E2[1] ) - ( E2[0] * E1[1] ); 
	
			d2 = ( E1[1] * E2[2] ) - ( E2[1] * E1[2] );
	
			x = ( ( E1[2] * E2[1] ) - ( E2[2] * E1[1] ) ) / d1;
	
			y = ( ( E1[0] * E2[2] ) - ( E2[0] * E1[2] ) ) / d2;
	
			
				if( d1 == 0 && d2 == 0 ){
			
					cout << "\nEl sistema te infinites solucions.\n" << endl;
			
				}
				
				else if ( d1 == 0 && d2 != 0 ){
					
					cout << "\nEl sistema no te solucio.\n" << endl;
					
				}
				
				else{
			
					cout << "\nEl valor de X es " << x << endl;
					cout << "El valor de Y es " << y << endl << endl;
			
					}

	
	system("pause");
	return 0;
}
