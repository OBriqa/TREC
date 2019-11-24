//APLICACIÓ QUE CALCULA LA DISTÀNCIA ENTRE UN PUNT I UNA RECTA.
//TREBALL DE RECERCA 2018-2020. OMAR BRIQA

#include<iostream>
#include<cmath>

using namespace std;

int main(){
	
	
	float d, p1, p2, Ax, By, C;
	
		cout << "//APLICACIO QUE CALCULA LA DISTANCIA ENTRE UN PUNT I UNA RECTA.\n//TREBALL DE RECERCA 2018-2020. OMAR BRIQA\n";
		
		cout << "\nAquesta programa permet calcular la distancia entre un punt i una recta.\n" ;
		cout << "Per a poder dur a terme el calcul, has de disposar l'equacio de la recta en forma general. [ Ax + By + C = 0 ]\n" << endl;
	
	
		cout << "Introdueix les coordenades del punt [p1,p2]: " << endl; cin >> p1 >> p2;	
		cout << "\nIntrodueix els components de l'equacio de la recta [ Ax + By + C = 0 ]: " << endl; cin>> Ax >> By >> C;
		
		
		cout << "\nPunt: [" << p1 << "," << p2 << "]  Recta: " << Ax << "x + " << By << "y + " << C << " = 0 " << endl;
		
	
		d =  ( ( fabs(  ( Ax * p1)  +  ( By * p2 ) + C )  )  /  ( sqrt( pow( Ax, 2 ) + pow( By, 2 )  )   ) );
		
		cout << "\nLa distancia entre el punt i la recta es de " << d << " unitats.\n" << endl;
	

	system("pause");
	return 0;
}
