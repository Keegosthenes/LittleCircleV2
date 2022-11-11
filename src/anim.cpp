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

void animation_sens_1(SDL_Window *fenetre, SDL_Surface *ecran, SDL_Surface *compteur_mort, SDL_Rect mort_compt_pos, SDL_Surface *char_1_0,SDL_Rect char_pos, SDL_Surface *fond_1_0, 
						SDL_Surface *wall_3_0, SDL_Rect wall1_pos, SDL_Rect wall2_pos, SDL_Rect wall3_pos, SDL_Rect wall4_pos, 
					 SDL_Rect wall5_pos,SDL_Rect wall6_pos, SDL_Rect wall7_pos, SDL_Rect wall8_pos, SDL_Rect wall9_pos,
					  SDL_Rect wall10_pos, SDL_Rect wall11_pos, SDL_Rect wall12_pos, SDL_Rect wall13_pos, 
					 SDL_Rect wall14_pos,SDL_Rect wall15_pos, SDL_Rect wall16_pos, SDL_Rect wall17_pos, SDL_Rect wall18_pos
					 , SDL_Rect wall19_pos, SDL_Rect wall20_pos,SDL_Rect wall21_pos, SDL_Rect wall22_pos, SDL_Rect wall23_pos, SDL_Rect wall24_pos, 
					 SDL_Rect wall25_pos,SDL_Rect wall26_pos, SDL_Rect wall27_pos, SDL_Rect wall28_pos, SDL_Rect wall29_pos,
					  SDL_Rect wall30_pos, SDL_Rect wall31_pos, SDL_Rect wall32_pos, SDL_Rect wall33_pos, 
					 SDL_Rect wall34_pos,SDL_Rect wall35_pos, SDL_Rect wall36_pos, SDL_Rect wall37_pos, SDL_Rect wall38_pos
					 , SDL_Rect wall39_pos, SDL_Rect wall40_pos)
{
	int temps_precedent = 0, temps_actuel = 0;

	SDL_BlitSurface(fond_1_0, NULL, ecran, NULL);
	SDL_BlitSurface(char_1_0, NULL, ecran, &char_pos);
	SDL_BlitSurface(wall_3_0, NULL, ecran, &wall1_pos);
	SDL_BlitSurface(wall_3_0, NULL, ecran, &wall2_pos);
	SDL_BlitSurface(wall_3_0, NULL, ecran, &wall3_pos);
	SDL_BlitSurface(wall_3_0, NULL, ecran, &wall4_pos);
	SDL_BlitSurface(wall_3_0, NULL, ecran, &wall5_pos);
	SDL_BlitSurface(wall_3_0, NULL, ecran, &wall6_pos);
	SDL_BlitSurface(wall_3_0, NULL, ecran, &wall7_pos);
	SDL_BlitSurface(wall_3_0, NULL, ecran, &wall8_pos);
	SDL_BlitSurface(wall_3_0, NULL, ecran, &wall9_pos);
	SDL_BlitSurface(wall_3_0, NULL, ecran, &wall10_pos);
	SDL_BlitSurface(wall_3_0, NULL, ecran, &wall11_pos);
	SDL_BlitSurface(wall_3_0, NULL, ecran, &wall12_pos);
	SDL_BlitSurface(wall_3_0, NULL, ecran, &wall13_pos);
	SDL_BlitSurface(wall_3_0, NULL, ecran, &wall14_pos);
	SDL_BlitSurface(wall_3_0, NULL, ecran, &wall15_pos);
	SDL_BlitSurface(wall_3_0, NULL, ecran, &wall16_pos);
	SDL_BlitSurface(wall_3_0, NULL, ecran, &wall17_pos);
	SDL_BlitSurface(wall_3_0, NULL, ecran, &wall18_pos);
	SDL_BlitSurface(wall_3_0, NULL, ecran, &wall19_pos);
	SDL_BlitSurface(wall_3_0, NULL, ecran, &wall20_pos);
	SDL_BlitSurface(wall_3_0, NULL, ecran, &wall21_pos);
	SDL_BlitSurface(wall_3_0, NULL, ecran, &wall22_pos);
	SDL_BlitSurface(wall_3_0, NULL, ecran, &wall23_pos);
	SDL_BlitSurface(wall_3_0, NULL, ecran, &wall24_pos);
	SDL_BlitSurface(wall_3_0, NULL, ecran, &wall25_pos);
	SDL_BlitSurface(wall_3_0, NULL, ecran, &wall26_pos);
	SDL_BlitSurface(wall_3_0, NULL, ecran, &wall27_pos);
	SDL_BlitSurface(wall_3_0, NULL, ecran, &wall28_pos);
	SDL_BlitSurface(wall_3_0, NULL, ecran, &wall29_pos);
	SDL_BlitSurface(wall_3_0, NULL, ecran, &wall30_pos);
	SDL_BlitSurface(wall_3_0, NULL, ecran, &wall31_pos);
	SDL_BlitSurface(wall_3_0, NULL, ecran, &wall32_pos);
	SDL_BlitSurface(wall_3_0, NULL, ecran, &wall33_pos);
	SDL_BlitSurface(wall_3_0, NULL, ecran, &wall34_pos);
	SDL_BlitSurface(wall_3_0, NULL, ecran, &wall35_pos);
	SDL_BlitSurface(wall_3_0, NULL, ecran, &wall36_pos);
	SDL_BlitSurface(wall_3_0, NULL, ecran, &wall37_pos);
	SDL_BlitSurface(wall_3_0, NULL, ecran, &wall38_pos);
	SDL_BlitSurface(wall_3_0, NULL, ecran, &wall39_pos);
	SDL_BlitSurface(wall_3_0, NULL, ecran, &wall40_pos);
	SDL_BlitSurface(compteur_mort, NULL, ecran, &mort_compt_pos);
	SDL_UpdateWindowSurface(fenetre);

}

