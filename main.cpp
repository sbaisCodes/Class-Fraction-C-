#include <iostream>
#include "Fraction.h"


using namespace std;



int main(int argc, char** argv) {
	
	Fraction f1(1,2), f2(3), f4(-3, 5),f3, f5, f6, f7, f8, f9;
	

	cout<<"\n========Les objets creer========\n";
	cout<<"f1(1,2), f2(3), f3, f4(-3, 5), f5, f6, f7, f8, f9"<<endl;
	
	cout<<f1;//test du constructeur de deux arguments
	cout<<f2;// test du constructeur d'un seul arg
	cout<<f3;// constructeur par defaut
	f3 = f4; // operateur d'affectation
	cout<<f3;
	cout << "in float : "<<f3.floAt()<<endl; // fonction float() !!! il faut chnager le nom du float()
	cout<<"denominateur de f4 : "<< f4.denominateur()<<endl;
	cout<<"signe de f4 : " << f4.signe();

	f5 = f1+f2; // la somme et l'affectation (appel au constructeur de copie)
	cout<<"\n f5 = la somme de f1 et f2 >> "<<endl;
	cout<< f5;
	
	f6 = f4-f1;
	cout<<"\n f6 = la difference entre f4 et f1 >> "<<endl;
	cout<< f6;
	
	f7 = f1/f2;
	cout<<"\n f7 = la division de f1 par f2 >> "<<endl;
	cout<< f7;
	
	f8 = f7*f6;
	cout<<"\n f8 = le produit entre f7 par f6 >> "<<endl;
	cout<< f8;
	
	f9 = -f8;
	cout<<"\n f9 = -f9 >> "<<endl;
	cout<< f9;


	return 0;
}
