// ORDENACIÓ DE NOMBRES MITJANÇANT L'ALGORITME BUBBLE SORT
// TREBALL DE RECERCA 2018-2020. OMAR BRIQA

#include<iostream>

using namespace std;

int main(){
	
	double num[1000], aux;
	int n;
	
		cout << "// ORDENACIO DE NOMBRES MITJANÇANT L'ALGORITME BUBBLE SORT\n// TREBALL DE RECERCA 2018-2020. OMAR BRIQA" << endl;
	
		cout << "\nQuants nombres vol ordenar: ";
		cin >> n;	
	
		cout << "\n\nEscrigui els nombres que vol ordernar\n" << endl;
			
			for ( int i = 0; i < n; i++ ){
				
				cin >> num[i];
				
			}
			
			for ( int i = 0; i < n; i++ ){
								
				for ( int j = 0; j < (n-1); j++ ){
				
					if ( num[j] > num[j+1] ){
						
						aux = num[j];
						num[j] = num[j+1];
						num[j+1] = aux;						
					}
			
				}
					
			}

			
		cout << "\nLa llista dels nombres ordenats de forma ascendent es: \n" << endl;	
					
			for ( int i = 0; i < n; i++ ){
				
				cout << num[i] << " ";
				
			}	
			
		cout << "\n\nLa llista dels nombres ordenats de forma descendent es: \n" << endl;	
					
			for ( int i = (n-1); i >= 0; i-- ){
				
				cout << num[i] << " ";
				
			}
			
		cout << "\n" << endl;	
	
	system("pause");
	return 0;
}
