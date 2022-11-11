#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <SDL.h>
#include <SDL_image.h>
#include <SDL_ttf.h>
#include <SDL_mixer.h>

#include "anim.h"
#include "event.h"
#include "save.h"
/*
			PATCH NOTE (V.2):
			
		-Ajout de 5 niveaux supplémentaire (6 niveaux au total)
		-Ajout d'un menu de sélection de niveau
		-Jeux optimimisé techniquement
		-Réglage d'un bug qui selon la puissance du PC, rendait le jeux plus ou moins rapide
		-Suppression de code inutile et de texture inutile dans les fichiers du jeux
		-Ajout du boutton Espace dans le jeux pour y jouer également sur clavier
		-Difficulté augmenter pour le niveau d'origine qui devient le niveau 5
		-Ajout de musique et sound effect
*/

Uint32 char_descente(Uint32 intervalle, void *parametre);
Uint32 char_monter(Uint32 intervalle, void *parametre);

int main(int argc, char *argv[])
{
	
	SDL_Init(SDL_INIT_EVERYTHING);
	TTF_Init();
	Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, MIX_DEFAULT_CHANNELS, 1024);
	
	SDL_Window *fenetre;
	SDL_Surface *ecran;
	SDL_Surface *char_1_0, *char_1_1, *char_1_2, *char_1_3, *char_1_4, *char_1_5, *char_1_6, *char_1_7;
	SDL_Surface *char_2_0, *char_2_1, *char_2_2, *char_2_3, *char_2_4, *char_2_5, *char_2_6;
	SDL_Surface *fond_1_0, *fond_1_1, *fond_1_2, *fond_1_3, *fond_1_4, *fond_1_5, *fond_1_6, *fond_1_7, *fond_1_8, *fond_1_9, *fond_1_10, *fond_1_11, *fond_1_12, *fond_1_13, *fond_1_14;
	SDL_Surface *fond_2_0, *fond_2_1, *fond_2_2, *fond_2_3, *fond_2_4, *fond_2_5, *fond_2_6, *fond_2_7, *fond_2_8, *fond_2_9, *fond_2_10, *fond_2_11, *fond_2_12, *fond_2_13, *fond_2_14;
	SDL_Surface *wall_1_0, *wall_1_1, *wall_1_2, *wall_1_3, *wall_1_4;
	SDL_Surface *wall_2_0, *wall_2_1, *wall_2_2, *wall_2_3, *wall_2_4;
	SDL_Surface *wall_3_0, *wall_3_1;
	TTF_Font *police_ecriture_1, *police_ecriture_2;
	SDL_Surface *made_by, *play, *quit, *compteur_mort;
	SDL_Color rouge = {255, 0, 0};
	SDL_Color blanc = {255, 255, 255, 0};
	SDL_Color noir = {0, 0, 0};
	SDL_Rect made_by_pos, play_pos, quit_pos;
	SDL_Rect char_pos;
	SDL_Rect wall1_pos,wall2_pos,wall3_pos,wall4_pos,wall5_pos,wall6_pos,wall7_pos,wall8_pos,wall9_pos,wall10_pos, wall11_pos,wall12_pos,wall13_pos,wall14_pos,wall15_pos,wall16_pos,wall17_pos,wall18_pos,wall19_pos,wall20_pos;
	SDL_Rect wall21_pos,wall22_pos,wall23_pos,wall24_pos,wall25_pos,wall26_pos,wall27_pos,wall28_pos,wall29_pos,wall30_pos, wall31_pos,wall32_pos,wall33_pos,wall34_pos,wall35_pos,wall36_pos,wall37_pos,wall38_pos,wall39_pos,wall40_pos;	
	char_pos.x = 275;
	char_pos.y = 425;
	made_by_pos.x = 1100;
	made_by_pos.y = 950;
	play_pos.x = 220;
	play_pos.y = 330;
	quit_pos.x = 1200;
	quit_pos.y = 330;
	int niveau_select = 0;
	int level_reussi = 0;
	Mix_Music *sound_button;
	int arl_sound = 0;
	int level_unlock = 0;
	
	fenetre = SDL_CreateWindow("Little Circle", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 1500, 1000, 0);
	ecran = SDL_GetWindowSurface(fenetre);
	
	char_1_0 = IMG_Load("src/texture/char/1/char-0.png");
	char_2_0 = IMG_Load("src/texture/char/2/char-2-0.png");
	fond_1_0 = IMG_Load("src/texture/fond/1/1/fond1-0.png");
	fond_2_0 = IMG_Load("src/texture/fond/1/2/fond2-0.png");
	wall_3_0 = IMG_Load("src/texture/wall/3/wall3.png");
	wall_3_1 = IMG_Load("src/texture/wall/4/wall-4.png");
	
	police_ecriture_1 = TTF_OpenFont("src/ttf/Robot Crush.ttf", 25);
	police_ecriture_2 = TTF_OpenFont("src/ttf/Robot Crush.ttf", 50);
	made_by = TTF_RenderText_Blended(police_ecriture_1, "Made by Dorian magdelaine (Keego)", blanc);
	play = TTF_RenderText_Blended(police_ecriture_2, "Play", noir);
	quit = TTF_RenderText_Blended(police_ecriture_2, "Quit", noir);
	sound_button = Mix_LoadMUS("src/audio/boutton.mp3");
	
	SDL_BlitSurface(fond_2_0, NULL, ecran, NULL);
	SDL_BlitSurface(made_by, NULL, ecran, &made_by_pos);
	SDL_BlitSurface(play, NULL, ecran, &play_pos);
	SDL_BlitSurface(quit, NULL, ecran, &quit_pos);
	SDL_UpdateWindowSurface(fenetre);
	SDL_bool menu_actif = SDL_TRUE;
	SDL_bool program_launched = SDL_TRUE;
	
	level_unlock = niv_unlock();
	while(menu_actif)
	{
		SDL_Event event_menu;
		while(SDL_PollEvent(&event_menu))
		{
			switch(event_menu.type)
			{
				case SDL_MOUSEMOTION:
					if(event_menu.motion.x > play_pos.x && event_menu.motion.x < play_pos.x + 100 && event_menu.motion.y > play_pos.y && event_menu.motion.y < play_pos.y + 50)
					{
						if(arl_sound == 0)
						{
							Mix_PlayMusic(sound_button, 1);
							arl_sound = 1;
						}
						play = TTF_RenderText_Blended(police_ecriture_2, "Play", rouge);
						quit = TTF_RenderText_Blended(police_ecriture_2, "Quit", noir);
						SDL_BlitSurface(fond_2_0, NULL, ecran, NULL);
						SDL_BlitSurface(made_by, NULL, ecran, &made_by_pos);
						SDL_BlitSurface(play, NULL, ecran, &play_pos);
						SDL_BlitSurface(quit, NULL, ecran, &quit_pos);
						SDL_UpdateWindowSurface(fenetre);
						
					}
					else if(event_menu.motion.x > quit_pos.x && event_menu.motion.x < quit_pos.x + 100 && event_menu.motion.y > quit_pos.y && event_menu.motion.y < quit_pos.y + 50)
					{
						if(arl_sound == 0)
						{
							Mix_PlayMusic(sound_button, 1);
							arl_sound = 1;
						}
						play = TTF_RenderText_Blended(police_ecriture_2, "Play", noir);
						quit = TTF_RenderText_Blended(police_ecriture_2, "Quit", rouge);
						SDL_BlitSurface(fond_2_0, NULL, ecran, NULL);
						SDL_BlitSurface(made_by, NULL, ecran, &made_by_pos);
						SDL_BlitSurface(play, NULL, ecran, &play_pos);
						SDL_BlitSurface(quit, NULL, ecran, &quit_pos);
						SDL_UpdateWindowSurface(fenetre);
						
					}
					else
					{
						play = TTF_RenderText_Blended(police_ecriture_2, "Play", noir);
						quit = TTF_RenderText_Blended(police_ecriture_2, "Quit", noir);
						SDL_BlitSurface(fond_2_0, NULL, ecran, NULL);
						SDL_BlitSurface(made_by, NULL, ecran, &made_by_pos);
						SDL_BlitSurface(play, NULL, ecran, &play_pos);
						SDL_BlitSurface(quit, NULL, ecran, &quit_pos);
						SDL_UpdateWindowSurface(fenetre);
						arl_sound = 0;
						
					}
					
					
					continue;
					
				case SDL_MOUSEBUTTONUP:
					if(event_menu.motion.x > play_pos.x && event_menu.motion.x < play_pos.x + 100 && event_menu.motion.y > play_pos.y && event_menu.motion.y < play_pos.y + 50)
					{
						menu_actif = SDL_FALSE;
					}
					else if(event_menu.motion.x > quit_pos.x && event_menu.motion.x < quit_pos.x + 100 && event_menu.motion.y > quit_pos.y && event_menu.motion.y < quit_pos.y + 50)
					{
						menu_actif = SDL_FALSE;
						program_launched = SDL_FALSE;
					}
					continue;
					
				case SDL_QUIT:
					menu_actif = SDL_FALSE;
					program_launched = SDL_FALSE;
					
				default:
					continue;
			}
		}
	}
	if(program_launched)
	{
		niveau_select = menu_selection_level(niveau_select,fenetre,ecran, level_unlock);
	}


	if(program_launched)
	{
		if(niveau_select == 1)
		{
			level_reussi = level_1(fenetre,ecran,compteur_mort,char_1_0,char_2_0,char_pos,fond_1_0, fond_2_0,wall_3_0,wall_3_1,wall1_pos,wall2_pos,wall3_pos,wall4_pos, 
							 wall5_pos,wall6_pos,wall7_pos,wall8_pos,wall9_pos, wall10_pos,wall11_pos,wall12_pos,wall13_pos, wall14_pos,wall15_pos,wall16_pos,wall17_pos,wall18_pos
							 ,wall19_pos,wall20_pos, wall21_pos,wall22_pos,wall23_pos,wall24_pos, wall25_pos,wall26_pos,wall27_pos,wall28_pos,wall29_pos,
							 wall30_pos,wall31_pos,wall32_pos,wall33_pos,  wall34_pos,wall35_pos,wall36_pos,wall37_pos,wall38_pos ,wall39_pos,wall40_pos);
							 
			if(level_reussi == 1)
			{
				animation_level_complet(fenetre, ecran);
				if(level_unlock < 2)
				{
					niv_suivant(level_reussi);
					level_unlock = niv_unlock();
				}
				niveau_select = menu_selection_level(niveau_select,fenetre,ecran, level_unlock);
				
				
			}
		}
		if(niveau_select == 2)
		{
			level_reussi  =	level_2(fenetre,ecran,compteur_mort,char_1_0,char_2_0,char_pos,fond_1_0, fond_2_0,wall_3_0,wall_3_1,wall1_pos,wall2_pos,wall3_pos,wall4_pos, 
					 wall5_pos,wall6_pos,wall7_pos,wall8_pos,wall9_pos, wall10_pos,wall11_pos,wall12_pos,wall13_pos, wall14_pos,wall15_pos,wall16_pos,wall17_pos,wall18_pos
					 ,wall19_pos,wall20_pos, wall21_pos,wall22_pos,wall23_pos,wall24_pos, wall25_pos,wall26_pos,wall27_pos,wall28_pos,wall29_pos,
					 wall30_pos,wall31_pos,wall32_pos,wall33_pos,  wall34_pos,wall35_pos,wall36_pos,wall37_pos,wall38_pos ,wall39_pos,wall40_pos);
					 
			if(level_reussi == 2)
			{
				animation_level_complet(fenetre, ecran);
				if(level_unlock < 3)
				{
					niv_suivant(level_reussi);
					level_unlock = niv_unlock();
				}
				niveau_select = menu_selection_level(niveau_select,fenetre,ecran, level_unlock);
				
			}
		}
		if(niveau_select == 3)
		{
			level_reussi = level_3(fenetre,ecran,compteur_mort,char_1_0,char_2_0,char_pos,fond_1_0, fond_2_0,wall_3_0,wall_3_1,wall1_pos,wall2_pos,wall3_pos,wall4_pos, 
					 wall5_pos,wall6_pos,wall7_pos,wall8_pos,wall9_pos, wall10_pos,wall11_pos,wall12_pos,wall13_pos, wall14_pos,wall15_pos,wall16_pos,wall17_pos,wall18_pos
					 ,wall19_pos,wall20_pos, wall21_pos,wall22_pos,wall23_pos,wall24_pos, wall25_pos,wall26_pos,wall27_pos,wall28_pos,wall29_pos,
					 wall30_pos,wall31_pos,wall32_pos,wall33_pos,  wall34_pos,wall35_pos,wall36_pos,wall37_pos,wall38_pos ,wall39_pos,wall40_pos);
					 
			if(level_reussi == 3)
			{
				animation_level_complet(fenetre, ecran);
				if(level_unlock < 4)
				{
					niv_suivant(level_reussi);
					level_unlock = niv_unlock();
				}
				niveau_select = menu_selection_level(niveau_select,fenetre,ecran, level_unlock);
				
			}
		}
		if(niveau_select == 4)
		{
			level_reussi = level_4(fenetre,ecran,compteur_mort,char_1_0,char_2_0,char_pos,fond_1_0, fond_2_0,wall_3_0,wall_3_1,wall1_pos,wall2_pos,wall3_pos,wall4_pos, 
					 wall5_pos,wall6_pos,wall7_pos,wall8_pos,wall9_pos, wall10_pos,wall11_pos,wall12_pos,wall13_pos, wall14_pos,wall15_pos,wall16_pos,wall17_pos,wall18_pos
					 ,wall19_pos,wall20_pos, wall21_pos,wall22_pos,wall23_pos,wall24_pos, wall25_pos,wall26_pos,wall27_pos,wall28_pos,wall29_pos,
					 wall30_pos,wall31_pos,wall32_pos,wall33_pos,  wall34_pos,wall35_pos,wall36_pos,wall37_pos,wall38_pos ,wall39_pos,wall40_pos);
					 
			if(level_reussi == 4)
			{
				animation_level_complet(fenetre, ecran);
				if(level_unlock < 5)
				{
					niv_suivant(level_reussi);
					level_unlock = niv_unlock();
				}
				niveau_select = menu_selection_level(niveau_select,fenetre,ecran, level_unlock);
				
			}
		}
		if(niveau_select == 5)
		{
			level_reussi = level_5(fenetre,ecran,compteur_mort,char_1_0,char_2_0,char_pos,fond_1_0, fond_2_0,wall_3_0,wall_3_1,wall1_pos,wall2_pos,wall3_pos,wall4_pos, 
					 wall5_pos,wall6_pos,wall7_pos,wall8_pos,wall9_pos, wall10_pos,wall11_pos,wall12_pos,wall13_pos, wall14_pos,wall15_pos,wall16_pos,wall17_pos,wall18_pos
					 ,wall19_pos,wall20_pos, wall21_pos,wall22_pos,wall23_pos,wall24_pos, wall25_pos,wall26_pos,wall27_pos,wall28_pos,wall29_pos,
					 wall30_pos,wall31_pos,wall32_pos,wall33_pos,  wall34_pos,wall35_pos,wall36_pos,wall37_pos,wall38_pos ,wall39_pos,wall40_pos);
					 
			if(level_reussi == 5)
			{
				animation_level_complet(fenetre, ecran);
				if(level_unlock < 6)
				{
					niv_suivant(level_reussi);
					level_unlock = niv_unlock();
				}
				niveau_select = menu_selection_level(niveau_select,fenetre,ecran, level_unlock);
				
			}
		}
		if(niveau_select == 6)
		{
			level_reussi = level_6(fenetre,ecran,compteur_mort,char_1_0,char_2_0,char_pos,fond_1_0, fond_2_0,wall_3_0,wall_3_1,wall1_pos,wall2_pos,wall3_pos,wall4_pos, 
					 wall5_pos,wall6_pos,wall7_pos,wall8_pos,wall9_pos, wall10_pos,wall11_pos,wall12_pos,wall13_pos, wall14_pos,wall15_pos,wall16_pos,wall17_pos,wall18_pos
					 ,wall19_pos,wall20_pos, wall21_pos,wall22_pos,wall23_pos,wall24_pos, wall25_pos,wall26_pos,wall27_pos,wall28_pos,wall29_pos,
					 wall30_pos,wall31_pos,wall32_pos,wall33_pos,  wall34_pos,wall35_pos,wall36_pos,wall37_pos,wall38_pos ,wall39_pos,wall40_pos);
			if(level_reussi == 6)
			{
				animation_level_complet6(fenetre, ecran, char_1_0, char_pos, wall_3_0, wall36_pos, wall17_pos, wall38_pos, wall39_pos);
				niv_suivant(level_reussi);
				
			}
		}
	}

	
	
	
	Mix_CloseAudio();
	TTF_Quit();
	SDL_Quit();
	return EXIT_SUCCESS;
}
