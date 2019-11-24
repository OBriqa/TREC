// PROGRAMA QUE CALCULA L'ARREL D'UNA FUNCIÓ EN UN INTERVAL DETERMINAT APLICANT EL TEOREMA DE BOLZANO
// TREBALL DE RECERCA 2018-2020. OMAR BRIQA

// AQUEST PROGRAMA UTILITZA EL MÉTODE DE LA BISECCIO, LLAVORS SI EN UN INTERVAL HI HA MÉS D'UNA ARREL ES PRODUEIX UN ERROR JA QUE NOMÈS TREBALLA AMB UNA SECCIÓ,
// AIXÓ FA QUE IMPRIMEIXI EL VALOR DE ZERO. PER EVITAR AQUEST TIPUS D'ERRORS DIGITI UN INTERVAL NO MOLT GRAN

#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main(){    

    long double a, b, c, Ia, Ib, Ic, x, x3, x2, x1, n, A, B, C;   
    
    cout << "// PROGRAMA QUE CALCULA L'ARREL D'UNA FUNCIO EN UN INTERVAL DETERMINAT APLICANT EL TEOREMA DE BOLZANO\n// TREBALL DE RECERCA 2018-2020. OMAR BRIQA\n";
    
    cout << "\nEscrigui la funcio de omplint els buits que necesiti, senyalats amb un dolar. " << endl;
	
	cout << "\nF(x) = $x^3 $x^2 $x $" << endl << endl;
	cin >> x3 >> x2 >> x1 >> n;
    
  	 	a:cout << "\nIntrodueix l'interval [a,b]\n" << endl;
   		cin >> a >> b;  
		   
		A = x3 * pow(a,3) + x2 * pow(a,2) + x1 * a + n;
    	B = x3 * pow(b,3) + x2 * pow(b,2) + x1 * b + n;   
		               
   			if ( ( A * B ) > 0 ){     
			    
       			cout << "\nEn aquest interval no hi ha cap arrel. \n"<<endl;
				goto a;     // Funció que serveix per retornar a la línia 24      
			
			}
				
   			else{
   			
				while ( fabs ( a - b ) >= 0.0000000001 ){  // Definir la precisió de l'arrel
					
        			c= ( ( a + b ) / 2);      
					
							C = x3 * pow(c,3) + x2 * pow(c,2) + x1 * c + n;

       						Ia = A;        
       						Ib = B;
       						Ic = C;
       				
      					if ( Ic == 0 ){
      						
            				cout << "\nL'arrel en aquest interval es " << setprecision(15) << c << endl; 
        					break;
        					
						}
						
						else{
						
							if ( Ia * Ic > 0){
       						
        				    	a = c;    
       
	   						}
    
					  		else if ( Ia * Ic < 0 ){
						    
          						b = c;    
     
	 				   		}    
        
    
 			 			  }
 			   
 				}
 
 			   		cout<<"\nL'arrel en aquest interval es "<< setprecision(10) << c << endl << endl;    

 			   
 			}
 		
    
    system("pause");
	return 0;    
}


