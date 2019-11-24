// APLICACIÓ QUE CALCULA EL DETERMINANT D'UNA MATRIU
// TREBALL DE RECERCA 2018-2020. OMAR BRIQA

#include<iostream>

using namespace std;

int main(){
	
	int n;
	long double M1[2][2], M2[3][3], M3[4][4], d;
	
	cout << "// APLICACIO QUE CALCULA EL DETERMINANT D'UNA MATRIU\n// TREBALL DE RECERCA 2018-2020. OMAR BRIQA\n";

	a:cout << "\nEsculli l'ordre de la seva matriu: " << endl;

	cout << "\n2x2 [Tecleji 2]";
	cout << "\n3x3 [Tecleji 3]";
	cout << "\n4x4 [Tecleji 4]\n" << endl;
	cin >> n;
	
		if( n == 2 ){
			
			cout << "\n";
			
			for( int f = 0; f < 2; f++ ){
				
				for( int c = 0; c < 2; c++ ){
					
					cout << "Escrigui la matriu [2x2] --> Fila[" << f + 1 << "] i Columna[" << c + 1 << "]: ";
					cin >> M1[f][c];
					
				}
			
			}

			cout << "\n";

			
			cout << "La matriu que ha escrit es la seguent: " << endl;
			
			cout << "\n";
			
			for(int f = 0; f < 2; f++){
				
				for (int c = 0; c < 2; c++ ){	
	
					cout << M1[f][c];	
					cout << " ";		
				}
			
			cout << "\n";
			
			}
			
			cout << "\n";
			
			
			d = ( M1[0][0] * M1[1][1] ) - ( M1[1][0] * M1[0][1] );
			
			cout << "El determinant d'aquesta matriu es " << d << "\n"<< endl;

			
		} 
		
		else if( n == 3 ){
			
			cout << "\n";

			for( int f = 0; f < 3; f++ ){
				
				for( int c = 0; c < 3; c++ ){
					
					cout << "Escrigui la matriu [3x3] --> Fila[" << f + 1 << "] i Columna[" << c + 1 << "]: ";
					cin >> M2[f][c];
					
				}
			
			}

			cout << "\n";

			
			cout << "La matriu que ha escrit es la seguent: " << endl;
			
			cout << "\n";
			
				for(int f = 0; f < 3; f++){
				
					for (int c = 0; c < 3; c++ ){	
	
						cout << M2[f][c];	
						cout << " ";		
					}
				
				cout << "\n";
			
				}
			
			cout << "\n";
			
			d = ( ( M2[0][0] * M2[1][1] * M2[2][2] ) + ( M2[1][0] * M2[2][1] * M2[0][2] ) + ( M2[2][0] * M2[0][1] * M2[1][2] ) ) - 
			( ( M2[0][2] * M2[1][1] * M2[2][0] ) + ( M2[1][2] * M2[2][1] * M2[0][0] ) + ( M2[2][2] * M2[0][1] * M2[1][0] ) );
			
			cout << "El determinant d'aquesta matriu es " << d << "\n"<< endl;

		
		}
		
		else if( n == 4 ){
			
			cout << "\n";

			for( int f = 0; f < 4; f++ ){
				
				for( int c = 0; c < 4; c++ ){
					
					cout << "Escrigui la matriu [4x4] --> Fila[" << f + 1 << "] i Columna[" << c + 1 << "]: ";
					cin >> M3[f][c];
					
				}
			
			}

			cout << "\n";

			
			cout << "La matriu que ha escrit es la seguent: " << endl;
			
			cout << "\n";
			
				for(int f = 0; f < 4; f++){
				
					for (int c = 0; c < 4; c++ ){	
	
						cout << M3[f][c];	
						cout << " ";		
					}
				
				cout << "\n";
			
				}
			
			cout << "\n";
			
			d = ( M3[0][0] * ( ( ( M3[1][1] * M3[2][2] * M3[3][3] ) + ( M3[2][1] * M3[3][2] * M3[1][3] ) + ( M3[3][1] * M3[1][2] * M3[2][3] ) ) - 
			( ( M3[1][3] * M3[2][2] * M3[3][1] ) + ( M3[2][3] * M3[3][2] * M3[1][1] ) + ( M3[3][3] * M3[1][2] * M3[2][1] ) ) ) ) 
			
			+ 
			
			( - M3[0][1] * ( ( ( M3[1][0] * M3[2][2] * M3[3][3] ) + ( M3[2][0] * M3[3][2] * M3[1][3] ) + ( M3[3][0] * M3[1][2] * M3[2][3] ) ) - 
			( ( M3[1][3] * M3[2][2] * M3[3][0] ) + ( M3[2][3] * M3[3][2] * M3[1][0] ) + ( M3[3][3] * M3[1][2] * M3[2][0] ) ) ) )
			
			+
			
			( M3[0][2] * ( ( ( M3[1][0] * M3[2][1] * M3[3][3] ) + ( M3[2][0] * M3[3][1] * M3[1][3] ) + ( M3[3][0] * M3[1][1] * M3[2][3] ) ) - 
			( ( M3[1][3] * M3[2][1] * M3[3][0] ) + ( M3[2][3] * M3[3][1] * M3[1][0] ) + ( M3[3][3] * M3[1][1] * M3[2][0] ) ) ) )
			
			+
			
			( - M3[0][3] * ( ( ( M3[1][0] * M3[2][1] * M3[3][2] ) + ( M3[2][0] * M3[3][1] * M3[1][2] ) + ( M3[3][0] * M3[1][1] * M3[2][2] ) ) - 
			( ( M3[1][2] * M3[2][1] * M3[3][0] ) + ( M3[2][2] * M3[3][1] * M3[1][0] ) + ( M3[3][2] * M3[1][1] * M3[2][0] ) ) ) );
			
			
			cout << "El determinant d'aquesta matriu es " << d << "\n"<< endl;
			
		}
		
		
		else{
			
			cout << "\nL'opcio escollida no esta disponible.\n" << endl;
			goto a;
			
		}
	
	
	
	
	system("pause");
	return 0;
}
