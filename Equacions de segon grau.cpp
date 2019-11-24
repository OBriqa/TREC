//APLICACIÓ QUE PERMET SOLUCIONAR EQUACIONS DE SEGON GRAU COMPLETES 
//TREBALL DE RECERCA 2018-2020. OMAR BRIQA

#include<iostream> 
#include<cmath> 

using namespace std; 

int main(){
	
	long double a, b, c, r1, r2;
	
		cout << "//APLICACIO QUE PERMET SOLUCIONAR EQUACIONS DE SEGON GRAU COMPLETES\n//TREBALL DE RECERCA 2018-2020. OMAR BRIQA\n";
	
		cout<< "\nAquest programa resol equacions de segon grau completes." << endl;
		cout<< "A continuacio teclejeu les dades que us demana." << endl;
		
		cout<< "\nValor del factor x al quadrat: ";
		cin>> a;
		cout<< "\nValor del factor x: ";
		cin>> b;
		cout<< "\nValor del terme independent: ";
			cin>> c;
		
			
			r1 = (-b + sqrt(pow(b,2) - 4*a*c)) / (2*a);
			r2 = (-b - sqrt(pow(b,2) - 4*a*c)) / (2*a);
	
				
				
				if( (pow(b,2)) < (4*a*c) ){
				
					cout<< "\nEl resultat no es real. No te solucio.\n" << endl;
				}	
				
				else if( a == 0){
					
					cout<< "\nNo es una equacio de segon grau.\n" << endl;
			
				}
					
				else if( r1 == r2 ){
					
					cout<< "\nEls dos resultats son: " << r1 << "\n" << endl;
					
				}	
				
				else{
						
					cout<< "\nEl primer resultat es: " << r1 << "\n" << endl;
					cout<< "El segon resultat es: " << r2 << "\n" << endl;	
						
				}
						
						
			
			
				
	system("pause");
	return 0;
}

