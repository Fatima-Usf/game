#include<iostream>
#include "Personnage.h"

using namespace std;

int main(){
	
	Personnage Abdeldjalil, eva("k3ala",  1);

	Abdeldjalil.attaquer(eva);
	Abdeldjalil.BoirePotionDeVie(10);
	Abdeldjalil.changerArme("pantoufla",42);
	return 0;

}
