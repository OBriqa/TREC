// PROGRAMA QUE RESOL UN SISTEMA LINEAL DE TRES EQUACIONS AMB TRES INCOGNITES MITJANÇANT EL TEOREMA DE CRAMER
// TREBALL DE RECERCA 2018-2020. OMAR BRIQA

#include<iostream>

using namespace std;

int main(){
	
	long double E1[4], E2[4], E3[4], x, y, z, d, D, d1, d2, d3, d4, d5, d6;
	
	cout << "// PROGRAMA QUE RESOL UN SISTEMA LINEAL DE TRES EQUACIONS AMB TRES INCOGNITES MITJANÇANT EL TEOREMA DE CRAMER\n// TREBALL DE RECERCA 2018-2020. OMAR BRIQA\n";
	
	cout << "\nIntrodueix les equacions tenint en compte aquesta forma:" << endl;
	cout << "\n[ x1  y1  z1 = n1 ]\n[ x2  y2  z2 = n2 ]\n[ x3  y3  z3 = n3 ]\n" << endl;
	
		cout << "\nIntrodueix les dades de la primera equacio:\n" << endl;
	
			for ( int i = 0; i < 4; i++ ){
			
				cin >> E1[i];
			
			}
	
		cout << "\nIntrodueix les dades de la segona equacio:\n" << endl;
	
			for ( int i = 0; i < 4; i++ ){
			
				cin >> E2[i];
			
			}
		
		cout << "\nIntrodueix les dades de la tercera equacio:\n" << endl;
	
			for ( int i = 0; i < 4; i++ ){
			
				cin >> E3[i];
			
			}
		
		cout << "\nEl sistema d'equacions es el seguent: \n" << endl;
		
			cout << "[ " << E1[0] << "x + " << E1[1] << "y + " << E1[2] << " = " << E1[3] << "]\n";
			cout << "[ " << E2[0] << "x + " << E2[1] << "y + " << E2[2] << " = " << E2[3] << "]\n";
			cout << "[ " << E3[0] << "x + " << E3[1] << "y + " << E3[2] << " = " << E3[3] << "]\n" << endl << endl;
	
	
			d = ( ( E1[0] * E2[1] * E3[2] ) + ( E2[0] * E3[1] * E1[2] ) + ( E3[0] * E1[1] * E2[2] ) ) - 
				( ( E1[2] * E2[1] * E3[0] ) + ( E2[2] * E3[1] * E1[0] ) + ( E3[2] * E1[1] * E2[0] ) );
				
			D = ( ( E1[1] * E2[2] * E3[3] ) + ( E2[1] * E3[2] * E1[3] ) + ( E3[1] * E1[2] * E2[3] ) ) - 
				( ( E1[3] * E2[2] * E3[1] ) + ( E2[3] * E3[2] * E1[1] ) + ( E3[3] * E1[2] * E2[1] ) );	
		
		
			x = ( ( ( ( E1[3] * E2[1] * E3[2] ) + ( E2[3] * E3[1] * E1[2] ) + ( E3[3] * E1[1] * E2[2] ) ) - 
				( ( E1[2] * E2[1] * E3[3] ) + ( E2[2] * E3[1] * E1[3] ) + ( E3[2] * E1[1] * E2[3] ) ) )	/ d );
				
			y = ( ( ( ( E1[0] * E2[3] * E3[2] ) + ( E2[0] * E3[3] * E1[2] ) + ( E3[0] * E1[3] * E2[2] ) ) - 
				( ( E1[2] * E2[3] * E3[0] ) + ( E2[2] * E3[3] * E1[0] ) + ( E3[2] * E1[3] * E2[0] ) ) ) / d );
				
			z = ( ( ( ( E1[0] * E2[1] * E3[3] ) + ( E2[0] * E3[1] * E1[3] ) + ( E3[0] * E1[1] * E2[3] ) ) - 
				( ( E1[3] * E2[1] * E3[0] ) + ( E2[3] * E3[1] * E1[0] ) + ( E3[3] * E1[1] * E2[0] ) ) ) / d );		
		
				
		if( d == 0){
			
			d1 = ( E1[0] * E2[1] ) - ( E2[0] * E1[1] );
			d2 = ( E1[1] * E2[2] ) - ( E2[1] * E1[2] );
			d3 = ( E1[2] * E2[3] ) - ( E2[2] * E1[3] );
			d4 = ( E2[0] * E3[1] ) - ( E3[0] * E2[1] );
			d5 = ( E2[1] * E3[2] ) - ( E3[1] * E2[2] );
			d6 = ( E2[2] * E3[3] ) - ( E3[2] * E2[3] );
						
				if ( ( d1 && d2 && d3 && d4 && d5 && d6 && D ) == 0 ){
					
					cout << "\nEl sistema te infinites solucions.\n" << endl;
					
				}	
				
				else if( ( ( d1 && d2 && d4 && d5 && D ) == 0 ) & ( ( d3 || d6 ) != 0 ) ){
					
					cout << "\nEl sistema no te solucio.\n" << endl;
					
				}
				
				else if( ( d1 || d2 || d3 || d4 || d5 || d6 || D ) != 0 ){
					
					cout << "\nEl sistema te infinites solucions.\n" << endl;
					
				}
				
				else if( D != 0 ){
					
					cout << "\nEl sistema no te solucio.\n" << endl;
					
				}
						
		}
		
		else{
			
			cout << "\nEl valor de X es " << x << endl;
			cout << "El valor de Y es " << y << endl;
			cout << "El valor de Z es " << z << endl << endl;
			
		}			

	
	system("pause");
	return 0;
}