void animation_sens_2(SDL_Window *fenetre, SDL_Surface *ecran, SDL_Surface *compteur_mort, SDL_Rect mort_compt_pos, SDL_Surface *char_2_0, SDL_Rect char_pos, SDL_Surface *fond_2_0,
					 SDL_Surface *wall_3_1, SDL_Rect wall1_pos, SDL_Rect wall2_pos, SDL_Rect wall3_pos, SDL_Rect wall4_pos, 
					 SDL_Rect wall5_pos,SDL_Rect wall6_pos, SDL_Rect wall7_pos, SDL_Rect wall8_pos, SDL_Rect wall9_pos,
					  SDL_Rect wall10_pos, SDL_Rect wall11_pos, SDL_Rect wall12_pos, SDL_Rect wall13_pos, 
					 SDL_Rect wall14_pos,SDL_Rect wall15_pos, SDL_Rect wall16_pos, SDL_Rect wall17_pos, SDL_Rect wall18_pos
					 , SDL_Rect wall19_pos, SDL_Rect wall20_pos,SDL_Rect wall21_pos, SDL_Rect wall22_pos, SDL_Rect wall23_pos, SDL_Rect wall24_pos, 
					 SDL_Rect wall25_pos,SDL_Rect wall26_pos, SDL_Rect wall27_pos, SDL_Rect wall28_pos, SDL_Rect wall29_pos,
					  SDL_Rect wall30_pos, SDL_Rect wall31_pos, SDL_Rect wall32_pos, SDL_Rect wall33_pos, 
					 SDL_Rect wall34_pos,SDL_Rect wall35_pos, SDL_Rect wall36_pos, SDL_Rect wall37_pos, SDL_Rect wall38_pos
					 , SDL_Rect wall39_pos, SDL_Rect wall40_pos)
{
	int temps_precedent = 0, temps_actuel = 0;

	SDL_BlitSurface(fond_2_0, NULL, ecran, NULL);
	SDL_BlitSurface(char_2_0, NULL, ecran, &char_pos);
	SDL_BlitSurface(wall_3_1, NULL, ecran, &wall1_pos);
	SDL_BlitSurface(wall_3_1, NULL, ecran, &wall2_pos);
	SDL_BlitSurface(wall_3_1, NULL, ecran, &wall3_pos);
	SDL_BlitSurface(wall_3_1, NULL, ecran, &wall4_pos);
	SDL_BlitSurface(wall_3_1, NULL, ecran, &wall5_pos);
	SDL_BlitSurface(wall_3_1, NULL, ecran, &wall6_pos);
	SDL_BlitSurface(wall_3_1, NULL, ecran, &wall7_pos);
	SDL_BlitSurface(wall_3_1, NULL, ecran, &wall8_pos);
	SDL_BlitSurface(wall_3_1, NULL, ecran, &wall9_pos);
	SDL_BlitSurface(wall_3_1, NULL, ecran, &wall10_pos);
	SDL_BlitSurface(wall_3_1, NULL, ecran, &wall11_pos);
	SDL_BlitSurface(wall_3_1, NULL, ecran, &wall12_pos);
	SDL_BlitSurface(wall_3_1, NULL, ecran, &wall13_pos);
	SDL_BlitSurface(wall_3_1, NULL, ecran, &wall14_pos);
	SDL_BlitSurface(wall_3_1, NULL, ecran, &wall15_pos);
	SDL_BlitSurface(wall_3_1, NULL, ecran, &wall16_pos);
	SDL_BlitSurface(wall_3_1, NULL, ecran, &wall17_pos);
	SDL_BlitSurface(wall_3_1, NULL, ecran, &wall18_pos);
	SDL_BlitSurface(wall_3_1, NULL, ecran, &wall19_pos);
	SDL_BlitSurface(wall_3_1, NULL, ecran, &wall20_pos);
	SDL_BlitSurface(wall_3_1, NULL, ecran, &wall21_pos);
	SDL_BlitSurface(wall_3_1, NULL, ecran, &wall22_pos);
	SDL_BlitSurface(wall_3_1, NULL, ecran, &wall23_pos);
	SDL_BlitSurface(wall_3_1, NULL, ecran, &wall24_pos);
	SDL_BlitSurface(wall_3_1, NULL, ecran, &wall25_pos);
	SDL_BlitSurface(wall_3_1, NULL, ecran, &wall26_pos);
	SDL_BlitSurface(wall_3_1, NULL, ecran, &wall27_pos);
	SDL_BlitSurface(wall_3_1, NULL, ecran, &wall28_pos);
	SDL_BlitSurface(wall_3_1, NULL, ecran, &wall29_pos);
	SDL_BlitSurface(wall_3_1, NULL, ecran, &wall30_pos);
	SDL_BlitSurface(wall_3_1, NULL, ecran, &wall31_pos);
	SDL_BlitSurface(wall_3_1, NULL, ecran, &wall32_pos);
	SDL_BlitSurface(wall_3_1, NULL, ecran, &wall33_pos);
	SDL_BlitSurface(wall_3_1, NULL, ecran, &wall34_pos);
	SDL_BlitSurface(wall_3_1, NULL, ecran, &wall35_pos);
	SDL_BlitSurface(wall_3_1, NULL, ecran, &wall36_pos);
	SDL_BlitSurface(wall_3_1, NULL, ecran, &wall37_pos);
	SDL_BlitSurface(wall_3_1, NULL, ecran, &wall38_pos);
	SDL_BlitSurface(wall_3_1, NULL, ecran, &wall39_pos);
	SDL_BlitSurface(wall_3_1, NULL, ecran, &wall40_pos);
	SDL_BlitSurface(compteur_mort, NULL, ecran, &mort_compt_pos);
	SDL_UpdateWindowSurface(fenetre);

}

