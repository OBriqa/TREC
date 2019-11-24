// APLICACIONS DEL PRODUCTE VECTORIAL
// TREBALL DE RECERCA 2018-2020. OMAR BRIQA

#include<iostream>
#include<cmath>

using namespace std;

int main(){
	
	double v1[3], v2[3], x, y, z, a, A[3], B[3], C[3];
	int n, n1;

	cout << "// APLICACIONS DEL PRODUCTE VECTORIAL\n// TREBALL DE RECERCA 2018-2020. OMAR BRIQA\n" << endl;
	
	a:cout << "Escull alguna de les aplicacions del producte vectorial: \n" << endl;
	
	cout << "1. Producte vectorial\n2. Vector perpendicular a dos vectors mes\n3. Area d'un parallelogram\n4. Area d'un triangle\n" << endl;
	cin >> n;
	
		switch(n){
			
			case 1:
				
				cout << "\nTecleji les coordenades del primer vector: \n" << endl;
						
					for ( int i = 0; i < 3; i++ ){
								
						cin >> v1[i];
								
					}
							
				cout << "\nTecleji les coordenades del segon vector: \n" << endl;
						
					for ( int i = 0; i < 3; i++ ){
								
						cin >> v2[i];
								
					}
					
				x = v1[1] * v2[2] - v2[1] * v1[2];
				y = -( v1[0] * v2[2] - v2[0] * v1[2] );
				z = v1[0] * v2[1] - v2[0] * v1[1];	
				
				cout << "\nEl producte vectorial es de {" << x << "," << y << "," << z << "}\n" << endl;
				
			
			break;
			
			case 2:
				
				cout << "\nTecleji les coordenades del primer vector: \n" << endl;
						
					for ( int i = 0; i < 3; i++ ){
								
						cin >> v1[i];
								
					}
							
				cout << "\nTecleji les coordenades del segon vector: \n" << endl;
						
					for ( int i = 0; i < 3; i++ ){
								
						cin >> v2[i];
								
					}
					
				x = v1[1] * v2[2] - v2[1] * v1[2];
				y = -( v1[0] * v2[2] - v2[0] * v1[2] );
				z = v1[0] * v2[1] - v2[0] * v1[1];	
				
				cout << "\nEl vector perpendicular es {" << x << "," << y << "," << z << "} o qualsevol de proporcional a aquest\n" << endl;
				
			break;	
			
			case 3:
				
				cout << "\nEscrigui els dos vectors que definiexen el parallelogram:\n" << endl;
										
					for ( int i = 0; i < 3; i++ ){
								
						cin >> v1[i];
								
					}
					
					cout << endl;		
													
					for ( int i = 0; i < 3; i++ ){
								
						cin >> v2[i];
								
					}
				
						x = v1[1] * v2[2] - v2[1] * v1[2];
						y = -( v1[0] * v2[2] - v2[0] * v1[2] );
						z = v1[0] * v2[1] - v2[0] * v1[1];
						
				a = sqrt( pow(x,2) + pow(y,2) + pow(z,2) );
				
				cout << "\nL'area del parallelogram es de " << a << " unitats quadrades\n" << endl;		
				
			break;	
			
			case 4:
				
				b:cout << "\nQue tens? \n\nEls vertex del triangle [tecleji 1]\nEls seus vectors [tecleji 2]\n" << endl;
				cin >> n1;
				
					if ( n1 == 1 ){
						
						cout << "\nIntrodueix els tres vertex que formen el triangles:\n" << endl;
						
							for ( int i = 0; i < 3; i++ ){
								
								cin >> A[i];
								
							}
							
							cout << endl;
							
							for ( int i = 0; i < 3; i++ ){
								
								cin >> B[i];
								
							}
							
							cout << endl;
							
							for ( int i = 0; i < 3; i++ ){
								
								cin >> C[i];
								
							}
						
						for ( int i = 0; i < 3; i++ ){
							
							v1[i] = B[i] - A[i];
							
						}
						
						for ( int i = 0; i < 3; i++ ){
							
							v2[i] = C[i] - A[i];
							
						}
						
							x = v1[1] * v2[2] - v2[1] * v1[2];
							y = -( v1[0] * v2[2] - v2[0] * v1[2] );
							z = v1[0] * v2[1] - v2[0] * v1[1];
							
						
						a = sqrt( ( pow(x,2) + pow(y,2) + pow(z,2) ) )  / 2;
					
						cout << "\nL'area del triangle es de " << a << " unitats quadrades\n" << endl;		

					
					}
					
					else if ( n1 == 2 ){
						
						cout << "\nIntrodueix els dos vectors que formen el triangles:\n" << endl;

							for ( int i = 0; i < 3; i++ ){
									
								cin >> v1[i];
								
							}
					
							cout << endl;		
													
							for ( int i = 0; i < 3; i++ ){
								
								cin >> v2[i];
								
							}
				
						x = v1[1] * v2[2] - v2[1] * v1[2];
						y = -( v1[0] * v2[2] - v2[0] * v1[2] );
						z = v1[0] * v2[1] - v2[0] * v1[1];
						
						a = sqrt( pow(x,2) + pow(y,2) + pow(z,2) )  / 2;
					
						cout << "\nL'area del triangle es de " << a << " unitats quadrades\n" << endl;	
					}
					
					else{
						
						cout << "\nL'opcio escollida no esta disponible\n" << endl;
						goto b;
						
					}
				
			break;	
			
			default:
				
				cout << "\nL'opcio escollida no esta disponible\n" << endl;
				goto a;
				
			break;	
			
		}
	
	

	system("pause");
	return 0;
}
