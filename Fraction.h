#include<iostream>

using namespace std;

#ifndef FRACTION_H
#define FRACTION_H

class Fraction{
	private : 
		int numer;
		int denumer;
		static int counter;
		// juste pour calculer le nombre d'objet qu'on cree.
		/*Pourquoi static ? 
		>> variable static est partager par tout les objets, c'est a dire a chaque creation
		d'objet ce conteur ca va incrementer par 1.
		*/
	
	public :
// les constructeurs------------
		Fraction();
		Fraction(Fraction& fr);
		Fraction(int n, int d);
		Fraction(int n);
		
// les fonctions membres--------
		int numerateur();
		int denominateur();
		int signe();
		float floAt();
// surcharge des operateurs--------
		  // operateurs arithhmetiques
		friend Fraction& operator*(Fraction f1, Fraction f2);
		friend Fraction& operator/(Fraction f1, Fraction f2);
		friend Fraction& operator+(Fraction fr1, Fraction fr2);
		friend Fraction& operator-(Fraction fr1, Fraction fr2);
	      // flux de sortie
		friend ostream& operator<<(ostream& out, Fraction& frac);
		  // operateur d'affectation (tres important !)
		Fraction& operator=(Fraction& f);
		  // operateur uniaire
		friend Fraction& operator-(Fraction fr);
		/* pour la surcharge des operateurs unaire on a deux cas : 
		1- soit on l'utilise comme fonction membre dans ce cas la surcharge ne prend aucun
		arguement explicite.
		2- soit on l'utilise comme fonction amie (comme j'ai fait avec -) et dans ce cas 
		il faut ajouter un arguement.
		*/
	
};


#endif 
