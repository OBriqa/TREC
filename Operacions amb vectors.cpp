//PROGRAMA QUE REALITZA LES OPERACIONS BÀSIQUES DE VECTORS TAN AMB DOS COM AMB TRES DIMENSIONS
//TREBALL DE RECERCA 2018-2020. OMAR BRIQA

#include<iostream>

using namespace std;

int main(){

	int coord1[3], coord2[3], n;
	
	cout << "//PROGRAMA QUE REALITZA LES OPERACIONS BASIQUES DE VECTORS TAN AMB DOS COM EN TRES DIMENSIONS\n//TREBALL DE RECERCA 2018-2020. OMAR BRIQA" << endl;

	a:cout << "\nDe quantes dimensions son els teus vectors: ";
	cin >> n;

	if ( n == 2 ){

	
		cout << "\nEscrigui les coordenades del primer vector: \n";
	
			for ( int i=0; i < n; i++){
			
				cin >> coord1[i];
			
			}
			
		cout << "\nEscrigui les coordenades del segon vector: \n";
	
			for ( int i=0; i < n; i++){
				
				cin >> coord2[i];
			
			}
	
		cout << "\nLes coordenades del primer vector son [" << coord1[0] << "," <<  coord1[1] << "]";
		cout << "\nLes coordenades del segon vector son [" << coord2[0] << "," <<  coord2[1] << "]\n" << endl;
	
		
		cout << "\nLa suma dels dos vectors es [" << coord1[0] + coord2[0] << "," << coord1[1] + coord2[1] << "]\n";
		cout << "\nLa resta dels dos vectors es [" << coord1[0] + -coord2[0] << "," << coord1[1] + -coord2[1] << "]\n" << endl;
	
	}
	
	else if( n == 3 ){
		
		
		cout << "\nEscrigui les coordenades del primer vector: \n";
	
			for ( int i=0; i < n; i++){
			
				cin >> coord1[i];
			
			}
			
		cout << "\nEscrigui les coordenades del segon vector: \n";
	
			for ( int i=0; i < n; i++){
				
				cin >> coord2[i];
			
			}
		
		cout << "\nLes coordenades del primer vector son [" << coord1[0] << "," <<  coord1[1] << "," << coord1[2] << "]";
		cout << "\nLes coordenades del segon vector son [" << coord2[0] << "," <<  coord2[1]  << "," << coord2[2]<< "]\n" << endl;
	
		
		cout << "\nLa suma dels dos vectors es [" << coord1[0] + coord2[0] << "," << coord1[1] + coord2[1] << "," << coord1[2] + coord2[2] << "]\n";
		cout << "\nLa resta dels dos vectors es [" << coord1[0] + -coord2[0] << "," << coord1[1] + -coord2[1] << "," << coord1[2] + -coord2[2] <<"]\n" << endl;
		
	}
	
	else{
		
		cout << "\nL'opcio escollida no esta disponible\n";
		goto a;
		
	}
	
	
	system("pause");
	return 0;

}
