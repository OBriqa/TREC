// CÀLCUL D'ÀREES I VOLUMS
// TREBALL DE RECERCA 2018-2020. OMAR BRIQA

#include<iostream>
#include<iomanip>// setprecision
#include<cmath>

using namespace std;

int main(){
	
	const long double PI = 3.141592653589793238;
	int opcion, area, volum, perimetre;
	float a1, q1, a2, r1, r2, a3, t1, t2, rb1, rb2, a4, z1, pn1, pn2, pn3, pn4, pn5, a5, k1, a6, tr1, tr2, tr3, a7;
	float v1, c1, v2, p1, p2, p3, v3, e1, cl1, cl2, v4, cn1, cn2, v5;

		
		cout << "// CALCUL D'AREES, VOLUMS \n// TREBALL DE RECERCA 2018-2020. OMAR BRIQA" << endl;
		
		a:cout<< "\nEsculli una opcio.\n " << endl;
		cout<< "1. Arees\n2. Volums\n" << endl;	
		cin>> opcion;
	
			switch(opcion){
				
				case 1: 
					b:cout << "\nEsculli una figura per calcular la seva area " << endl;
					cout << "\n1. Quadrat\n2. Rectangle\n3. Triangle\n4. Rombe\n5. Poligon Regular\n6. Cercle\n7. Trapezi\n8. Torna al menu principal\n" << endl;
					cin >> area;
						
						switch(area){
							
							case 1: 
								cout << "\nEscrigui la mesura del costat del quadrat: " ;
								cin >> q1;
								
								a1 = pow(q1,2);
							
								cout << "\nL'area del quadrat es de " << a1 << " unitats quadrades\n" << endl;
							
							break;
							
							
							case 2:
								cout << "\nEscrigui les mesures del rectangle: " << endl;
								cin >> r1 >> r2;
								
								a2 = r1 * r2 ;
								
								cout << "\nL'area del rectangle es de " << a2 << " unitats quadrades\n" << endl;
							
							break;	
							
							
							case 3:
								cout << "\nEscrigui la mesura de la base del triangle: "; cin>> t1;
								cout << "\nEscrigui la mesura de l'altura del triangle: " ; cin>> t2;

								a3 = ( (t1 * t2) / 2 ) ;
								
								cout << "\nL'area del triangle es de " << a3 << " unitats quadrades\n" << endl;		
								
							break;	
							
							case 4: 
								cout << "\nEscrigui la mesura de la diagonal gran: "; cin>> rb1;							
								cout << "\nEscrigui la mesura de la diagonal petita: "; cin>> rb2;							
							
								a4 = ( ( rb1 * rb2 ) / 2 ) ;
							
								cout << "\nL'area del rombe es de "  << a4 << " unitats quadrades\n" << endl;
								
							break;
							
							
							case 5:
								
								cout << "\nTens el perimetre del poligon? [ Si = 1 ]  [ No = 0 ] = "; cin>> z1;
							
									if( z1 == 1 ) {
									
										cout << "\nEscrigui el valor del perimetre: "; cin>> pn1;
										cout << "\nEscrigui la mesura de l'apotema: "; cin>> pn2;
									
											a5 = ( ( pn1 * pn2 ) / 2);
											
									} 
							
									else{
									
										cout << "\nQuants costats te el poligon: "; cin>> pn3;
										cout << "\nMesura de cada costat: "; cin>> pn4;
										cout << "\nEscrigui la mesura de l'apotema: "; cin>> pn5;
										
											a5 =  ( ( pn3 * pn4 * pn5 ) / 2);
									}
								
								cout << "\nL'area del poligon es de " << a5 << " unitats quadrades\n" << endl;
								
							break;
							
							
							case 6:
								
								cout <<"\nEscrigui la mesura del radi: "; cin>> k1;
								
									a6 = ( PI * ( pow(k1,2)) );
									
								cout <<"\nL'area del cercle es de " << setprecision(10) << a6 << " unitats quadrades.\n" << endl;							
							
							break;
							
							
							case 7: 
							
								cout << "\nEscrigui el valor del costat gran: "; cin>> tr1;
								cout << "\nEscrigui el valor del costat petit: "; cin>> tr2;
								cout << "\nEscrigui el valor de l'altura del trapezi: "; cin>> tr3;
								
									a7 = ( ( (tr1 + tr2) / 2 ) * tr3  );
									
								cout << "\nL'area del trapezi es de " << a7 << " unitats quadrades.\n" << endl; 
								
							break;	
							
							case 8:
								
								goto a;
								
							break;	
							
							default:
							
								cout << "\nL'opcio escollida no esta disponible\n" << endl;
								goto b;	 				
						}
					
						
				break;		
						
				
				case 2: 
				
					c:cout << "\nEsculli una figura per calcular el seu volum " << endl;
					cout << "\n1. Cub\n2. Prisma rectangular\n3. Esfera\n4. Cilindre\n5. Con\n6. Torna al menu principal\n" << endl;
					cin >> volum;
				
						switch(volum){
							
							case 1: 
								cout << "\nEscrigui la mesura del costat del cub: " ;
								cin >> c1;
								
								v1 = pow(c1,3);
							
								cout << "\nEl volum del cub es de " << v1 << " unitats cubiques\n" << endl;
					
							break;	
							
							
							case 2: 
								cout << "\nEscrigui la mesura del primer costat de la base del prisme: " ; cin>> p1;
								cout << "\nEscrigui la mesura del segon costat de la base del prisme: " ; cin>> p2;
								cout << "\nEscrigui la mesura de l'altura del prisme del prisme: " ; cin>> p3;
									
								v2 = p1 * p2 * p3;
							
								cout << "\nEl volum del prisme rectangular es de " << v2 << " unitats cubiques\n" << endl;		
							
							break;
							
							
							case 3:
								cout << "\nEscrigui la mesura del radi de l'esfera: " ; cin >> e1;
								
								v3 = (( 4 * PI * ( pow( e1 ,3 )  )  ) / 3 );
								
								cout << "\nEl volum de l'esfera es de " << setprecision(10) << v3 << " unitats cubiques\n" << endl;
							
							break;	
							
							
							case 4: 
							
								cout << "\nEscrigui la mesura del radi: "; cin>> cl1;
								cout << "\nEscrigui la mesura de l'altura del cilindre: "; cin>> cl2;
								
								v4 =  ( PI * ( pow(cl1,2)) * cl2 );
								
								cout << "\nEl volum del cilindre es de " << setprecision(10) << v4 << " unitats cubiques\n" << endl;
								
							break;
							
							
							case 5:
								
								cout << "\nEscrigui la mesura del radi de la circumferncia base: "; cin>> cn1;
								cout << "\nEscrigui la mesura de l'altura del con: "; cin>> cn2;
							
								v5 = ( ( PI * ( pow(cn1,2)) * cn2 ) / 3 );
								
								cout << "\nEl volum del con es de " << setprecision(10) << v5 << " unitats cubiques\n" << endl;
								
							break;	
							
							case 6:
								
								goto a;
								
							break;
							
							
							default:
							
								cout << "\nL'opcio escollida no esta disponible\n" << endl;
								goto c; 
								
						}
						
				break;
				
			default:
							
				cout << "\nL'opcio escollida no esta disponible\n" << endl;	
				goto a;
					
			}
	
	system("pause");
	return 0;
}
