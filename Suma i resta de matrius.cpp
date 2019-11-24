//SUMA I RESTA DE MATRIUS
//TREBALL DE RECERCA 2018-2020. OMAR BRIQA

#include<iostream>

using namespace std;

int main(){
	
	int matriuA[500][500], matriuB[500][500], files, columnes;
	
		cout << "//SUMA I RESTA DE MATRIUS\n//TREBALL DE RECERCA 2018-2020. OMAR BRIQA" << endl;
		
		cout << "\nQuantes files tenen les teves matrius: "; 
		cin >> files;
		
		cout << "Quantes columnes tenen les teves matrius: ";
		cin >> columnes;
		
		cout << "\n";
			
			for( int f = 0; f < files; f++ ){
				
				for( int c = 0; c < columnes; c++ ){
					
					cout << "Escrigui la primera matriu --> Fila[" << f + 1 << "] i Columna[" << c + 1 << "]: ";
					cin >> matriuA[f][c];
					
				}
				
			}									
		
			

			cout << "\n" << "\n";
			
			for( int f = 0; f < files; f++ ){
				
				for( int c = 0; c < columnes; c++ ){
					
					cout << "Escrigui la segona matriu --> Fila[" << f + 1 << "] i Columna[" << c + 1 << "]: ";
					cin >> matriuB[f][c];
					
				}
				
			}									
		
			cout << "\nLA PRIMERA MATRIU ES LA SEGUENT: \n" << endl;
		
			for(int f = 0; f < files; f++){
				
				for (int c = 0; c < columnes; c++ ){	
	
					cout << matriuA[f][c];	
					cout << " ";		
				}
						
			cout << "\n";
			
			}
	
		
		
			cout << "\nLA SEGONA MATRIU ES LA SEGUENT: \n" << endl;
		
			for(int f = 0; f < files; f++){
				
				for (int c = 0; c < columnes; c++ ){	
	
					cout << matriuB[f][c];	
					cout << " ";		
				}
						
			cout << "\n";
			
	 		}	
	 		
	 		
	 		cout << "\n****************************************************************************************";
	 		

			cout << "\n\nLA SUMA DE LES MATRIUS ES LA SEGUENT: \n" << endl;
	
			
			for(int f = 0; f < files; f++){
				
				for (int c = 0; c < columnes; c++ ){	
	
					cout << matriuA[f][c] + matriuB[f][c];	
					cout << " ";		
				}
			
			cout << "\n";
				
			}
			
			cout << "\nLA RESTA DE LES MATRIUS ES LA SEGUENT: \n" << endl;
	
			
			for(int f = 0; f < files; f++){
				
				for (int c = 0; c < columnes; c++ ){	
	
					cout << matriuA[f][c] - matriuB[f][c];	
					cout << " ";		
				}
			
			cout << "\n";
				
			}
			
			cout << "\n" << endl;
	
	system("pause");
	return 0;

}
