#include<iostream>
#include "Fraction.h"

using namespace std;

int Fraction::counter = 0; // les donnes membres static s'initialise de maniere explicite

Fraction::Fraction(){
	counter++;
	numer = 0; 
	denumer = 1;
	cout<<" Nombre d'objets creer sans arguement : "<<counter<<endl;
	cout<<"---------------------"<<endl;

}


Fraction::Fraction(int n, int d){
	numer = n; 
	denumer = d;
}


Fraction::Fraction(Fraction& fr){
	numer = fr.numer; 
	denumer = fr.denumer;

}


Fraction::Fraction(int n){
	numer = n; 
	denumer = 1;
}



int Fraction::numerateur(){
	return numer;
}


int Fraction::denominateur(){
	return denumer;
}


int Fraction::signe(){
	if(numer*denumer < 0){
		return -1; // if the number is negatif return -1
	}else{
		return 1; 
	}
}


float Fraction::floAt(){
	return numer/(float)denumer; // n'oublier pas le cast otherwise you will get 0
}

/////// surcharge des operateurs

Fraction& operator*(Fraction f1, Fraction f2){
	int n = f1.numerateur()*f2.numerateur();
	int d = f1.denominateur()*f2.denominateur();
		Fraction f_res(n,d);
	return f_res;
}

ostream& operator<<(ostream& out, Fraction& frac){
	out<<"\n----- affichage d'une fraction ------- \n";
	out<< "numerateur = " << frac.numerateur()<<"\tdenumerateur = "<< frac.denominateur()<<endl;
	out<< " Fraction>> "<<frac.numerateur() << "/"<<frac.denominateur()<<endl;
	
	return out;
}


Fraction& Fraction::operator=(Fraction& f){
		numer = f.numer;
		denumer = f.denumer;
	
	return *this;
}

/*
la somme de deux fractions : 

a    c   a*d + c*b
_ +  _   _________
b    d =    b*d

meme chose pour la difference
*/
Fraction& operator+(Fraction fr1, Fraction fr2){
    int n, d;
	n = (fr1.numerateur() * fr2.denominateur()) + (fr2.numerateur()* fr1.denominateur());
	d = fr1.denominateur() * fr2.denominateur();
	Fraction res_frac_sum(n, d);
	
	return res_frac_sum;
}


Fraction& operator-(Fraction fr1, Fraction fr2){
    int n, d;
	n = (fr1.numerateur() * fr2.denominateur()) - (fr2.numerateur()* fr1.denominateur());
	d = fr1.denominateur() * fr2.denominateur();
	Fraction res_frac_diff(n, d);
	
	return res_frac_diff;
}

/*

a    c   a*d
_ /  _   ___
b    d = b*c

*/
Fraction& operator/(Fraction f1, Fraction f2){
	int n = f1.numerateur() * f2.denominateur();
	int d = f1.denominateur() * f2.numerateur() ;
	Fraction res_div(n, d);
	return res_div;
}

// operateur unaire
Fraction& operator-(Fraction fr){
	int n = -fr.numerateur();
	int d = fr.denominateur();
	Fraction res_neg(n, d);
}
