//PRODUCTE DE DOS MATRIUS
//TREBALL DE RECERCA 2018-2020. OMAR BRIQA

#include<iostream>

using namespace std;

/////////////////////////////////////////////////////////////////////////////////////////////////////////

void DemanarDades( long double MatriuA[][10], long double MatriuB[][10], int f1, int f2, int c1, int c2 );

void MostrarMatrius( long double MatriuA[][10], long double MatriuB[][10], int f1, int f2, int c1, int c2 );

void MultiplicarMatrius( long double MatriuA[][10], long double MatriuB[][10], long double Mult[][10], int f1, int f2, int c1, int c2 );

void MostrarResultat( long double Mult[][10], int f1, int c2 );

////////////////////////////////////////////////////////////////////////////////////////////////////////


int main(){
	 
	int f1, c1, f2, c2;
	long double MatriuA[10][10], MatriuB[10][10], Mult[10][10];
	
		cout << "//PRODUCTE DE DOS MATRIUS\n//TREBALL DE RECERCA 2018-2020. OMAR BRIQA\n";

		cout << "\nEscrigui el nombre de files de la primera matriu: ";
		cin >> f1;
		
		cout << "Escrigui el nombre de columnes de la primera matriu: ";
		cin >> c1;
		
		cout << "\nEscrigui el nombre de files de la segona matriu: ";
		cin >> f2;
		
		cout << "Escrigui el nombre de columnes de la segona matriu: ";
		cin >> c2;
		
		while( c1 != f2 ){
			
			cout << "\nERROR !! ----------------------------- ERROR !! \nPer a poder dur a terme la multiplicacio, el numero de columnes de la primera matriu, han de ser iguals al numero de files de la segona matriu.";
				
			cout << "\n\nEscrigui el nombre de files de la primera matriu: ";
			cin >> f1;
		
			cout << "Escrigui el nombre de columnes de la primera matriu: ";
			cin >> c1;
		
			cout << "\nEscrigui el nombre de files de la segona matriu: ";
			cin >> f2;
		
			cout << "Escrigui el nombre de columnes de la segona matriu: ";
			cin >> c2;
		
		}
			
		cout << "\n" << "\n";
		
		DemanarDades( MatriuA, MatriuB, f1, f2, c1, c2 );

		cout << "\n" << "\n";

		MostrarMatrius( MatriuA, MatriuB, f1, f2, c1, c2 );
		
		MultiplicarMatrius( MatriuA, MatriuB, Mult, f1, c1, f2, c2 );
		
		cout << "\n" << "\n";

		MostrarResultat( Mult, f1, c2);
		
		cout << "\n";
		
	system("pause");
	return 0;
}

void DemanarDades( long double MatriuA[][10], long double MatriuB[][10], int f1, int f2, int c1, int c2 ){
	
	cout << "Escrigui les dades de les matrius: ";
	
	cout << "\n" << "\n" ;
	
		for( int f = 0; f < f1; f++ ){
				
				for( int c = 0; c < c1; c++ ){
					
					cout << "Escrigui la primera matriu --> Fila[" << f + 1 << "] i Columna[" << c + 1 << "]: ";
					cin >> MatriuA[f][c];
					
				}
				
			}
	
	cout << "\n" << "\n";

	
		for( int f = 0; f < f2; f++ ){
				
				for( int c = 0; c < c2; c++ ){
					
					cout << "Escrigui la segona matriu --> Fila[" << f + 1 << "] i Columna[" << c + 1 << "]: ";
					cin >> MatriuB[f][c];
					
				}
				
			}
	
	
}


void MostrarMatrius( long double MatriuA[][10], long double MatriuB[][10], int f1, int f2, int c1, int c2 ){
	
	cout << "\n***************************************************************************";
	
	cout << "\n" << "\n" ;

	cout << "\nLA PRIMERA MATRIU ES LA SEGUENT: \n" << endl;
		
			for(int f = 0; f < f1; f++){
				
				for (int c = 0; c < c1; c++ ){	
	
					cout << MatriuA[f][c];	
					cout << " ";		
				}
						
			cout << "\n";
			
			}
	
		
	cout << "\nLA SEGONA MATRIU ES LA SEGUENT: \n" << endl;
		
			for(int f = 0; f < f2; f++){
				
				for (int c = 0; c < c2; c++ ){	
	
					cout << MatriuB[f][c];	
					cout << " ";		
				}
						
			cout << "\n";
			
	 		}
}


void MultiplicarMatrius( long double MatriuA[][10], long double MatriuB[][10], long double Mult[][10], int f1, int f2, int c1, int c2 ){
	
		for( int f = 0; f < f1; f++ ){	// COLOCAR ELEMENTS DE LA MATRIU DEL RESULTAT DE LA MULTIPLICACIÓ EN ZERO
		
			for ( int c = 0; c < c2; c++ ){
			
				Mult[f][c] = 0; 
			 
			}
		
		}
				
		for( int f = 0; f < f1; f++ ){  // ALGORITME DE MULTIPLICAIÓ DE MATRIUS
			
			for ( int c = 0; c < c2; c++ ){
				
				for ( int k = 0; k < c1; k++ ){
					
					Mult[f][c] += MatriuA[f][k] * MatriuB[k][c];
					
				}
			}
		}
	
}


void MostrarResultat( long double Mult[][10], int f1, int c2 ){
	
	cout << "\n***************************************************************************\n";
	
	cout << "\n\nEL RESULTAT DE LA MULTIPLICACIO ES EL SEGUENT: ";
	
	cout << "\n" << "\n";
	
		for( int f = 0; f < f1; f++ ){
			
			for( int c = 0; c < c2; c++ ){
				
				cout << Mult[f][c];
				cout << " ";
	
			}
			
		cout << "\n";

			
		}
	
}

