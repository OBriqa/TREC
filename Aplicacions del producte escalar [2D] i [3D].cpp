//APLICACIONS DEL PRODUCTE ESCALAR [2D] I [3D]
//TREBALL DE RECERCA 2018-2020. OMAR BRIQA

#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main(){
	
	const long double PI = 3.141592653589793238;
	double v1[2], v2[2], vp[2], v3[3], v4[3], a, Pe1, Pe2, V[3], U[3], Puv[3], p1[2], p2[2];
	int n, n1; 
	
	cout << "//APLICACIONS DEL PRODUCTE ESCALAR [2D] I [3D]\n//TREBALL DE RECERCA 2018-2020. OMAR BRIQA\n" << endl;
	
	a:cout << "Escull alguna de les aplicacions del producte escalar: \n" << endl;
	
	cout << "1. Producte escalar\n2. Angles que formen dos vectors\n3. Projeccio d'un vector V sobre un altre vector U\n4. Vector perpendicular [2D]\n" << endl;
	cin >> n;
		
		switch(n){
			
			case 1:
				
				b:cout << "\nEn quantes dimensions treballaras [2] o [3] ?\n" << endl;
				cin >> n1;
				
					if ( n1 == 2 ){
						
						cout << "\nTecleji les coordenades del primer vector: \n" << endl;
						
							for ( int i = 0; i < 2; i++ ){
								
								cin >> v1[i];
								
							}
							
						cout << "\nTecleji les coordenades del segon vector: \n" << endl;
						
							for ( int i = 0; i < 2; i++ ){
								
								cin >> v2[i];
								
							}	
							
						
						Pe1 = ( v1[0] * v2[0] ) + ( v1[1] * v2[1] );
											
						cout << "\nEl producte escalar entre els dos vectors es de " << Pe1 << " unitats\n" << endl;
							
						
					}
					
					else if( n1 == 3 ){
						
						cout << "\nTecleji les coordenades del primer vector: \n" << endl;
						
							for ( int i = 0; i < 3; i++ ){
								
								cin >> v3[i];
								
							}
							
						cout << "\nTecleji les coordenades del segon vector: \n" << endl;
						
							for ( int i = 0; i < 3; i++ ){
								
								cin >> v4[i];
								
							}
							
						Pe2 = ( v3[0] * v4[0] ) + ( v3[1] * v4[1] ) + ( v3[2] * v4[2] );				
						
						cout << "\nEl producte escalar entre els dos vectors es de " << Pe2 << " unitats\n" << endl;
			
					}
					
					else{
						
						cout << "\nL'opcio escollida no esta disponible\n" << endl;
						goto b;
						
					}
				
			break;
			
			case 2:
				
				c:cout << "\nEn quantes dimensions treballaras [2] o [3] ?\n" << endl;
				cin >> n1;
				
					if ( n1 == 2 ){
						
						cout << "\nTecleji les coordenades del primer vector: \n" << endl;
						
							for ( int i = 0; i < 2; i++ ){
								
								cin >> v1[i];
								
							}
							
						cout << "\nTecleji les coordenades del segon vector: \n" << endl;
						
							for ( int i = 0; i < 2; i++ ){
								
								cin >> v2[i];
								
							}
							
						a = ( acos( ( ( v1[0] * v2[0] ) + ( v1[1] * v2[1] ) ) / ( sqrt( pow( v1[0], 2 ) + pow( v1[1], 2 ) ) * sqrt( pow( v2[0], 2) + pow( v2[1], 2 ) ) ) ) ) * 180/PI;
						
						cout << "\nL'angle que formen els dos vectors es de " << a  << " graus.\n" << endl;
	
					
					}
					
					else if ( n1 == 3 ){
						
						cout << "\nTecleji les coordenades del primer vector: \n" << endl;
						
							for ( int i = 0; i < 3; i++ ){
								
								cin >> v3[i];
								
							}
							
						cout << "\nTecleji les coordenades del segon vector: \n" << endl;
						
							for ( int i = 0; i < 3; i++ ){
								
								cin >> v4[i];
								
							}
						
						a = ( acos( ( ( ( v3[0] * v4[0] ) + ( v3[1] * v4[1] ) + ( v3[2] * v4[2] ) ) / ( sqrt( pow( v3[0], 2 ) + pow( v3[1], 2 ) + pow( v3[2], 2 ) ) * sqrt( pow( v4[0], 2 ) + pow( v4[1], 2 ) + pow( v4[2], 2 ) )  ) )) * 180/PI );
						
						cout << "\nL'angle que formen els dos vectors es de " << a << " graus.\n" << endl;
													
					}
					
					else{
						
						cout << "\nL'opcio escollida no esta disponible\n" << endl;
						goto c;	
						
					}
				
				
			break;
			
			case 3:
			
				cout << "\nTecleji les coordenades del vector U: \n" << endl;
						
					for ( int i = 0; i < 3; i++ ){
								
						cin >> U[i];
								
					}
									
				cout << "\nTecleji les coordenades del vector V: \n" << endl;
						
					for ( int i = 0; i < 3; i++ ){
								
						cin >> V[i];
								
					}
					
				for ( int i = 0; i < 3; i++ ){
					
					Puv[i] = ( ( ( U[0] * V[0] ) + ( U[1] * V[1] ) + ( U[2] * V[2] ) ) / ( sqrt( pow( U[0], 2 ) + pow( U[1], 2 ) + pow( U[2], 2 ) ) ) ) * U[i];
					
				}
				
				cout << "\nEl vector projeccio de [" << V[0] << "," << V[1] << "," << V[2] << "] sobre [" << U[0] << "," << U[1] << "," << U[2] << "] es { " << setprecision(3) << Puv[0] << ", " << Puv[1] << ", " << Puv[2] << " }\n" << endl; 
				
			
			break;
			
			case 4:
			
				cout << "\nTecleji les coordenades del vector que vol calcular-li els perpendiculars: \n" << endl;
						
					for ( int i = 0; i < 2; i++ ){
								
						cin >> v1[i];
								
					}
					
				p1[0] = -v1[1]; 
				p1[1] = v1[0];
				
				p2[0] = v1[1];
				p2[1] =	-v1[0];
				
				cout << "\nEls dos vector perpendiculars a [" << v1[0] << "," << v1[1] << "] son {" << p1[0] << "," << p1[1] << "} i {" << p2[0] << "," << p2[1] << "}\n" << endl; 
			
			break;	
			
			default: 
			
				cout << "\nL'opcio escollida no esta disponible\n" << endl;
				goto a;
				
			break;
		} 
	
	
	
	
	
	
	
	system("pause");
	return 0;
}

