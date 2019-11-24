// CÀLCUL DE LA MATRIU TRANSPOSADA 
// TREBALL DE RECERCA 2018-2020. OMAR BRIQA

#include<iostream>

using namespace std;

int main(){
	
	int Matriu[500][500], files, columnes;
	
		cout << "// CALCUL DE LA MATRIU TRANSPOSADA \n// TREBALL DE RECERCA 2018-2020. OMAR BRIQA\n";
		
		cout << "\nQuantes files te la teva matriu: "; 
		cin >> files;
		
		cout << "Quantes columnes te la teva matriu: ";
		cin >> columnes; 
		
		cout << "\n";
		
			for( int f = 0; f < files; f++ ){
				
				for( int c = 0; c < columnes; c++ ){
					
					cout << "Escrigui la matriu --> Fila[" << f + 1 << "] i Columna[" << c + 1 << "]: ";
					cin >> Matriu[f][c];
					
				}
				
			}									

			cout << "\n" << "\n";
			
		cout << "LA MATRIU QUE HA ESCRIT ES LA SEGUENT: \n" << endl;
		
			
			for(int f = 0; f < files; f++){
				
				for (int c = 0; c < columnes; c++ ){	
	
					cout << Matriu[f][c];	
					cout << " ";		
				}
						
			cout << "\n" ;
			
			}
	
		cout << "\n" << endl;
	
		cout << "\nLA MATRIU TRANSPOSADA ES LA SEGUENT: \n" << endl;
		
			for(int f = 0; f < columnes; f++){
				
				for (int c = 0; c < files; c++ ){	
	
					cout << Matriu[c][f];	
					cout << " ";		
				}
						
			cout << "\n";
			
			}
			
		cout << "\n" << endl;	
			
	system("pause");
	return 0;
}
