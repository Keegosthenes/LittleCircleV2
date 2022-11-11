#include <stdio.h>
#include <stdlib.h>
#include "save.h"

int niv_unlock()
{
	FILE *fichier = fopen("save.txt", "r");
	auto niv_crypte = 0;
	fscanf(fichier, "%d", &niv_crypte);
	
	if(niv_crypte == 0)
	{
		fclose(fichier);
		return 0;
	}
	else if(niv_crypte == 987458558)
	{
		fclose(fichier);
		return 1;
	}
	else if(niv_crypte == 9528285)
	{
		fclose(fichier);
		return 2;
	}
	else if(niv_crypte == 26565548)
	{
		fclose(fichier);
		return 3;
	}
	else if(niv_crypte == 95635665)
	{
		fclose(fichier);
		return 4;
	}
	else if(niv_crypte == 659582525)
	{
		fclose(fichier);
		return 5;
	}
	else
	{
		fclose(fichier);
		return 0;
	}
	
}

void niv_suivant(int &level_reussi)
{
	FILE *fichier = fopen("save.txt", "w");
	int niv_crypte = 0;
	if(level_reussi == 1)
	{
		niv_crypte = 987458558;
		fprintf(fichier, "%d Attention ne pas modifier ce fichier sous peine de plus pouvoir lancer le jeux. Cordialement le dev", niv_crypte);
	}
	if(level_reussi == 2)
	{
		niv_crypte = 9528285;
		fprintf(fichier, "%d Attention ne pas modifier ce fichier sous peine de plus pouvoir lancer le jeux. Cordialement le dev", niv_crypte);
	}
	if(level_reussi == 3)
	{
		niv_crypte = 26565548;
		fprintf(fichier, "%d Attention ne pas modifier ce fichier sous peine de plus pouvoir lancer le jeux. Cordialement le dev", niv_crypte);
	}
	if(level_reussi == 4)
	{
		niv_crypte = 95635665;
		fprintf(fichier, "%d Attention ne pas modifier ce fichier sous peine de plus pouvoir lancer le jeux. Cordialement le dev", niv_crypte);
	}
	if(level_reussi == 5)
	{
		niv_crypte = 659582525;
		fprintf(fichier, "%d Attention ne pas modifier ce fichier sous peine de plus pouvoir lancer le jeux. Cordialement le dev", niv_crypte);
	}
	fclose(fichier);
}

/* 														Cryptage:
													- 1 niveau : 987458558
													- 2 niveau : 9528285
													- 3 niveau : 26565548
													- 4 niveau : 95635665
													- 5 niveau : 659582525
*/
