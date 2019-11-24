// APLICACIONS DEL PRODUCTE MIXT
// TREBALL DE RECERCA 2018-2020. OMAR BRIQA

#include<iostream>
#include<cmath>

using namespace std;

int main(){
	
	int n, n1;
	long double v1[3], v2[3], v3[3], Pm, V, V1[3], V2[3], V3[3], V4[3], A[3], B[3], C[3];
	
	cout << "// APLICACIONS DEL PRODUCTE MIXT\n// TREBALL DE RECERCA 2018-2020. OMAR BRIQA" << endl;

	a:cout << "\nEsculli una opcio: \n" << endl;
	
	cout << "1. Producte mixt\n";
	cout << "2. Volum d'un parallelepipede\n";
	cout << "3. Volum d'un tetraedre\n" << endl;
	cin >> n;
	
		if ( n != 1 && n != 2 && n != 3 ){
	
			cout << "\nL'opcio escollida no esta disponible" << endl;
			goto a;
			
		}
	
	
		if ( n == 1 || n == 2 ){
	
		cout << "\nEscrigui el primer vector:\n" << endl;
		
			for ( int i = 0; i < 3; i++ ){
				
				cin >> v1[i];
				
			}
		
		cout << "\nEscrigui el segon vector:\n" << endl;
		
			for ( int i = 0; i < 3; i++ ){
				
				cin >> v2[i];
				
			}
		
		cout << "\nEscrigui el tercer vector:\n" << endl;
		
			for ( int i = 0; i < 3; i++ ){
				
				cin >> v3[i];
				
			}
			
		}
		
		Pm = ( ( ( v1[0] * v2[1] * v3[2] ) + ( v2[0] * v3[1] * v1[2] ) + ( v3[0] * v1[1] * v2[2] ) ) - 
		     ( ( v1[2] * v2[1] * v3[0] ) + ( v2[2] * v3[1] * v1[0] ) + ( v3[2] * v1[1] * v2[0] ) ) );
					
		
				if ( n == 1 ){
				
					cout << "\nEl primer vector es v1 = { " << v1[0] << "i, " << v1[1] << "j, " << v1[2] << "k }" << endl;
					cout << "\nEl segon vector es v2 = { " << v2[0] << "i, " << v2[1] << "j, " << v2[2] << "k }" << endl;
					cout << "\nEl tercer vector es v3 = { " << v3[0] << "i, " << v3[1] << "j, " << v3[2] << "k }" << endl;
					
					cout << "\n\nEl producte mixt es " << Pm << "\n" << endl;
					
				}
				
				else if( n == 2 ){
					
					cout << "\nEl primer vector es v1 = { " << v1[0] << "i, " << v1[1] << "j, " << v1[2] << "k }" << endl;
					cout << "\nEl segon vector es v2 = { " << v2[0] << "i, " << v2[1] << "j, " << v2[2] << "k }" << endl;
					cout << "\nEl tercer vector es v3 = { " << v3[0] << "i, " << v3[1] << "j, " << v3[2] << "k }" << endl;
					
					cout << "\n\nEl volum del parallelepipede es de " << fabs(Pm) << " unitats cubiques\n" << endl; 
					
				}	
	
				else if( n == 3 ){
					
					b:cout << "\nTens els vertex [ Digiti 1 ] o els vectors [ Digiti 2] del tetraedre??\n" << endl;
					cin >> n1;
					
						if ( n1 == 1 ){
							
							cout << "\n!! Recorda que l'ordre d'introduccio dels vectors no afecta en res.\nNomes s'agafa un que fa d'origen i, conseguenment es calculen els vectors!!\n";
							
							cout << "\nEscrigui el primer vertex:\n" << endl;
							
								for ( int i = 0; i < 3; i++ ){
									
									cin >> V1[i];
									
								}
								
							cout << "\nEscrigui el segon vertex:\n" << endl;
							
								for ( int i = 0; i < 3; i++ ){
									
									cin >> V2[i];
									
								}	
							 
							 cout << "\nEscrigui el tercer vertex:\n" << endl;
							
								for ( int i = 0; i < 3; i++ ){
									
									cin >> V3[i];
									
								}
								
							cout << "\nEscrigui el quart vertex:\n" << endl;
							
								for ( int i = 0; i < 3; i++ ){
									
									cin >> V4[i];
									
								}	
								
						
							for ( int i = 0; i < 3; i++ ){
								
								A[i] = V2[i] - V1[i];
								B[i] = V3[i] - V1[i];
								C[i] = V4[i] - V1[i];
								
							}
							
							
						
						V = ( ( fabs( ( ( ( A[0] * B[1] * C[2] ) + ( B[0] * C[1] * A[2] ) + ( C[0] * A[1] * B[2] ) ) - 
		     				( ( A[2] * B[1] * C[0] ) + ( B[2] * C[1] * A[0] ) + ( C[2] * A[1] * B[0] ) ) ) ) ) / 6 );
							
					
						cout << "\n\nEl volum del tetradre es de " << V << " unitats cubiques\n" << endl; 

								
						}
						
						else if( n1 == 2 ){
							
							cout << "\nEscrigui el primer vector:\n" << endl;
		
								for ( int i = 0; i < 3; i++ ){
				
									cin >> v1[i];
				
								}
		
							cout << "\nEscrigui el segon vector:\n" << endl;
				
								for ( int i = 0; i < 3; i++ ){
				
									cin >> v2[i];
				
								}
		
							cout << "\nEscrigui el tercer vector:\n" << endl;
			
								for ( int i = 0; i < 3; i++ ){
				
									cin >> v3[i];
				
								}
							
							V = ( ( fabs( ( ( ( v1[0] * v2[1] * v3[2] ) + ( v2[0] * v3[1] * v1[2] ) + ( v3[0] * v1[1] * v2[2] ) ) - 
		   					( ( v1[2] * v2[1] * v3[0] ) + ( v2[2] * v3[1] * v1[0] ) + ( v3[2] * v1[1] * v2[0] ) ) ) ) )  / 6 );	
								
			
							cout << "\n\nEl volum del tetradre es de " << V << " unitats cubiques\n" << endl; 
	
								
							
						}
						
						else{
							
							cout << "\nL'opcio escollida no esta disponible" << endl;
							goto b;
							
						}
				}			
	
	
	system("pause");
	return 0;
}
