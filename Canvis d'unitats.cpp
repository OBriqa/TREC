//PROGRAMA PER A FER CAMBIS D'UNITATS JA SIGUI DE PES, MONEDA, LONGITUD......
//TREBALL DE RECERCA 2018-2020. OMAR BRIQA

#include<iostream>
#include<iomanip> // setprecision

using namespace std;

int main(){
	
	int opcio, longitud, Massa, moneda, temperatura, energia, velocitat, angles, potencia, pressio, m1;
	long double a, m2, m3, m4, m5;
		
		cout << "//PROGRAMA PER A FER CAMBIS D'UNITATS JA SIGUI DE PES, MONEDA, LONGITUD......\n//TREBALL DE RECERCA 2018-2020. OMAR BRIQA\n";
		
		a:cout<< "\nEsculli una opcio.\n " << endl; 
		cout<< "1. Longitud\n2. Pes i massa\n3. Moneda\n4. Temperatura\n5. Energia\n6. Velocitat\n7. Potencia\n8. Angles\n9. Pressio\n" << endl;	
		cin>> opcio;
		
			switch(opcio){
				
					case 1: 
					b:cout << "\nEsculli un canvi.\n" << endl;
					cout << "1. Metres --> Milles ||  Milles --> Metres\n2. Centimetres --> Polzades || Polzades --> Centimetres\n";
					cout << "3. Peus --> Metres || Metres --> Peus\n4. Iardes --> Metres || Metres --> Iardes\n5. Peus -- > Iardes || Iardes --> Peus\n6. Torna al menu principal\n" << endl;
					cin >> longitud;
						
						switch(longitud){
							
							case 1:
							 
								cout << "\nEsculli una opcio:\n";
								cout << "\n1. Metres --> Milles\n2. Milles --> Metres\n" << endl;
								cin>> m1;
								
									if( m1 == 1){
										
										cout << "\nEscrigui el nombre de metres: "; cin>> m2;
										
											m3 = m2 * 0.000621371;
											
												cout << "\n";
											
										cout << m2 << " metre(s) son " << setprecision(15) << m3 << " milles.\n" << endl;	
										
									}
									
									else{
										
										cout << "\nEscrigui el nombre de milles: "; cin>> m4;
										
											m5 = m4 * 1.609,344;
											
											cout << "\n";
											
										cout << m4 << " mille(s) son " << setprecision(15) << m5 << " metres.\n" << endl;
										
									}
							
							break;
							
							
							case 2: 	
							
								cout << "\nEsculli una opcio:\n";
								cout << "\n1. Centimetres --> Polzades\n2. Polzades --> Centimetres\n" << endl;
								cin>> m1;
								
									if( m1 == 1){
										
										cout << "\nEscrigui el nombre de centimetres: "; cin>> m2;
										
											m3 = m2 * 0.393701;	
											
											cout << "\n";
									
										cout << m2 << " centimetre(s) son " << setprecision(15) << m3 << " polzades.\n" << endl;
										
									}
										
									else{
										
										cout << "\nEscrigui el nombre de polzades: "; cin>> m4;
										
											m5 = m4 * 2.54;
											
											cout << "\n";
											
										cout << m4 << " polzade(s) son " << setprecision(15) << m5 << " centimetres.\n" << endl;
										
									}
									
							break;
								
							
							case 3:
									
								cout << "\nEsculli una opcio:\n";
								cout << "\n1. Peus --> Metres\n2. Metres --> Peus\n" << endl;
								cin>> m1;
								
									if( m1 == 1){
										
										cout << "\nEscrigui el nombre de peus: "; cin>> m2;
										
											m3 = m2 * 0.3048;	
											
											cout << "\n";
									
										cout << m2 << " peu(s) son " << setprecision(15) << m3 << " metres.\n" << endl;
										
									}
										
									else{
										
										
										cout << "\nEscrigui el nombre de metres: "; cin>> m4;
										
											m5 = m4 * 3.28084;
											
											cout << "\n";
											
										cout << m4 << " metre(s) son " << setprecision(15) << m5 << " peus.\n" << endl;
										
									}
									
							break;
							
							
							case 4:
							
								cout << "\nEsculli una opcio:\n";
								cout << "\n1. Iardes --> Metres\n2. Metres --> Iardes\n" << endl;
								cin>> m1;
								
									if( m1 == 1){
										
										cout << "\nEscrigui el nombre de iardes: "; cin>> m2;
										
											m3 = m2 * 0.9144;
											
											cout << "\n";		
									
										cout << m2 << " yarde(s) son " << setprecision(15) << m3 << " metres.\n" << endl;
										
									}
									
										
									else{
										
										cout << "\nEscrigui el nombre de metres: "; cin>> m4;
										
											m5 = m4 * 1.093613;
											
											cout << "\n";
											
										cout << m4 << " metre(s) son " << setprecision(15) << m5 << " iardes.\n" << endl;
										
									}	
									
							break;
									
									
							case 5:
								
								cout << "\nEsculli una opcio:\n";
								cout << "\n1. Peus -- > Iardes\n2. Iardes --> Peus\n" << endl;
								cin>> m1;
								
									if( m1 == 1){
										
										cout << "\nEscrigui el nombre de peus: "; cin>> m2;
										
											m3 = m2 * 0.3333333333333;	
											
											cout << "\n";	
									
										cout << m2 << " peu(s) son " << setprecision(5) << m3 << " iardes.\n" << endl;
										
									}
									
										
									else{
										
										cout << "\nEscrigui el nombre de iardes: "; cin>> m4;
										
											m5 = m4 * 3;
											
											cout << "\n";
											
										cout << m4 << " iardes(s) son " << setprecision(15) << m5 << " iardes.\n" << endl;
										
										
									} 
									
							break;
							
								
							case 6:
								
								goto a;
								
							break;	
							
							
							default: 
							
								cout << "\nL'opcio escollida no esta dispnible.\n" << endl;
								goto b;
								
							break;	
							
				
					
					}
				
			
						break;		
			
					
					case 2: 
					c:cout << "\nEsculli un canvi.\n" << endl;
					cout << "1. Quilograms  --> Lliures ||  Lliures --> Quilograms\n2. Quilograms --> Unces || Unces --> Quilograms\n";
					cout << "3. Quirats --> Quilograms || Quilograms --> Quirats\n4. Lliures --> Unces || Unces --> Lliures\n5. Torna al menu principal\n" << endl;	
					cin >> Massa;
					
						switch(Massa){
							
							case 1:
							 
								cout << "\nEsculli una opcio:\n";
								cout << "\n1. Quilograms  --> Lliures\n2. Lliures --> Quilograms\n" << endl;
								cin>> m1;
								
									if( m1 == 1){
										
										cout << "\nEscrigui el nombre de quilograms: "; cin>> m2;
										
											m3 = m2 * 2.204623;
											
											cout << "\n";
											
										cout << m2 << " quilogram(s) son " << setprecision(15) << m3 << " lliures.\n" << endl;	
										
									}
									
									else{
										
										cout << "\nEscrigui el nombre de lliures: "; cin>> m4;
										
											m5 = m4 * 0.453592;
											
											cout << "\n";
											
										cout << m4 << " lliure(s) son " << setprecision(15) << m5 << " quilograms.\n" << endl;
										
									}
							
							break;
							
							
							case 2:
							 
								cout << "\nEsculli una opcio:\n";
								cout << "\n1. Quilograms --> Unces\n2. Unces --> Quilograms\n" << endl;
								cin>> m1;
								
									if( m1 == 1){
										
										cout << "\nEscrigui el nombre de quilograms: "; cin>> m2;
										
											m3 = m2 * 35.27396;
											
											cout << "\n";
											
										cout << m2 << " quilogram(s) son " << setprecision(15) << m3 << " unces.\n" << endl;	
										
									}
									
									else{
										
										cout << "\nEscrigui el nombre de unces: "; cin>> m4;
										
											m5 = m4 * 0.0283495;	
											
											cout << "\n";
											
										cout << m4 << " lliure(s) son " << setprecision(15) << m5 << " quilogram.\n" << endl;
										
									}
									
							break;		
					
										
							
							case 3:
							 
								cout << "\nEsculli una opcio:\n";
								cout << "\n1. Quirats --> Quilograms\n2. Quilograms --> Quirats\n" << endl;
								cin>> m1;
								
									if( m1 == 1){
										
										cout << "\nEscrigui el nombre de quirats: "; cin>> m2;
									
											m3 = m2 * 0.0002;
											
											cout << "\n";
											
										cout << m2 << " quirat(s) son " << setprecision(15) << m3 << " quilograms.\n" << endl;	
										
									}
									
									else{
										
										cout << "\nEscrigui el nombre de quilograms: "; cin>> m4;
										
											m5 = m4 * 5000;	
											
											cout << "\n";
											
										cout << m4 << " quilogram(s) son " << setprecision(15) << m5 << " quirats.\n" << endl;
										
									}
									
							break;	
							
							
							case 4:
							 
								cout << "\nEsculli una opcio:\n";
								cout << "\n1. Lliures --> Unces\n2. Unces --> Lliures\n" << endl;
								cin>> m1;
								
									if( m1 == 1){
										
										cout << "\nEscrigui el nombre de lliures: "; cin>> m2;
										
											m3 = m2 * 16;
											
											cout << "\n";
											
										cout << m2 << " lliure(s) son " << setprecision(15) << m3 << " unces.\n" << endl;	
										
									}
									
									else{
										
										cout << "\nEscrigui el nombre de unces: "; cin>> m4;
										
											m5 = m4 * 0.0625;	
											
											cout << "\n";
											
										cout << m4 << " unce(s) son " << setprecision(15) << m5 << " lliures.\n" << endl;
										
									}
									
							break;
						
							case 5:
								
								goto a;
								
							break;	
						
						
							default: 	
								
								cout << "\nL'opcio escollida no esta dispnible.\n" << endl;
								goto c;
							
							break;	
								
						}
						
				
						break;
				
				
					case 3:
					d:cout << "\n// EQUIVALENCIA ENTRE MONEDES ACTUALITZADA EL 18/08/2019. PODEN HAVER-HI RESULTATS ERRONIS DEGUTS A CANVIS DEL VALOR DE CADA MONEDA //" << endl;
					cout << "\nEsculli un canvi.\n" << endl;
					cout << "1. Euro (EU) --> Dolar (US) || Dolar (US) --> Euro (EU)\n2. Euro (EU) --> Lliura (UK) || Lliura (UK) --> Euro (EU)\n";
					cout << "3. Euro (EU) --> Dirham (MA) || Dirham (MA) --> Euro (EU)\n4. Euro (EU) --> Peso (MX) || Peso (MX) --> Euro (EU)\n";
					cout << "5. Euro (EU) --> Pes (AR) || Euro (EU) --> Pes (AR)\n6. Euro (EU) --> Iuan (CN) || Iuan (CN) --> Euro (EU)\n";
					cout << "7. Euro (EU) --> Ien (JP) || Ien (JP) --> Euro (€)\n8. Euro (EU) --> Ruble (RU) || Ruble (RU) --> Euro (EU)\n";
					cout << "9. Euro (EU) --> Corona (SE) || Corona (SE) --> Euro (EU)\n10. Euro (EU) --> Franc (CH) || Franc (CH) --> Euro (EU)\n11. Torna al menu principal\n" << endl;
					cin >> moneda;
				
						switch(moneda){ 
								
							case 1:
							 
							cout << "\nEsculli una opcio:\n";
							cout << "\n1. Euro (EU) --> Dolar (US)\n2. Dolar (US) --> Euro (EU)\n" << endl;
							cin>> m1;
								
								if( m1 == 1){
									
									cout << "\nEscrigui el nombre de euros: "; cin>> m2;
									
										m3 = m2 * 1.1091;
										
										cout << "\n";
											
										cout << m2 << " euro(s) son " << setprecision(5) << m3 << " dolars.\n" << endl;	
										
								}
									
								else{
										
									cout << "\nEscrigui el nombre de dolars: "; cin>> m4;
										
										m5 = m4 * 0.9016;	
											
										cout << "\n";
											
									cout << m4 << " dolar(s) son " << setprecision(5) << m5 << " euros.\n" << endl;
										
								}
									
							
							break;
							
							
							case 2:
							 
							cout << "\nEsculli una opcio:\n";
							cout << "\n1. Euro (EU) --> Lliura(UK)\n2. Lliura (UK) --> Euro (EU)\n" << endl;
							cin>> m1;
								
								if( m1 == 1){
									
									cout << "\nEscrigui el nombre de euros: "; cin>> m2;
									
										m3 = m2 * 0.9127;
										
										cout << "\n";
											
										cout << m2 << " euro(s) son " << setprecision(5) << m3 << " lliures.\n" << endl;	
										
								}
									
								else{
										
									cout << "\nEscrigui el nombre de lliures: "; cin>> m4;
										
										m5 = m4 * 1.0956;	
											
										cout << "\n";
											
									cout << m4 << " lliure(s) son " << setprecision(5) << m5 << " euros.\n" << endl;
										
								}
									
							
							break;
							
							
							case 3:
							 
							cout << "\nEsculli una opcio:\n";
							cout << "\n1. Euro (EU) --> Dirham (MA)\n2. Dirham (MA) --> Euro (EU)\n" << endl;
							cin>> m1;
								
								if( m1 == 1){
									
									cout << "\nEscrigui el nombre de euros: "; cin>> m2;
									
										m3 = m2 * 10.6723;
										
										cout << "\n";
											
										cout << m2 << " euro(s) son " << setprecision(5) << m3 << " dirhams.\n" << endl;	
										
								}
									
								else{
										
									cout << "\nEscrigui el nombre de dirhams: "; cin>> m4;
										
										m5 = m4 * 0.0936;	
											
										cout << "\n";
											
									cout << m4 << " dirham(s) son " << setprecision(5) << m5 << " euros.\n" << endl;
										
								}
									
							
							break;
							
							
							case 4:
							 
							cout << "\nEsculli una opcio:\n";
							cout << "\n1. Euro (EU) --> Pes (MX)\n2. Pes (MX) --> Euro (EU)\n" << endl;
							cin>> m1;
								
								if( m1 == 1){
									
									cout << "\nEscrigui el nombre de euros: "; cin>> m2;
									
										m3 = m2 * 21.7948;
										
										cout << "\n";
											
										cout << m2 << " euro(s) son " << setprecision(5) << m3 << " pesos.\n" << endl;	
										
								}
									
								else{
										
									cout << "\nEscrigui el nombre de pesos: "; cin>> m4;
										
										m5 = m4 * 0.0458;	
											
										cout << "\n";
											
									cout << m4 << " pes(os) son " << setprecision(5) << m5 << " euros.\n" << endl;
										
								}
									
							
							break;
							
							
							case 5:
							 
							cout << "\nEsculli una opcio:\n";
							cout << "\n1. Euro (EU) --> Pes (AR)\n2. Pes (AR) --> Euro (EU)\n" << endl;
							cin>> m1;
								
								if( m1 == 1){
									
									cout << "\nEscrigui el nombre de euros: "; cin>> m2;
									
										m3 = m2 * 60.8185;
										
										cout << "\n";
											
										cout << m2 << " euro(s) son " << setprecision(5) << m3 << " pesos.\n" << endl;	
										
								}
									
								else{
										
									cout << "\nEscrigui el nombre de pesos: "; cin>> m4;
										
										m5 = m4 * 0.0164;	
											
										cout << "\n";
											
									cout << m4 << " pes(os) son " << setprecision(5) << m5 << " euros.\n" << endl;
										
								}
									
							
							break;
							
							
							case 6:
							 
							cout << "\nEsculli una opcio:\n";
							cout << "\n1. Euro (EU) --> Iuan (CN)\n2. Iuan (CN) --> Euro (EU)\n" << endl;
							cin>> m1;
								
								if( m1 == 1){
									
									cout << "\nEscrigui el nombre de euros: "; cin>> m2;
									
										m3 = m2 * 7.8097;
										
										cout << "\n";
											
										cout << m2 << " euro(s) son " << setprecision(5) << m3 << " iuans.\n" << endl;	
										
								}
									
								else{
										
									cout << "\nEscrigui el nombre de iuans: "; cin>> m4;
										
										m5 = m4 * 0.1280;	
											
										cout << "\n";
											
									cout << m4 << " iuan(s) son " << setprecision(5) << m5 << " euros.\n" << endl;
										
								}
									
							
							break;
							
							
							case 7:
							 
							cout << "\nEsculli una opcio:\n";
							cout << "\n1. Euro (EU) --> Ien (JP)\n2. Ien (JP) --> Euro (€)\n" << endl;
							cin>> m1;
								
								if( m1 == 1){
									
									cout << "\nEscrigui el nombre de euros: "; cin>> m2;
									
										m3 = m2 * 117.9680;
										
										cout << "\n";
											
										cout << m2 << " euro(s) son " << setprecision(5) << m3 << " iens.\n" << endl;	
										
								}
									
								else{
										
									cout << "\nEscrigui el nombre de iens: "; cin>> m4;
										
										m5 = m4 * 0.0084;	
											
										cout << "\n";
											
									cout << m4 << " ien(s) son " << setprecision(5) << m5 << " euros.\n" << endl;
										
								}
									
							
							break;
							
							
							case 8:
							 
							cout << "\nEsculli una opcio:\n";
							cout << "\n1. Euro (EU) --> Ruble (RU)\n2. Ruble (RU) --> Euro (EU)\n" << endl;
							cin>> m1;
								
								if( m1 == 1){
									
									cout << "\nEscrigui el nombre de euros: "; cin>> m2;
									
										m3 = m2 * 73.7244;
										
										cout << "\n";
											
										cout << m2 << " euro(s) son " << setprecision(5) << m3 << " rubles.\n" << endl;	
										
								}
									
								else{
										
									cout << "\nEscrigui el nombre de rubles: "; cin>> m4;
										
										m5 = m4 * 0.0135;	
											
										cout << "\n";
											
									cout << m4 << " ruble(s) son " << setprecision(5) << m5 << " euros.\n" << endl;
										
								}
									
							
							break;	
							
							
							case 9:
							 
							cout << "\nEsculli una opcio:\n";
							cout << "\n1. Euro (EU) --> Corona (SE)\n2. Corona (SE) --> Euro (EU)\n" << endl;
							cin>> m1;
								
								if( m1 == 1){
									
									cout << "\nEscrigui el nombre de euros: "; cin>> m2;
									
										m3 = m2 * 10.7098;
										
										cout << "\n";
											
										cout << m2 << " euro(s) son " << setprecision(5) << m3 << " corones.\n" << endl;	
										
								}
									
								else{
										
									cout << "\nEscrigui el nombre de corones: "; cin>> m4;
										
										m5 = m4 * 0.0933;	
											
										cout << "\n";
											
									cout << m4 << " corona/es son " << setprecision(5) << m5 << " euros.\n" << endl;
										
								}
									
							
							break;
							
							
							case 10:
							 
							cout << "\nEsculli una opcio:\n";
							cout << "\n1. Euro (EU) --> Franc (CH)\n2. Franc (CH) --> Euro (EU)\n" << endl;
							cin>> m1;
								
								if( m1 == 1){
									
									cout << "\nEscrigui el nombre de euros: "; cin>> m2;
									
										m3 = m2 * 1.0849;
										
										cout << "\n";
											
										cout << m2 << " euro(s) son " << setprecision(5) << m3 << " francs.\n" << endl;	
										
								}
									
								else{
										
									cout << "\nEscrigui el nombre de francs: "; cin>> m4;
										
										m5 = m4 * 0.9216;	
											
										cout << "\n";
											
										cout << m4 << " franc(s) son " << setprecision(5) << m5 << " euros.\n" << endl;
										
								}
									
							
							break;
							
							case 11:
								
								goto a;
							
							break;	
							
							
							default: 
							
								cout << "\nL'opcio escollida no esta dispnible.\n" << endl;
								goto d;
							
							break;		
							
							
						}
						
						
						break;
						
						
					case 4:
					e:cout << "\nEsculli un canvi.\n" << endl;
					cout << "1. Graus Celsius --> Graus Kelvin || Graus Kelvin --> Graus Celsius\n2. Graus Kelvin --> Graus Fahrenheit || Graus Fahrenheit --> Graus Kelvin\n";
					cout << "3. Graus Celsius --> Graus Fahrenheit || Graus Fahrenheit --> Graus Celsius\n4. Torna al menu principal\n" << endl;
					cin >> temperatura;
					
						switch(temperatura){ 	
							
							
							case 1: 		// K = C + 273.15 // K = graus kelvins i C = graus celsius		
							
								cout << "\nEsculli una opcio:\n";
								cout << "\n1. Graus Celsius --> Graus Kelvin\n2. Graus Kelvin --> Graus Celsius\n" << endl;
								cin >> m1;
								
									if( m1 == 1 ){
										
										cout << "\nEscrigui el nombre de graus Celsius: "; cin >> m2;

										m3 = ( m2 + 273.15 );
										
										cout << "\n";
										
										cout << m2 << " grau(s) Celsius son: " << m3 << " graus Kelvin.\n" << endl;
										
										
									}
								
									
									else{
										
										cout << "\nEscrigui el nombre de graus Kelvin: "; cin >> m4;

										m5 = ( m4 - 273.15 ) ;
										
										cout << "\n";
										
										cout << m4 << " grau(s) Kelvin son " << m5 << " graus Celsius.\n" << endl;
										
									}
							
						
							break;
							
							
							case 2:			// F = ( K - 273.15 ) * 1.8 + 32 // K = graus kelvin i F = graus fahrenheit
								
								cout << "\nEsculli una opcio:\n";
								cout << "\n1. Graus Kelvin --> Graus Fahrenheit\n2. Graus Fahrenheit --> Graus Kelvin\n" << endl;
								cin >> m1;
								
									if( m1 == 1 ){
										
										cout << "\nEscrigui el nombre de graus Kelvin: "; cin >> m2;

										m3 = ( m2 - 273.15 ) * 1.8 + 32;
										
										cout << "\n";
										
										cout << m2 << " grau(s) Kelvin son " << m3 << " graus Fahrenheit.\n" << endl;
										
										
									}
								
									
									else{
										
										cout << "\nEscrigui el nombre de graus Fahrenheit: "; cin >> m4;

										m5 = ( ( m4 - 32 ) / 1.8 ) + 273.15;
										
										cout << "\n";
										
										cout << m4 << " grau(s) Fahrenheit son " << m5 << " graus Kelvin.\n" << endl;
										
									}
								
							break;	
						
							
							case 3:   		// F = 32 + 1,8 * C // C = graus celsius i F = graus fahrenheit
								
								cout << "\nEsculli una opcio:\n";
								cout << "\n1. Graus Celsius --> Graus Fahrenheit\n2. Graus Fahrenheit --> Graus Celsius\n" << endl;
								cin >> m1;
								
									if( m1 == 1 ){
										
										cout << "\nEscrigui el nombre de graus Celsius: "; cin >> m2;

										m3 = ( ( m2 * 1.8 ) + 32  );
										
										cout << "\n";
										
										cout << m2 << " grau(s) Celsius son " << m3 << " graus Fahrenheit.\n" << endl;
										
										
									}
								
									
									else{
										
										cout << "\nEscrigui el nombre de graus Fahrenheit: "; cin >> m4;

										m5 = ( m4 - 32 ) / ( 1.8 )  ;
										
										cout << "\n";
										
										cout << m4 << " grau(s) Fahrenheit son " << m5 << " graus Celsius.\n" << endl;
										
									}
							
							
							break;
							
							case 4:
								
								goto a;
						
							default: 
							
								cout << "\nL'opcio escollida no esta dispnible.\n" << endl;
								goto e;
							
							break;
								
							
							
						}
					
						
						break;
				
				
					case 5:
					f:cout << "\nEsculli un canvi.\n" << endl;
					cout << "1. Quilojoules --> Calories alimentaries || Calories alimentaries --> Quilojoules\n";
					cout << "2. Quilojoules --> Calories termiques || Calories termiques --> Quilojoules\n"; 
					cout << "3. Quilojoules --> Unitats termiques britaniques || Unitats termiques britaniques --> Quilojoules\n";
					cout << "4. Calories termiques --> Calories alimentaries || Calories alimentaries --> Calories termiques\n5. Torna al menu principal\n" << endl;
					cin >> energia;
						
						switch(energia){
							
							case 1:
							 
								cout << "\nEsculli una opcio:\n";
								cout << "\n1. Quilojoules --> Calories alimentaries\n2. Calories alimentaries --> Quilojoules\n";
								cin>> m1;
								
									if( m1 == 1){
										
										cout << "\nEscrigui el nombre de quilojoules: "; cin>> m2;
										
											m3 = m2 * 0.239006;
											
											cout << "\n";
											
										cout << m2 << " quilojoule(s) son " << setprecision(15) << m3 << " calories alimentaries.\n" << endl;	
										
									}
									
									else{
										
										cout << "\nEscrigui el nombre de calories alimenataries: "; cin>> m4;
										
											m5 = m4 * 4.184;
											
											cout << "\n";
											
										cout << m4 << " caloria/es alimentaria/es son " << setprecision(15) << m5 << " quilojoules.\n" << endl;
										
									}
							
							break;
							
							
							case 2:
								
								cout << "\nEsculli una opcio:\n";
								cout << "\n1. Quilojoules --> Calories termiques\n2. Calories termiques --> Quilojoules\n" << endl;
								cin>> m1;
								
									if( m1 == 1){
										
										cout << "\nEscrigui el nombre de quilojoules: "; cin>> m2;
										
											m3 = m2 * 239.0057;
											
											cout << "\n";
											
										cout << m2 << " quilojoule(s) son " << setprecision(15) << m3 << " calories termiques.\n" << endl;	
										
									}
									
									else{
									
										cout << "\nEscrigui el nombre de calories termiques: "; cin>> m4;
										
											m5 = m4 * 0.004184;
											
											cout << "\n";
											
										cout << m4 << " calories termiques son " << setprecision(15) << m5 << " quilojoules.\n" << endl;
										
									}
									
							break;
							
							
							case 3:
								
								cout << "\nEsculli una opcio:\n";
								cout << "\n1. Quilojoules --> Unitats termiques britaniques\n2. Unitats termiques britaniques --> Quilojoules\n" << endl;
								cin>> m1;	
								
									if( m1 == 1){
										
									cout << "\nEscrigui el nombre de quilojoules: "; cin>> m2;
									
										m3 = m2 * 0.947817;
										
										cout << "\n";
											
									cout << m2 << " quilojoule(s) son " << setprecision(15) << m3 << " calories termiques.\n" << endl;	
									
								}
									
									else{
									
									cout << "\nEscrigui el nombre de calories termiques: "; cin>> m4;
										
										m5 = m4 * 1.055056;
											
										cout << "\n";
										
									cout << m4 << " calories termiques son " << setprecision(15) << m5 << " quilojoules.\n" << endl;
									
								}
							
								
							break;
							
							
							case 4:
								
								cout << "\nEsculli una opcio:\n";
								cout << "\n1. Calories termiques --> Calories alimentaries\n2. Calories alimentaries --> Calories termiques\n" << endl;
								cin>> m1;	
								
									if( m1 == 1){
										
									cout << "\nEscrigui el nombre de calories termiques: "; cin>> m2;
									
										m3 = m2 * 0.001;
										
										cout << "\n";
											
									cout << m2 << " calories termiques son " << setprecision(15) << m3 << " calories alimentaries.\n" << endl;	
									
									}
									
									else{
									
									cout << "\nEscrigui el nombre de calories alimentaries: "; cin>> m4;
										
										m5 = m4 * 1000;
											
										cout << "\n";
										
									cout << m4 << " calories alimentaries son " << setprecision(15) << m5 << " calories termiques.\n" << endl;
									
								}
							
								
							break;
						
							case 5:
								
								goto a;
							
							break;	
							
							
							default:
								
								cout << "\nL'opcio escollida no esta dispnible.\n" << endl;
								goto f;
							
							break;
							
							
							
						}
						
						
						break;
						
						
					case 6:
					g:cout << "\nEsculli un canvi.\n" << endl;
					cout << "1. Metres per segon --> Quilometres per hora || Quilometres per hora --> Metres per segon\n";
					cout << "2. Metres per segon --> Milles per hora || Milles per hora --> Metres per segon\n";
					cout << "3. Quilometres per hora --> Nusos || Nusos --> Quilometres per hora\n";
					cout << "4. Quilometres per hora -- Peus per segon || Peus per segon --> Quilometres per hora\n";
					cout << "5. Metres per segon --> Mach[ v. del so ] || Mach[ v. del so ] --> Metres per segon\n";
					cout << "6. Peus per segon --> Milles per hora || Milles per hora --> Peus per segon\n";
					cout << "7. Nusos --> Milles per hora || Milles per hora --> Nusos\n8. Torna al menu principal\n" << endl;
					cin >> velocitat;
					
						switch(velocitat){
							
							case 1:
							 
								cout << "\nEsculli una opcio:\n";
								cout << "\n1. Metres per segon --> Quilometres per hora\n2. Quilometres per hora --> Metres per segon\n" << endl;
								cin>> m1;
								
									if( m1 == 1){
										
										cout << "\nEscrigui el nombre de metres per segon: "; cin>> m2;
										
											m3 = m2 * 3.6;
											
											cout << "\n";
											
										cout << m2 << " metre(s) per segon son " << setprecision(15) << m3 << " quilometres per hora.\n" << endl;	
										
									}
									
									else{
										
										cout << "\nEscrigui el nombre de quilometres per hora: "; cin>> m4;
										
											m5 = m4 * 0.277778;
											
											cout << "\n";
											
										cout << m4 << " quilometre(s) per hora son " << setprecision(15) << m5 << " metres per segon.\n" << endl;
										
									}
							
							break;
							
							
							case 2:
							 
								cout << "\nEsculli una opcio:\n";
								cout << "\n1. Metres per segon --> Milles per hora\n2. Milles per hora --> Metres per segon\n" << endl;
								cin>> m1;
								
									if( m1 == 1){
										
										cout << "\nEscrigui el nombre de metres per segon: "; cin>> m2;
										
											m3 = m2 * 2.237136;
											
											cout << "\n";
											
										cout << m2 << " metre(s) per segon son " << setprecision(15) << m3 << " milles per hora.\n" << endl;	
										
									}
									
									else{
										
										cout << "\nEscrigui el nombre de milles per hora: "; cin>> m4;
										
											m5 = m4 * 0.447;
											
											cout << "\n";
											
										cout << m4 << " milla/es per hora son " << setprecision(15) << m5 << " metres per segon.\n" << endl;
										
									}
							
							break;
							
							
							case 3:
							 
								cout << "\nEsculli una opcio:\n";
								cout << "\n1. Quilometres per hora --> Nusos\n2. Nusos --> Quilometres per hora\n" << endl;
								cin>> m1;
								
									if( m1 == 1){
										
										cout << "\nEscrigui el nombre de quilometres per hora: "; cin>> m2;
										
											m3 = m2 * 0.540003;
											
											cout << "\n";
											
										cout << m2 << " quilometre(s) per hora son " << setprecision(15) << m3 << " nusos.\n" << endl;	
										
									}
									
									else{
										
										cout << "\nEscrigui el nombre de nusos: "; cin>> m4;
										
											m5 = m4 * 1.85184;
											
											cout << "\n";
											
										cout << m4 << " nus/os son " << setprecision(15) << m5 << " quilometres per hora.\n" << endl;
										
									}
							
							break;
							
							
							case 4:
							 
								cout << "\nEsculli una opcio:\n";
								cout << "\n1. Quilometres per hora -- Peus per segon\n2. Peus per segon --> Quilometres per hora\n" << endl;
								cin>> m1;
								
									if( m1 == 1){
										
										cout << "\nEscrigui el nombre de quilometres per hora: "; cin>> m2;
										
											m3 = m2 * 0.911344;
											
											cout << "\n";
											
										cout << m2 << " quilometre(s) per hora son " << setprecision(15) << m3 << " peus per segon.\n" << endl;	
										
									}
									
									else{
										
										cout << "\nEscrigui el nombre de peus per segon: "; cin>> m4;
										
											m5 = m4 * 1.09728;
											
											cout << "\n";
											
										cout << m4 << " peu(s) per segon son " << setprecision(15) << m5 << " quilometres per hora.\n" << endl;
										
									}
							
							break;
							
							
							case 5:
							 
								cout << "\nEsculli una opcio:\n";
								cout << "\n1. Metres per segon --> Mach[ v. del so ]\n2. Mach[ v. del so ] --> Metres per segon\n" << endl;
								cin>> m1;
								
									if( m1 == 1){
										
										cout << "\nEscrigui el nombre de metres per segon: "; cin>> m2;
										
											m3 = m2 * 0.00293858;
											
											cout << "\n";
											
										cout << m2 << " metre(s) per segon son " << setprecision(15) << m3 << " mach(s).\n" << endl;	
										
									}
									
									else{
										
										cout << "\nEscrigui el nombre de mach(s): "; cin>> m4;
										
											m5 = m4 * 340.3;
											
											cout << "\n";
											
										cout << m4 << " mach(s) son " << setprecision(15) << m5 << " metres per segon.\n" << endl;
										
									}
							
							break;
							
							
							case 6:
							 
								cout << "\nEsculli una opcio:\n";
								cout << "\n1. Peus per segon --> Milles per hora\n2. Milles per hora --> Peus per segon\n" << endl;
								cin>> m1;
								
									if( m1 == 1){
										
										cout << "\nEscrigui el nombre de peus per segon: "; cin>> m2;
										
											m3 = m2 * 0.681879;
											
											cout << "\n";
											
										cout << m2 << " peu(s) per segon son " << setprecision(15) << m3 << " milles per hora.\n" << endl;	
										
									}
									
									else{
										
										cout << "\nEscrigui el nombre de milles per hora: "; cin>> m4;
										
											m5 = m4 * 1.466535;
											
											cout << "\n";
											
										cout << m4 << " milla/es per hora son " << setprecision(15) << m5 << " peus per segon.\n" << endl;
										
									}
							
							break;
							
							
							case 7:
							 
								cout << "\nEsculli una opcio:\n";
								cout << "\n1. Nusos --> Milles per hora\n2. Milles per hora --> Nusos\n" << endl;
								cin>> m1;
								
									if( m1 == 1){
										
										cout << "\nEscrigui el nombre de nusos: "; cin>> m2;
										
											m3 = m2 * 1.150783;
											
											cout << "\n";
											
										cout << m2 << " nus/os son " << setprecision(15) << m3 << " milles per hora.\n" << endl;	
										
									}
									
									else{
										
										cout << "\nEscrigui el nombre de milles per hora: "; cin>> m4;
										
											m5 = m4 * 0.868974;
											
											cout << "\n";
											
										cout << m4 << " milla/es per hora son " << setprecision(15) << m5 << " nusos.\n" << endl;
										
									}
							
							break;
							
							case 8:
								
								goto a;
								
							break;	
							
							default:
								
								cout << "\nL'opcio escollida no esta disponible.\n" << endl;
								goto g;
							
							break;
							
							
						}
				
				
						break;
				
					
					case 7:
					h:cout << "\nEsculli un canvi.\n" << endl;
					cout << "1. Quilowatts --> Cavalls de vapor[HP] || Cavalls de vapor[HP] --> Quilowatts\n";
					cout << "2. Quilowatts --> Lliures peu/minut || Lliures peu/minut --> Quilowatts\n";
					cout << "3. Quilowatts --> BTUs/minut || BTUs/minut --> Quilowatts\n4. Torna al menu principal\n" << endl;
					cin >> potencia;
					
						switch(potencia){
							
							case 1:
							 
								cout << "\nEsculli una opcio:\n";
								cout << "\n1. Qilowatts --> Cavalls de vapor[HP]\n2. Cavalls de vapor[HP] --> Quilowatts\n" << endl;
								cin>> m1;
								
									if( m1 == 1){
										
										cout << "\nEscrigui el nombre de quilowatts: "; cin>> m2;
										
											m3 = m2 * 1.341022;
											
											cout << "\n";
											
										cout << m2 << " quilowatt(s) son " << setprecision(15) << m3 << " cavalls de vapor.\n" << endl;	
										
									}
									
									else{
										
										cout << "\nEscrigui el nombre de cavalls de vapor: "; cin>> m4;
										
											m5 = m4 * 0.7457;
											
											cout << "\n";
											
										cout << m4 << " cavall(s) de vapor son " << setprecision(15) << m5 << " quilowatts.\n" << endl;
										
									}
							
							break;
						
							
							case 2:
							 
								cout << "\nEsculli una opcio:\n";
								cout << "\n1. Qilowatts --> Lliures peu/minut\n2. Lliures peu/minut --> Quilowatts\n" << endl;
								cin>> m1;
								
									if( m1 == 1){
										
										cout << "\nEscrigui el nombre de quilowatts: "; cin>> m2;
										
											m3 = m2 * 44253.73;
											
											cout << "\n";
											
										cout << m2 << " quilowatt(s) son " << setprecision(15) << m3 << " lliures peu/minut.\n" << endl;	
										
									}
									
									else{
										
										cout << "\nEscrigui el nombre de lliures peu/minut: "; cin>> m4;
										
											m5 = m4 * 0.000022597;
											
											cout << "\n";
											
										cout << m4 << " lliures peu/minut son " << setprecision(15) << m5 << " quilowatts.\n" << endl;
										
									}
							
							break;
							
							
							case 3:
							 
								cout << "\nEsculli una opcio:\n";
								cout << "\n1. Quilowatts --> BTUs/minut\n2. BTUs/minut --> Quilowatts\n" << endl;
								cin>> m1;
								
									if( m1 == 1){
										
										cout << "\nEscrigui el nombre de quilowatts: "; cin>> m2;
										
											m3 = m2 * 56.86902;
											
											cout << "\n";
											
										cout << m2 << " quilowatt(s) son " << setprecision(15) << m3 << " BTUs/minut.\n" << endl;	
										
									}
									
									else{
										
										cout << "\nEscrigui el nombre de BTUs/minut: "; cin>> m4;
										
											m5 = m4 * 0.0175843;
											
											cout << "\n";
											
										cout << m4 << " lliures BTUs/minut son " << setprecision(15) << m5 << " quilowatts.\n" << endl;
										
									}
							
							break;
							
							
							case 4:
								
								goto a;
								
							break;
								
							
							default:
				
							cout << "\nL'opcio escollida no esta disponible.\n" << endl;
							goto h;
				
							break;	
							
						}
				
						
						break;
					
					case 8:
					i:cout << "\nEsculli un canvi.\n" << endl;
					cout << "1. Graus sexagesimals[D] --> Graus centesimals[G] || Graus centesimals[G] --> Graus sexagesimals[D]\n";
					cout << "2. Graus sexagesimals[D] --> Radiants || Radiants --> Graus sexagesimals[D]\n";
					cout << "3. Radiants --> Graus centesimals[G] || Graus centesimals[G] --> Radiants\n4. Torna al menu principal\n" << endl;
					cin >> angles;	
					
						switch(angles){
							
							case 1:
							 
								cout << "\nEsculli una opcio:\n";
								cout << "\n1. Graus sexagesimals[D] --> Graus centesimals[G]\n2. Graus centesimals[G] --> Graus sexagesimals[D]\n" << endl;
								cin>> m1;
								
									if( m1 == 1){
										
										cout << "\nEscrigui el nombre de graus sexagesimals: "; cin>> m2;
										
											m3 = m2 * 1.111111;
											
											cout << "\n";
											
										cout << m2 << " grau(s) sexagesimals son " << setprecision(15) << m3 << " graus centesimals.\n" << endl;	
										
									}
									
									else{
										
										cout << "\nEscrigui el nombre de graus centesimals: "; cin>> m4;
										
											m5 = m4 * 0.9;
											
											cout << "\n";
											
										cout << m4 << " grau(s) centesimals son " << setprecision(15) << m5 << " graus sexagesimals.\n" << endl;
										
									}
							
							break;
							
							
							case 2:
							 
								cout << "\nEsculli una opcio:\n";
								cout << "\n1. Graus sexagesimals[D] --> Radiants\n2. Radiants --> Graus sexagesimals[D]\n" << endl;
								cin>> m1;
								
									if( m1 == 1){
										
										cout << "\nEscrigui el nombre de graus sexagesimals: "; cin>> m2;
										
											m3 = m2 * 0.0174533;
											
											cout << "\n";
											
										cout << m2 << " grau(s) sexagesimals son " << setprecision(15) << m3 << " radiants.\n" << endl;	
										
									}
									
									else{
										
										cout << "\nEscrigui el nombre de radiants: "; cin>> m4;
										
											m5 = m4 * 57.29578;
											
											cout << "\n";
											
										cout << m4 << " radiant(s) son " << setprecision(15) << m5 << " graus sexagesimals.\n" << endl;
										
									}
							
							break;
							
							
							case 3:
							 
								cout << "\nEsculli una opcio:\n";
								cout << "\n1. Radiants --> Graus centesimals[G]\n2. Graus centesimals[G] --> Radiants\n" << endl;
								cin>> m1;
								
									if( m1 == 1){
										
										cout << "\nEscrigui el nombre de radiants: "; cin>> m2;
										
											m3 = m2 * 63.66198;
											
											cout << "\n";
											
										cout << m2 << " radiant(s) son " << setprecision(15) << m3 << " graus centesimals.\n" << endl;	
										
									}
									
									else{
										
										cout << "\nEscrigui el nombre de graus centesimals: "; cin>> m4;
										
											m5 = m4 * 0.015708;
											
											cout << "\n";
											
										cout << m4 << " graus(s) centesimals son " << setprecision(15) << m5 << " radiants.\n" << endl;
										
									}
							
							break;
							
							case 4:
								
								goto a;
								
							break;	
							
							default:
				
							cout << "\nL'opcio escollida no esta disponible.\n" << endl;
							goto i;
			
							break;
							
						}		
						
						
						break;
						
						
					case 9:
					j:cout << "\nEsculli un canvi.\n" << endl;
					cout << "1. Bars --> Atmosferes || Atmosferes --> Bars\n";
					cout << "2. Quilopascals --> Bars || Bars --> Quilopascals\n";
					cout << "3. Quilopascals --> Milimetres de mercuri || Milimetres de mercuri --> Quilopascals\n";
					cout << "4. Atmosferes --> Quilopascals || Quilopascals --> Atmosferes\n";
					cout << "5. Milimetres de mercuri --> Bars || Bars --> Milimetres de mercuri\n";
					cout << "6. Quilopascals --> Lliures per polzada quadrada || Lliures per polzada quadrada --> Quilopascals\n7. Torna al menu principal\n" << endl;
					cin >> pressio;	
					
						switch(pressio){
							
							case 1:
							 
								cout << "\nEsculli una opcio:\n";
								cout << "\n1. Bars --> Atmosferes\n2. Atmosferes --> Bars\n" << endl;
								cin>> m1;
								
									if( m1 == 1){
										
										cout << "\nEscrigui el nombre de bars: "; cin>> m2;
										
											m3 = m2 * 0.986923;
											
											cout << "\n";
											
										cout << m2 << " bar(s) son " << setprecision(15) << m3 << " atmosferes.\n" << endl;	
										
									}
									
									else{
										
										cout << "\nEscrigui el nombre de atmosferes: "; cin>> m4;
										
											m5 = m4 * 1.01325;
											
											cout << "\n";
											
										cout << m4 << " atmosferes son " << setprecision(15) << m5 << " bars.\n" << endl;
										
									}
							
							break;
							
							
							case 2:
							 
								cout << "\nEsculli una opcio:\n";
								cout << "\n1. Quilopascals --> Bars\n2. Bars --> Quilopascals\n" << endl;
								cin>> m1;
								
									if( m1 == 1){
										
										cout << "\nEscrigui el nombre de quilopascals: "; cin>> m2;
										
											m3 = m2 * 0.01;
											
											cout << "\n";
											
										cout << m2 << " quilopascal(s) son " << setprecision(15) << m3 << " bars.\n" << endl;	
										
									}
									
									else{
										
										cout << "\nEscrigui el nombre de bars: "; cin>> m4;
										
											m5 = m4 * 100;
											
											cout << "\n";
											
										cout << m4 << " bars son " << setprecision(15) << m5 << " quilopascals.\n" << endl;
										
									}
							
							break;
							
							
							case 3:
							 
								cout << "\nEsculli una opcio:\n";
								cout << "\n1. Quilopascals --> Milimetres de mercuri\n2. Milimetres de mercuri --> Quilopascals\n" << endl;
								cin>> m1;
								
									if( m1 == 1){
										
										cout << "\nEscrigui el nombre de quilopascals: "; cin>> m2;
										
											m3 = m2 * 7.501875;
											
											cout << "\n";
											
										cout << m2 << " quilopascal(s) son " << setprecision(15) << m3 << " milimetres de mercuri.\n" << endl;	
										
									}
									
									else{
										
										cout << "\nEscrigui el nombre de milimetres de mercuri: "; cin>> m4;
										
											m5 = m4 * 0.1333;
											
											cout << "\n";
											
										cout << m4 << " milimetre(s) de mercuri son " << setprecision(15) << m5 << " quilopascals.\n" << endl;
										
									}
							
							break;
							
							
							case 4:
							 
								cout << "\nEsculli una opcio:\n";
								cout << "\n1. Atmosferes --> Quilopascals\n2. Quilopascals --> Atmosferes\n" << endl;
								cin>> m1;
								
									if( m1 == 1){
										
										cout << "\nEscrigui el nombre de atmosferes: "; cin>> m2;
										
											m3 = m2 * 101.325;
											
											cout << "\n";
											
										cout << m2 << " atmosfere(s) son " << setprecision(15) << m3 << " quilopascals.\n" << endl;	
										
									}
									
									else{
										
										cout << "\nEscrigui el nombre de quilopascals: "; cin>> m4;
										
											m5 = m4 * 0.00986923;
											
											cout << "\n";
											
										cout << m4 << " quilopascals son " << setprecision(15) << m5 << " atmosferes.\n" << endl;
										
									}
							
							break;
							
							
							case 5:
							 
								cout << "\nEsculli una opcio:\n";
								cout << "\n1. Milimetres de mercuri --> Bars\n2. Bars --> Milimetres de mercuri\n" << endl;
								cin>> m1;
								
									if( m1 == 1){
										
										cout << "\nEscrigui el nombre de milimetres de mercuri: "; cin>> m2;
										
											m3 = m2 * 0.001333;
											
											cout << "\n";
											
										cout << m2 << " milimetre(s) de mercuri son " << setprecision(15) << m3 << " bars.\n" << endl;	
										
									}
									
									else{
										
										cout << "\nEscrigui el nombre de bars: "; cin>> m4;
										
											m5 = m4 * 750.1875;
											
											cout << "\n";
											
										cout << m4 << " bar(s) son " << setprecision(15) << m5 << " milimetres de mercuri.\n" << endl;
										
									}
							
							break;
							
							
							case 6:
							 
								cout << "\nEsculli una opcio:\n";
								cout << "\n1. Quilopascals --> Lliures per polzada quadrada\n2. Lliures per polzada quadrada --> Quilopascals\n" << endl;
								cin>> m1;
								
									if( m1 == 1){
										
										cout << "\nEscrigui el nombre de quilopascals: "; cin>> m2;
										
											m3 = m2 * 0.145038;
											
											cout << "\n";
											
										cout << m2 << " quilopascal(s) son " << setprecision(15) << m3 << " lliures per polzada quadrada.\n" << endl;	
										
									}
									
									else{
										
										cout << "\nEscrigui el nombre de lliures per polzada quadrada: "; cin>> m4;
										
											m5 = m4 * 6,894757;
											
											cout << "\n";
											
										cout << m4 << " lliure(s) per polzada quadrada son " << setprecision(15) << m5 << " quiloapascals.\n" << endl;
										
									}
							
							break;
							
							
							case 7:
								
								goto a;
							
							break;
							
							
							default:
					
							cout << "\nL'opcio escollida no esta disponible.\n" << endl;
							goto j;
			
							break;	
						
						}
						
						
						break;
					
											
					default:
				
						cout << "\nL'opcio escollida no esta disponible.\n" << endl;
						goto a;
			
					break;	
												
				}

	system("pause");	
	return 0; 
	
}
