#include "Personnage.h"
using namespace std;
/* alors pour chaque méthode on fait 
nomDeClass::nomMéthode */

/*// coder le constructeur 1er maniére
Personnage::Personnage(){
	 vie =100;
	 magie=80;
	 nomArme="n3ala";
	 degatsArme=20;}
	 */
//2em maniére recomandé du constructeur en utilisant les listes d'initialisation lewla ndurou construteur par défaut
Personnage::Personnage() : vie(100), magie(80), nomArme("n3ala"), degatsArme(20){
	//rien a ecrire c bon tout est deja fait
}

//consturcteur mechi par défaut ( il faiut pas nomer les paramtre kima les attribut psk makanch this hna)
Personnage::Personnage(string n_nomArme, int n_degatsArme) : vie(100), magie(80), nomArme(n_nomArme), degatsArme(n_degatsArme){
}

//3em constructeur
Personnage::Personnage (string n_nomArme, int n_degatsArme, int n_vie, int n_magie) : vie(n_vie), magie(n_magie), nomArme(n_nomArme),  degatsArme(n_degatsArme){
}

// destructeur
Personnage::~Personnage(){
 /* Rien à mettre ici car on ne fait pas d'allocation dynamique
    dans la classe Personnage. Le destructeur est donc inutile mais
    je le mets pour montrer à quoi cela ressemble.*/}
//le personnage prend un certain nombre de dégâts et donc perd de la vie.
void Personnage::recevoirDegats(int nbDegat){
	
	
	vie-=nbDegat;
	// La méthode a le droit de modifier l'attribut, car elle fait partie de la classe
	if (vie < 0){
		vie=0;
	}}
//le personnage attaque un autre personnage avec son arme. Il inflige autant de dégâts que son arme le lui permet (c'est-à-diredegatsArme).
void Personnage::attaquer( Personnage &cible)

{
	/* Abdeldjalil. attaquer(eva) la personne qui va attaquer ie Abdedjalil a un nombre de degatArme 
	ce dernier va etre diminué de la vie de la personne attaqué autrement dit on appel la methode
	recevoir dégat et nmadlouha le nombre degat d'arme ta3 Abdedjalil bech naksouh mel la vie ta3 eva 
	
*/
 cible.recevoirDegats(degatsArme);
}

// le personnage boit une potion de vie et regagne un certain nombre de points de vie.
void Personnage::BoirePotionDeVie(int quantitPoint){
	vie+= quantitPoint;
	if (vie>100){ 
		vie=100;
	}
}

// le personnage récupère une nouvelle arme plus puissante. On change le nom de l'arme et les dégâts qui vont avec.
void Personnage::changerArme(string nomNewArme, int NewDegatArm){
	nomArme= nomNewArme;
	degatsArme = NewDegatArm;
}


bool Personnage::estvivant(){

	return vie>0;
}
