#ifndef DEF_PERSSSONNAGE
#define DEF_PERSSSONNAGE
#include <string>
// va contenir juste les méthodes et les attribut
class  Personnage{
public:
	// constructeur par défaut
	Personnage();
	//2em constructeur
	Personnage( std::string n_nomArme, int n_degatsArme);
	//3em constructeur surchargé
	Personnage(std::string n_nomArme, int n_degatsArme, int n_vie, int n_magie);
	/* constructeur de copie se crer automatiquement par le compilateur si jamais je veux changer son comprtement 
	Personnage(Personnage const& autre);
	je le crée comme ça */
	// Le distructeur le destructeur ne peut prendre aucun paramètre. Il y a donc toujours un seul destructeur, il ne peut pas être surchargé.
	~Personnage(); //il retourne rien aucun type, mafich aucun paramtre w ybda ~
	//___attributs___
private:
	int vie;
	int magie;
	std::string nomArme;
	int degatsArme;

	//___Méthodes___
public: 
	void recevoirDegats(int nbDegat);

	void attaquer(Personnage &cible);

	void BoirePotionDeVie(int quantitPoint);

	void changerArme(std::string nomNewArme, int NewDegatArm);
	bool estvivant();

};

#endif