void animation_level_complet(SDL_Window *fenetre, SDL_Surface *ecran)
{
	SDL_Surface *fond;
	TTF_Font *police;
	SDL_Surface *text;
	SDL_Rect text_pos;
	SDL_Color blanc = {255, 255, 255, 60};
	Mix_Music *lvl_completed;
	lvl_completed = Mix_LoadMUS("src/audio/Level_completed_sound.mp3");
	police = TTF_OpenFont("src/ttf/Robot Crush.ttf", 100);
	text = TTF_RenderText_Blended(police, "level completed", blanc);
	fond = IMG_Load("src/texture/fond/2/fond_2.png");
	text_pos.x = (1500 / 2) - 500;
	text_pos.y = (1000 / 2) - 100;
	SDL_BlitSurface(fond, NULL, ecran, NULL);
	SDL_BlitSurface(text, NULL, ecran, &text_pos);
	SDL_UpdateWindowSurface(fenetre);
	SDL_Delay(50);
	blanc = {255, 255, 255, 50};
	text = TTF_RenderText_Blended(police, "level completed", blanc);
	SDL_BlitSurface(fond, NULL, ecran, NULL);
	SDL_BlitSurface(text, NULL, ecran, &text_pos);
	SDL_UpdateWindowSurface(fenetre);
	SDL_Delay(50);
	blanc = {255, 255, 255, 40};
	text = TTF_RenderText_Blended(police, "level completed", blanc);
	SDL_BlitSurface(fond, NULL, ecran, NULL);
	SDL_BlitSurface(text, NULL, ecran, &text_pos);
	SDL_UpdateWindowSurface(fenetre);
	SDL_Delay(50);
	blanc = {255, 255, 255, 30};
	text = TTF_RenderText_Blended(police, "level completed", blanc);
	SDL_BlitSurface(fond, NULL, ecran, NULL);
	SDL_BlitSurface(text, NULL, ecran, &text_pos);
	SDL_UpdateWindowSurface(fenetre);
	SDL_Delay(50);
	blanc = {255, 255, 255, 20};
	text = TTF_RenderText_Blended(police, "level completed", blanc);
	SDL_BlitSurface(fond, NULL, ecran, NULL);
	SDL_BlitSurface(text, NULL, ecran, &text_pos);
	SDL_UpdateWindowSurface(fenetre);
	SDL_Delay(50);
	blanc = {255, 255, 255, 10};
	text = TTF_RenderText_Blended(police, "level completed", blanc);
	SDL_BlitSurface(fond, NULL, ecran, NULL);
	SDL_BlitSurface(text, NULL, ecran, &text_pos);
	SDL_UpdateWindowSurface(fenetre);
	Mix_PlayMusic(lvl_completed, 1);
	SDL_Delay(50);
	blanc = {255, 255, 255, 0};
	text = TTF_RenderText_Blended(police, "level completed", blanc);
	SDL_BlitSurface(fond, NULL, ecran, NULL);
	SDL_BlitSurface(text, NULL, ecran, &text_pos);
	SDL_UpdateWindowSurface(fenetre);
	SDL_Delay(2000);
	
}

void animation_level_complet6(SDL_Window *fenetre, SDL_Surface *ecran,SDL_Surface *char_1_0,SDL_Rect char_pos,
							SDL_Surface *wall_3_0, SDL_Rect wall36_pos, SDL_Rect wall37_pos, SDL_Rect wall38_pos, SDL_Rect wall39_pos)
{
	SDL_Surface *fond;
	TTF_Font *police;
	SDL_Surface *text;
	SDL_Rect text_pos;
	SDL_Color blanc = {255, 255, 255, 60};
	Mix_Music *lvl_completed;
	Mix_Music *die;
	lvl_completed = Mix_LoadMUS("src/audio/Rien.mp3");
	die = Mix_LoadMUS("src/audio/5.mp3");
	police = TTF_OpenFont("src/ttf/Robot Crush.ttf", 100);
	text = TTF_RenderText_Blended(police, ":)", blanc);
	fond = IMG_Load("src/texture/fond/2/fond_2.png");
	Mix_PlayMusic(lvl_completed, 1);
	text_pos.x = (1500 / 2) - 50;
	text_pos.y = (1000 / 2) - 100;
	SDL_BlitSurface(fond, NULL, ecran, NULL);
	SDL_BlitSurface(text, NULL, ecran, &text_pos);
	SDL_UpdateWindowSurface(fenetre);
	SDL_Delay(50);
	blanc = {255, 255, 255, 50};
	text = TTF_RenderText_Blended(police, ":)", blanc);
	SDL_BlitSurface(fond, NULL, ecran, NULL);
	SDL_BlitSurface(text, NULL, ecran, &text_pos);
	SDL_UpdateWindowSurface(fenetre);
	SDL_Delay(50);
	blanc = {255, 255, 255, 40};
	text = TTF_RenderText_Blended(police, ":)", blanc);
	SDL_BlitSurface(fond, NULL, ecran, NULL);
	SDL_BlitSurface(text, NULL, ecran, &text_pos);
	SDL_UpdateWindowSurface(fenetre);
	SDL_Delay(50);
	blanc = {255, 255, 255, 30};
	text = TTF_RenderText_Blended(police, ":)", blanc);
	SDL_BlitSurface(fond, NULL, ecran, NULL);
	SDL_BlitSurface(text, NULL, ecran, &text_pos);
	SDL_UpdateWindowSurface(fenetre);
	SDL_Delay(50);
	blanc = {255, 255, 255, 20};
	text = TTF_RenderText_Blended(police, ":)", blanc);
	SDL_BlitSurface(fond, NULL, ecran, NULL);
	SDL_BlitSurface(text, NULL, ecran, &text_pos);
	SDL_UpdateWindowSurface(fenetre);
	SDL_Delay(50);
	blanc = {255, 255, 255, 10};
	text = TTF_RenderText_Blended(police, ":)", blanc);
	SDL_BlitSurface(fond, NULL, ecran, NULL);
	SDL_BlitSurface(text, NULL, ecran, &text_pos);
	SDL_UpdateWindowSurface(fenetre);
	Mix_PlayMusic(lvl_completed, 1);
	SDL_Delay(50);
	blanc = {255, 255, 255, 0};
	text = TTF_RenderText_Blended(police, ":)", blanc);
	SDL_BlitSurface(fond, NULL, ecran, NULL);
	SDL_BlitSurface(text, NULL, ecran, &text_pos);
	SDL_UpdateWindowSurface(fenetre);
	SDL_Delay(2000);
	wall36_pos.x = 800;
	wall36_pos.y = 200;
	wall37_pos.x = 800;
	wall37_pos.y = 350;
	wall38_pos.x = 800;
	wall38_pos.y = 500;
	wall39_pos.x = 800;
	wall39_pos.y = 650;
	SDL_bool end = SDL_TRUE;
	auto temps_precedent = 0, temps_actuel = 0;
	while(end)
	{
		SDL_Event event;
		while(SDL_PollEvent(&event))
		{
			switch(event.type)
			{
				SDL_QUIT:
					end = SDL_FALSE;
					break;
				
				default:
					continue;
			}
		}
		temps_actuel = SDL_GetTicks();
		if(temps_actuel - temps_precedent > 1)
		{
			wall36_pos.x -= 2;
			wall37_pos.x -= 2;
			wall38_pos.x -= 2;
			wall39_pos.x -= 2;
		}
		SDL_BlitSurface(fond, NULL, ecran, NULL);
		SDL_BlitSurface(text, NULL, ecran, &text_pos);
		SDL_BlitSurface(wall_3_0, NULL, ecran, &wall36_pos);
		SDL_BlitSurface(wall_3_0, NULL, ecran, &wall36_pos);
		SDL_BlitSurface(wall_3_0, NULL, ecran, &wall37_pos);
		SDL_BlitSurface(wall_3_0, NULL, ecran, &wall38_pos);
		SDL_BlitSurface(wall_3_0, NULL, ecran, &wall39_pos);
		SDL_BlitSurface(char_1_0, NULL, ecran, &char_pos);
		SDL_UpdateWindowSurface(fenetre);
		temps_precedent = temps_actuel;
		temps_actuel = 0;
		
		if(wall39_pos.x < 275 + 60)
		{
			Mix_PlayMusic(die, 1);
			SDL_Delay(2000);
			end = SDL_FALSE;
		}
	}
	
}
