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


int menu_selection_level(int &niveau_select, SDL_Window *fenetre, SDL_Surface *ecran, int &level_unlock)
{
	SDL_Surface *fond;
	SDL_Surface *niveau_1, *niveau_2, *niveau_3, *niveau_4, *niveau_5, *niveau_6;
	SDL_Rect niv1_pos, niv2_pos, niv3_pos, niv4_pos, niv5_pos, niv6_pos;
	niv1_pos.x = 220 - 100;
	niv1_pos.y = 330;
	niv2_pos.x = 440 * 2 - 200;
	niv2_pos.y = 330;
	niv3_pos.x = 660 * 2 - 100;
	niv3_pos.y = 330;
	niv4_pos.x = 220 - 100;
	niv4_pos.y = 660;
	niv5_pos.x = 440 * 2 - 200;
	niv5_pos.y = 660;
	niv6_pos.x = 660 * 2 - 100;
	niv6_pos.y = 660;
	TTF_Font *police;
	SDL_Surface *fond_1_0;
	SDL_bool menu_select = SDL_TRUE;
	SDL_Color rouge = {255, 0, 0};
	SDL_Color noir = {0, 0, 0};
	SDL_Color gris = {124, 124, 124};
	Mix_Music *sound_button;
	int arl_sound = 0;
	sound_button = Mix_LoadMUS("src/audio/boutton.mp3");
	police = TTF_OpenFont("src/ttf/Robot Crush.ttf", 50);
	fond = IMG_Load("src/texture/fond/1/1/fond1-0.png");
	
	niveau_1 = TTF_RenderText_Blended(police, "level 1", noir);
	niveau_2 = TTF_RenderText_Blended(police, "level 2", noir);
	niveau_3 = TTF_RenderText_Blended(police, "level 3", noir);
	niveau_4 = TTF_RenderText_Blended(police, "level 4", noir);
	niveau_5 = TTF_RenderText_Blended(police, "level 5", noir);
	niveau_6 = TTF_RenderText_Blended(police, "level 6", noir);
	
	SDL_BlitSurface(fond, NULL, ecran, NULL);
	SDL_BlitSurface(niveau_1, NULL, ecran, &niv1_pos);
	SDL_BlitSurface(niveau_2, NULL, ecran, &niv2_pos);
	SDL_BlitSurface(niveau_3, NULL, ecran, &niv3_pos);
	SDL_BlitSurface(niveau_4, NULL, ecran, &niv4_pos);
	SDL_BlitSurface(niveau_5, NULL, ecran, &niv5_pos);
	SDL_BlitSurface(niveau_6, NULL, ecran, &niv6_pos);
	SDL_UpdateWindowSurface(fenetre);
	
	
	while(menu_select)
	{
		SDL_Event event_menu;
		while(SDL_PollEvent(&event_menu))
		{
			switch(event_menu.type)
			{
				case SDL_MOUSEMOTION:
					if(level_unlock == 0)
					{
						
						
					if(event_menu.motion.x > niv1_pos.x && event_menu.motion.x < niv1_pos.x + 180 && event_menu.motion.y > niv1_pos.y && event_menu.motion.y < niv1_pos.y + 50)
					{
						if(arl_sound == 0)
						{
							Mix_PlayMusic(sound_button, 1);
							arl_sound = 1;
						}
						niveau_1 = TTF_RenderText_Blended(police, "level 1", rouge);
						niveau_2 = TTF_RenderText_Blended(police, "level 2", noir);
						niveau_3 = TTF_RenderText_Blended(police, "level 3", noir);
						niveau_4 = TTF_RenderText_Blended(police, "level 4", noir);
						niveau_5 = TTF_RenderText_Blended(police, "level 5", noir);
						niveau_6 = TTF_RenderText_Blended(police, "level 6", noir);
						SDL_BlitSurface(niveau_1, NULL, ecran, &niv1_pos);
						SDL_BlitSurface(niveau_2, NULL, ecran, &niv2_pos);
						SDL_BlitSurface(niveau_3, NULL, ecran, &niv3_pos);
						SDL_BlitSurface(niveau_4, NULL, ecran, &niv4_pos);
						SDL_BlitSurface(niveau_5, NULL, ecran, &niv5_pos);
						SDL_BlitSurface(niveau_6, NULL, ecran, &niv6_pos);
						SDL_UpdateWindowSurface(fenetre);
					}
					else
					{
						niveau_1 = TTF_RenderText_Blended(police, "level 1", noir);
						niveau_2 = TTF_RenderText_Blended(police, "level 2", noir);
						niveau_3 = TTF_RenderText_Blended(police, "level 3", noir);
						niveau_4 = TTF_RenderText_Blended(police, "level 4", noir);
						niveau_5 = TTF_RenderText_Blended(police, "level 5", noir);
						niveau_6 = TTF_RenderText_Blended(police, "level 6", noir);
						SDL_BlitSurface(niveau_1, NULL, ecran, &niv1_pos);
						SDL_BlitSurface(niveau_2, NULL, ecran, &niv2_pos);
						SDL_BlitSurface(niveau_3, NULL, ecran, &niv3_pos);
						SDL_BlitSurface(niveau_4, NULL, ecran, &niv4_pos);
						SDL_BlitSurface(niveau_5, NULL, ecran, &niv5_pos);
						SDL_BlitSurface(niveau_6, NULL, ecran, &niv6_pos);
						SDL_UpdateWindowSurface(fenetre);
						arl_sound = 0;
					}
					
					
					
					}
					if(level_unlock == 0)
					{
						if(event_menu.motion.x > niv1_pos.x && event_menu.motion.x < niv1_pos.x + 180 && event_menu.motion.y > niv1_pos.y && event_menu.motion.y < niv1_pos.y + 50)
					{
						if(arl_sound == 0)
						{
							Mix_PlayMusic(sound_button, 1);
							arl_sound = 1;
						}
						niveau_1 = TTF_RenderText_Blended(police, "level 1", rouge);
						niveau_2 = TTF_RenderText_Blended(police, "level 2", noir);
						niveau_3 = TTF_RenderText_Blended(police, "level 3", noir);
						niveau_4 = TTF_RenderText_Blended(police, "level 4", noir);
						niveau_5 = TTF_RenderText_Blended(police, "level 5", noir);
						niveau_6 = TTF_RenderText_Blended(police, "level 6", noir);
						SDL_BlitSurface(niveau_1, NULL, ecran, &niv1_pos);
						SDL_BlitSurface(niveau_2, NULL, ecran, &niv2_pos);
						SDL_BlitSurface(niveau_3, NULL, ecran, &niv3_pos);
						SDL_BlitSurface(niveau_4, NULL, ecran, &niv4_pos);
						SDL_BlitSurface(niveau_5, NULL, ecran, &niv5_pos);
						SDL_BlitSurface(niveau_6, NULL, ecran, &niv6_pos);
						SDL_UpdateWindowSurface(fenetre);
					}
					}
					if(level_unlock == 1)
					{
						if(event_menu.motion.x > niv1_pos.x && event_menu.motion.x < niv1_pos.x + 180 && event_menu.motion.y > niv1_pos.y && event_menu.motion.y < niv1_pos.y + 50)
					{
						if(arl_sound == 0)
						{
							Mix_PlayMusic(sound_button, 1);
							arl_sound = 1;
						}
						niveau_1 = TTF_RenderText_Blended(police, "level 1", rouge);
						niveau_2 = TTF_RenderText_Blended(police, "level 2", noir);
						niveau_3 = TTF_RenderText_Blended(police, "level 3", noir);
						niveau_4 = TTF_RenderText_Blended(police, "level 4", noir);
						niveau_5 = TTF_RenderText_Blended(police, "level 5", noir);
						niveau_6 = TTF_RenderText_Blended(police, "level 6", noir);
						SDL_BlitSurface(niveau_1, NULL, ecran, &niv1_pos);
						SDL_BlitSurface(niveau_2, NULL, ecran, &niv2_pos);
						SDL_BlitSurface(niveau_3, NULL, ecran, &niv3_pos);
						SDL_BlitSurface(niveau_4, NULL, ecran, &niv4_pos);
						SDL_BlitSurface(niveau_5, NULL, ecran, &niv5_pos);
						SDL_BlitSurface(niveau_6, NULL, ecran, &niv6_pos);
						SDL_UpdateWindowSurface(fenetre);
					}
						else if(event_menu.motion.x > niv2_pos.x && event_menu.motion.x < niv2_pos.x + 180 && event_menu.motion.y > niv2_pos.y && event_menu.motion.y < niv2_pos.y + 50)
					{
						if(arl_sound == 0)
						{
							Mix_PlayMusic(sound_button, 1);
							arl_sound = 1;
						}
						niveau_1 = TTF_RenderText_Blended(police, "level 1", noir);
						niveau_2 = TTF_RenderText_Blended(police, "level 2", rouge);
						niveau_3 = TTF_RenderText_Blended(police, "level 3", noir);
						niveau_4 = TTF_RenderText_Blended(police, "level 4", noir);
						niveau_5 = TTF_RenderText_Blended(police, "level 5", noir);
						niveau_6 = TTF_RenderText_Blended(police, "level 6", noir);
						SDL_BlitSurface(niveau_1, NULL, ecran, &niv1_pos);
						SDL_BlitSurface(niveau_2, NULL, ecran, &niv2_pos);
						SDL_BlitSurface(niveau_3, NULL, ecran, &niv3_pos);
						SDL_BlitSurface(niveau_4, NULL, ecran, &niv4_pos);
						SDL_BlitSurface(niveau_5, NULL, ecran, &niv5_pos);
						SDL_BlitSurface(niveau_6, NULL, ecran, &niv6_pos);
						SDL_UpdateWindowSurface(fenetre);
					}
						else
					{
						niveau_1 = TTF_RenderText_Blended(police, "level 1", noir);
						niveau_2 = TTF_RenderText_Blended(police, "level 2", noir);
						niveau_3 = TTF_RenderText_Blended(police, "level 3", noir);
						niveau_4 = TTF_RenderText_Blended(police, "level 4", noir);
						niveau_5 = TTF_RenderText_Blended(police, "level 5", noir);
						niveau_6 = TTF_RenderText_Blended(police, "level 6", noir);
						SDL_BlitSurface(niveau_1, NULL, ecran, &niv1_pos);
						SDL_BlitSurface(niveau_2, NULL, ecran, &niv2_pos);
						SDL_BlitSurface(niveau_3, NULL, ecran, &niv3_pos);
						SDL_BlitSurface(niveau_4, NULL, ecran, &niv4_pos);
						SDL_BlitSurface(niveau_5, NULL, ecran, &niv5_pos);
						SDL_BlitSurface(niveau_6, NULL, ecran, &niv6_pos);
						SDL_UpdateWindowSurface(fenetre);
						arl_sound = 0;
					}
					
					}
					
					if(level_unlock == 2)
					{
						if(event_menu.motion.x > niv1_pos.x && event_menu.motion.x < niv1_pos.x + 180 && event_menu.motion.y > niv1_pos.y && event_menu.motion.y < niv1_pos.y + 50)
					{
						if(arl_sound == 0)
						{
							Mix_PlayMusic(sound_button, 1);
							arl_sound = 1;
						}
						niveau_1 = TTF_RenderText_Blended(police, "level 1", rouge);
						niveau_2 = TTF_RenderText_Blended(police, "level 2", noir);
						niveau_3 = TTF_RenderText_Blended(police, "level 3", noir);
						niveau_4 = TTF_RenderText_Blended(police, "level 4", noir);
						niveau_5 = TTF_RenderText_Blended(police, "level 5", noir);
						niveau_6 = TTF_RenderText_Blended(police, "level 6", noir);
						SDL_BlitSurface(niveau_1, NULL, ecran, &niv1_pos);
						SDL_BlitSurface(niveau_2, NULL, ecran, &niv2_pos);
						SDL_BlitSurface(niveau_3, NULL, ecran, &niv3_pos);
						SDL_BlitSurface(niveau_4, NULL, ecran, &niv4_pos);
						SDL_BlitSurface(niveau_5, NULL, ecran, &niv5_pos);
						SDL_BlitSurface(niveau_6, NULL, ecran, &niv6_pos);
						SDL_UpdateWindowSurface(fenetre);
					}
					else if(event_menu.motion.x > niv2_pos.x && event_menu.motion.x < niv2_pos.x + 180 && event_menu.motion.y > niv2_pos.y && event_menu.motion.y < niv2_pos.y + 50)
					{
						if(arl_sound == 0)
						{
							Mix_PlayMusic(sound_button, 1);
							arl_sound = 1;
						}
						niveau_1 = TTF_RenderText_Blended(police, "level 1", noir);
						niveau_2 = TTF_RenderText_Blended(police, "level 2", rouge);
						niveau_3 = TTF_RenderText_Blended(police, "level 3", noir);
						niveau_4 = TTF_RenderText_Blended(police, "level 4", noir);
						niveau_5 = TTF_RenderText_Blended(police, "level 5", noir);
						niveau_6 = TTF_RenderText_Blended(police, "level 6", noir);
						SDL_BlitSurface(niveau_1, NULL, ecran, &niv1_pos);
						SDL_BlitSurface(niveau_2, NULL, ecran, &niv2_pos);
						SDL_BlitSurface(niveau_3, NULL, ecran, &niv3_pos);
						SDL_BlitSurface(niveau_4, NULL, ecran, &niv4_pos);
						SDL_BlitSurface(niveau_5, NULL, ecran, &niv5_pos);
						SDL_BlitSurface(niveau_6, NULL, ecran, &niv6_pos);
						SDL_UpdateWindowSurface(fenetre);
					}
					else if(event_menu.motion.x > niv3_pos.x && event_menu.motion.x < niv3_pos.x + 180 && event_menu.motion.y > niv3_pos.y && event_menu.motion.y < niv3_pos.y + 50)
					{
						if(arl_sound == 0)
						{
							Mix_PlayMusic(sound_button, 1);
							arl_sound = 1;
						}
						niveau_1 = TTF_RenderText_Blended(police, "level 1", noir);
						niveau_2 = TTF_RenderText_Blended(police, "level 2", noir);
						niveau_3 = TTF_RenderText_Blended(police, "level 3", rouge);
						niveau_4 = TTF_RenderText_Blended(police, "level 4", noir);
						niveau_5 = TTF_RenderText_Blended(police, "level 5", noir);
						niveau_6 = TTF_RenderText_Blended(police, "level 6", noir);
						SDL_BlitSurface(niveau_1, NULL, ecran, &niv1_pos);
						SDL_BlitSurface(niveau_2, NULL, ecran, &niv2_pos);
						SDL_BlitSurface(niveau_3, NULL, ecran, &niv3_pos);
						SDL_BlitSurface(niveau_4, NULL, ecran, &niv4_pos);
						SDL_BlitSurface(niveau_5, NULL, ecran, &niv5_pos);
						SDL_BlitSurface(niveau_6, NULL, ecran, &niv6_pos);
						SDL_UpdateWindowSurface(fenetre);
					}
						else
					{
						niveau_1 = TTF_RenderText_Blended(police, "level 1", noir);
						niveau_2 = TTF_RenderText_Blended(police, "level 2", noir);
						niveau_3 = TTF_RenderText_Blended(police, "level 3", noir);
						niveau_4 = TTF_RenderText_Blended(police, "level 4", noir);
						niveau_5 = TTF_RenderText_Blended(police, "level 5", noir);
						niveau_6 = TTF_RenderText_Blended(police, "level 6", noir);
						SDL_BlitSurface(niveau_1, NULL, ecran, &niv1_pos);
						SDL_BlitSurface(niveau_2, NULL, ecran, &niv2_pos);
						SDL_BlitSurface(niveau_3, NULL, ecran, &niv3_pos);
						SDL_BlitSurface(niveau_4, NULL, ecran, &niv4_pos);
						SDL_BlitSurface(niveau_5, NULL, ecran, &niv5_pos);
						SDL_BlitSurface(niveau_6, NULL, ecran, &niv6_pos);
						SDL_UpdateWindowSurface(fenetre);
						arl_sound = 0;
					}
					
					}
					
					if(level_unlock == 3)
					{
						if(event_menu.motion.x > niv1_pos.x && event_menu.motion.x < niv1_pos.x + 180 && event_menu.motion.y > niv1_pos.y && event_menu.motion.y < niv1_pos.y + 50)
					{
						if(arl_sound == 0)
						{
							Mix_PlayMusic(sound_button, 1);
							arl_sound = 1;
						}
						niveau_1 = TTF_RenderText_Blended(police, "level 1", rouge);
						niveau_2 = TTF_RenderText_Blended(police, "level 2", noir);
						niveau_3 = TTF_RenderText_Blended(police, "level 3", noir);
						niveau_4 = TTF_RenderText_Blended(police, "level 4", noir);
						niveau_5 = TTF_RenderText_Blended(police, "level 5", noir);
						niveau_6 = TTF_RenderText_Blended(police, "level 6", noir);
						SDL_BlitSurface(niveau_1, NULL, ecran, &niv1_pos);
						SDL_BlitSurface(niveau_2, NULL, ecran, &niv2_pos);
						SDL_BlitSurface(niveau_3, NULL, ecran, &niv3_pos);
						SDL_BlitSurface(niveau_4, NULL, ecran, &niv4_pos);
						SDL_BlitSurface(niveau_5, NULL, ecran, &niv5_pos);
						SDL_BlitSurface(niveau_6, NULL, ecran, &niv6_pos);
						SDL_UpdateWindowSurface(fenetre);
					}
					else if(event_menu.motion.x > niv2_pos.x && event_menu.motion.x < niv2_pos.x + 180 && event_menu.motion.y > niv2_pos.y && event_menu.motion.y < niv2_pos.y + 50)
					{
						if(arl_sound == 0)
						{
							Mix_PlayMusic(sound_button, 1);
							arl_sound = 1;
						}
						niveau_1 = TTF_RenderText_Blended(police, "level 1", noir);
						niveau_2 = TTF_RenderText_Blended(police, "level 2", rouge);
						niveau_3 = TTF_RenderText_Blended(police, "level 3", noir);
						niveau_4 = TTF_RenderText_Blended(police, "level 4", noir);
						niveau_5 = TTF_RenderText_Blended(police, "level 5", noir);
						niveau_6 = TTF_RenderText_Blended(police, "level 6", noir);
						SDL_BlitSurface(niveau_1, NULL, ecran, &niv1_pos);
						SDL_BlitSurface(niveau_2, NULL, ecran, &niv2_pos);
						SDL_BlitSurface(niveau_3, NULL, ecran, &niv3_pos);
						SDL_BlitSurface(niveau_4, NULL, ecran, &niv4_pos);
						SDL_BlitSurface(niveau_5, NULL, ecran, &niv5_pos);
						SDL_BlitSurface(niveau_6, NULL, ecran, &niv6_pos);
						SDL_UpdateWindowSurface(fenetre);
					}
					else if(event_menu.motion.x > niv3_pos.x && event_menu.motion.x < niv3_pos.x + 180 && event_menu.motion.y > niv3_pos.y && event_menu.motion.y < niv3_pos.y + 50)
					{
						if(arl_sound == 0)
						{
							Mix_PlayMusic(sound_button, 1);
							arl_sound = 1;
						}
						niveau_1 = TTF_RenderText_Blended(police, "level 1", noir);
						niveau_2 = TTF_RenderText_Blended(police, "level 2", noir);
						niveau_3 = TTF_RenderText_Blended(police, "level 3", rouge);
						niveau_4 = TTF_RenderText_Blended(police, "level 4", noir);
						niveau_5 = TTF_RenderText_Blended(police, "level 5", noir);
						niveau_6 = TTF_RenderText_Blended(police, "level 6", noir);
						SDL_BlitSurface(niveau_1, NULL, ecran, &niv1_pos);
						SDL_BlitSurface(niveau_2, NULL, ecran, &niv2_pos);
						SDL_BlitSurface(niveau_3, NULL, ecran, &niv3_pos);
						SDL_BlitSurface(niveau_4, NULL, ecran, &niv4_pos);
						SDL_BlitSurface(niveau_5, NULL, ecran, &niv5_pos);
						SDL_BlitSurface(niveau_6, NULL, ecran, &niv6_pos);
						SDL_UpdateWindowSurface(fenetre);
					}
					else if(event_menu.motion.x > niv4_pos.x && event_menu.motion.x < niv4_pos.x + 180 && event_menu.motion.y > niv4_pos.y && event_menu.motion.y < niv4_pos.y + 50)
					{
						if(arl_sound == 0)
						{
							Mix_PlayMusic(sound_button, 1);
							arl_sound = 1;
						}
						niveau_1 = TTF_RenderText_Blended(police, "level 1", noir);
						niveau_2 = TTF_RenderText_Blended(police, "level 2", noir);
						niveau_3 = TTF_RenderText_Blended(police, "level 3", noir);
						niveau_4 = TTF_RenderText_Blended(police, "level 4", rouge);
						niveau_5 = TTF_RenderText_Blended(police, "level 5", noir);
						niveau_6 = TTF_RenderText_Blended(police, "level 6", noir);
						SDL_BlitSurface(niveau_1, NULL, ecran, &niv1_pos);
						SDL_BlitSurface(niveau_2, NULL, ecran, &niv2_pos);
						SDL_BlitSurface(niveau_3, NULL, ecran, &niv3_pos);
						SDL_BlitSurface(niveau_4, NULL, ecran, &niv4_pos);
						SDL_BlitSurface(niveau_5, NULL, ecran, &niv5_pos);
						SDL_BlitSurface(niveau_6, NULL, ecran, &niv6_pos);
						SDL_UpdateWindowSurface(fenetre);
					}
						else
					{
						niveau_1 = TTF_RenderText_Blended(police, "level 1", noir);
						niveau_2 = TTF_RenderText_Blended(police, "level 2", noir);
						niveau_3 = TTF_RenderText_Blended(police, "level 3", noir);
						niveau_4 = TTF_RenderText_Blended(police, "level 4", noir);
						niveau_5 = TTF_RenderText_Blended(police, "level 5", noir);
						niveau_6 = TTF_RenderText_Blended(police, "level 6", noir);
						SDL_BlitSurface(niveau_1, NULL, ecran, &niv1_pos);
						SDL_BlitSurface(niveau_2, NULL, ecran, &niv2_pos);
						SDL_BlitSurface(niveau_3, NULL, ecran, &niv3_pos);
						SDL_BlitSurface(niveau_4, NULL, ecran, &niv4_pos);
						SDL_BlitSurface(niveau_5, NULL, ecran, &niv5_pos);
						SDL_BlitSurface(niveau_6, NULL, ecran, &niv6_pos);
						SDL_UpdateWindowSurface(fenetre);
						arl_sound = 0;
					}
					
					}
					
					if(level_unlock == 4)
					{
						if(event_menu.motion.x > niv1_pos.x && event_menu.motion.x < niv1_pos.x + 180 && event_menu.motion.y > niv1_pos.y && event_menu.motion.y < niv1_pos.y + 50)
					{
						if(arl_sound == 0)
						{
							Mix_PlayMusic(sound_button, 1);
							arl_sound = 1;
						}
						niveau_1 = TTF_RenderText_Blended(police, "level 1", rouge);
						niveau_2 = TTF_RenderText_Blended(police, "level 2", noir);
						niveau_3 = TTF_RenderText_Blended(police, "level 3", noir);
						niveau_4 = TTF_RenderText_Blended(police, "level 4", noir);
						niveau_5 = TTF_RenderText_Blended(police, "level 5", noir);
						niveau_6 = TTF_RenderText_Blended(police, "level 6", noir);
						SDL_BlitSurface(niveau_1, NULL, ecran, &niv1_pos);
						SDL_BlitSurface(niveau_2, NULL, ecran, &niv2_pos);
						SDL_BlitSurface(niveau_3, NULL, ecran, &niv3_pos);
						SDL_BlitSurface(niveau_4, NULL, ecran, &niv4_pos);
						SDL_BlitSurface(niveau_5, NULL, ecran, &niv5_pos);
						SDL_BlitSurface(niveau_6, NULL, ecran, &niv6_pos);
						SDL_UpdateWindowSurface(fenetre);
					}
					else if(event_menu.motion.x > niv2_pos.x && event_menu.motion.x < niv2_pos.x + 180 && event_menu.motion.y > niv2_pos.y && event_menu.motion.y < niv2_pos.y + 50)
					{
						if(arl_sound == 0)
						{
							Mix_PlayMusic(sound_button, 1);
							arl_sound = 1;
						}
						niveau_1 = TTF_RenderText_Blended(police, "level 1", noir);
						niveau_2 = TTF_RenderText_Blended(police, "level 2", rouge);
						niveau_3 = TTF_RenderText_Blended(police, "level 3", noir);
						niveau_4 = TTF_RenderText_Blended(police, "level 4", noir);
						niveau_5 = TTF_RenderText_Blended(police, "level 5", noir);
						niveau_6 = TTF_RenderText_Blended(police, "level 6", noir);
						SDL_BlitSurface(niveau_1, NULL, ecran, &niv1_pos);
						SDL_BlitSurface(niveau_2, NULL, ecran, &niv2_pos);
						SDL_BlitSurface(niveau_3, NULL, ecran, &niv3_pos);
						SDL_BlitSurface(niveau_4, NULL, ecran, &niv4_pos);
						SDL_BlitSurface(niveau_5, NULL, ecran, &niv5_pos);
						SDL_BlitSurface(niveau_6, NULL, ecran, &niv6_pos);
						SDL_UpdateWindowSurface(fenetre);
					}
					else if(event_menu.motion.x > niv3_pos.x && event_menu.motion.x < niv3_pos.x + 180 && event_menu.motion.y > niv3_pos.y && event_menu.motion.y < niv3_pos.y + 50)
					{
						if(arl_sound == 0)
						{
							Mix_PlayMusic(sound_button, 1);
							arl_sound = 1;
						}
						niveau_1 = TTF_RenderText_Blended(police, "level 1", noir);
						niveau_2 = TTF_RenderText_Blended(police, "level 2", noir);
						niveau_3 = TTF_RenderText_Blended(police, "level 3", rouge);
						niveau_4 = TTF_RenderText_Blended(police, "level 4", noir);
						niveau_5 = TTF_RenderText_Blended(police, "level 5", noir);
						niveau_6 = TTF_RenderText_Blended(police, "level 6", noir);
						SDL_BlitSurface(niveau_1, NULL, ecran, &niv1_pos);
						SDL_BlitSurface(niveau_2, NULL, ecran, &niv2_pos);
						SDL_BlitSurface(niveau_3, NULL, ecran, &niv3_pos);
						SDL_BlitSurface(niveau_4, NULL, ecran, &niv4_pos);
						SDL_BlitSurface(niveau_5, NULL, ecran, &niv5_pos);
						SDL_BlitSurface(niveau_6, NULL, ecran, &niv6_pos);
						SDL_UpdateWindowSurface(fenetre);
					}
					else if(event_menu.motion.x > niv4_pos.x && event_menu.motion.x < niv4_pos.x + 180 && event_menu.motion.y > niv4_pos.y && event_menu.motion.y < niv4_pos.y + 50)
					{
						if(arl_sound == 0)
						{
							Mix_PlayMusic(sound_button, 1);
							arl_sound = 1;
						}
						niveau_1 = TTF_RenderText_Blended(police, "level 1", noir);
						niveau_2 = TTF_RenderText_Blended(police, "level 2", noir);
						niveau_3 = TTF_RenderText_Blended(police, "level 3", noir);
						niveau_4 = TTF_RenderText_Blended(police, "level 4", rouge);
						niveau_5 = TTF_RenderText_Blended(police, "level 5", noir);
						niveau_6 = TTF_RenderText_Blended(police, "level 6", noir);
						SDL_BlitSurface(niveau_1, NULL, ecran, &niv1_pos);
						SDL_BlitSurface(niveau_2, NULL, ecran, &niv2_pos);
						SDL_BlitSurface(niveau_3, NULL, ecran, &niv3_pos);
						SDL_BlitSurface(niveau_4, NULL, ecran, &niv4_pos);
						SDL_BlitSurface(niveau_5, NULL, ecran, &niv5_pos);
						SDL_BlitSurface(niveau_6, NULL, ecran, &niv6_pos);
						SDL_UpdateWindowSurface(fenetre);
					}
					else if(event_menu.motion.x > niv5_pos.x && event_menu.motion.x < niv5_pos.x + 180 && event_menu.motion.y > niv5_pos.y && event_menu.motion.y < niv5_pos.y + 50)
					{
						if(arl_sound == 0)
						{
							Mix_PlayMusic(sound_button, 1);
							arl_sound = 1;
						}
						niveau_1 = TTF_RenderText_Blended(police, "level 1", noir);
						niveau_2 = TTF_RenderText_Blended(police, "level 2", noir);
						niveau_3 = TTF_RenderText_Blended(police, "level 3", noir);
						niveau_4 = TTF_RenderText_Blended(police, "level 4", noir);
						niveau_5 = TTF_RenderText_Blended(police, "level 5", rouge);
						niveau_6 = TTF_RenderText_Blended(police, "level 6", noir);
						SDL_BlitSurface(niveau_1, NULL, ecran, &niv1_pos);
						SDL_BlitSurface(niveau_2, NULL, ecran, &niv2_pos);
						SDL_BlitSurface(niveau_3, NULL, ecran, &niv3_pos);
						SDL_BlitSurface(niveau_4, NULL, ecran, &niv4_pos);
						SDL_BlitSurface(niveau_5, NULL, ecran, &niv5_pos);
						SDL_BlitSurface(niveau_6, NULL, ecran, &niv6_pos);
						SDL_UpdateWindowSurface(fenetre);
					}
					else
					{
						niveau_1 = TTF_RenderText_Blended(police, "level 1", noir);
						niveau_2 = TTF_RenderText_Blended(police, "level 2", noir);
						niveau_3 = TTF_RenderText_Blended(police, "level 3", noir);
						niveau_4 = TTF_RenderText_Blended(police, "level 4", noir);
						niveau_5 = TTF_RenderText_Blended(police, "level 5", noir);
						niveau_6 = TTF_RenderText_Blended(police, "level 6", noir);
						SDL_BlitSurface(niveau_1, NULL, ecran, &niv1_pos);
						SDL_BlitSurface(niveau_2, NULL, ecran, &niv2_pos);
						SDL_BlitSurface(niveau_3, NULL, ecran, &niv3_pos);
						SDL_BlitSurface(niveau_4, NULL, ecran, &niv4_pos);
						SDL_BlitSurface(niveau_5, NULL, ecran, &niv5_pos);
						SDL_BlitSurface(niveau_6, NULL, ecran, &niv6_pos);
						SDL_UpdateWindowSurface(fenetre);
						arl_sound = 0;
					}
					}
					if(level_unlock == 5)
					{
						if(event_menu.motion.x > niv1_pos.x && event_menu.motion.x < niv1_pos.x + 180 && event_menu.motion.y > niv1_pos.y && event_menu.motion.y < niv1_pos.y + 50)
					{
						if(arl_sound == 0)
						{
							Mix_PlayMusic(sound_button, 1);
							arl_sound = 1;
						}
						niveau_1 = TTF_RenderText_Blended(police, "level 1", rouge);
						niveau_2 = TTF_RenderText_Blended(police, "level 2", noir);
						niveau_3 = TTF_RenderText_Blended(police, "level 3", noir);
						niveau_4 = TTF_RenderText_Blended(police, "level 4", noir);
						niveau_5 = TTF_RenderText_Blended(police, "level 5", noir);
						niveau_6 = TTF_RenderText_Blended(police, "level 6", noir);
						SDL_BlitSurface(niveau_1, NULL, ecran, &niv1_pos);
						SDL_BlitSurface(niveau_2, NULL, ecran, &niv2_pos);
						SDL_BlitSurface(niveau_3, NULL, ecran, &niv3_pos);
						SDL_BlitSurface(niveau_4, NULL, ecran, &niv4_pos);
						SDL_BlitSurface(niveau_5, NULL, ecran, &niv5_pos);
						SDL_BlitSurface(niveau_6, NULL, ecran, &niv6_pos);
						SDL_UpdateWindowSurface(fenetre);
					}
					else if(event_menu.motion.x > niv2_pos.x && event_menu.motion.x < niv2_pos.x + 180 && event_menu.motion.y > niv2_pos.y && event_menu.motion.y < niv2_pos.y + 50)
					{
						if(arl_sound == 0)
						{
							Mix_PlayMusic(sound_button, 1);
							arl_sound = 1;
						}
						niveau_1 = TTF_RenderText_Blended(police, "level 1", noir);
						niveau_2 = TTF_RenderText_Blended(police, "level 2", rouge);
						niveau_3 = TTF_RenderText_Blended(police, "level 3", noir);
						niveau_4 = TTF_RenderText_Blended(police, "level 4", noir);
						niveau_5 = TTF_RenderText_Blended(police, "level 5", noir);
						niveau_6 = TTF_RenderText_Blended(police, "level 6", noir);
						SDL_BlitSurface(niveau_1, NULL, ecran, &niv1_pos);
						SDL_BlitSurface(niveau_2, NULL, ecran, &niv2_pos);
						SDL_BlitSurface(niveau_3, NULL, ecran, &niv3_pos);
						SDL_BlitSurface(niveau_4, NULL, ecran, &niv4_pos);
						SDL_BlitSurface(niveau_5, NULL, ecran, &niv5_pos);
						SDL_BlitSurface(niveau_6, NULL, ecran, &niv6_pos);
						SDL_UpdateWindowSurface(fenetre);
					}
					else if(event_menu.motion.x > niv3_pos.x && event_menu.motion.x < niv3_pos.x + 180 && event_menu.motion.y > niv3_pos.y && event_menu.motion.y < niv3_pos.y + 50)
					{
						if(arl_sound == 0)
						{
							Mix_PlayMusic(sound_button, 1);
							arl_sound = 1;
						}
						niveau_1 = TTF_RenderText_Blended(police, "level 1", noir);
						niveau_2 = TTF_RenderText_Blended(police, "level 2", noir);
						niveau_3 = TTF_RenderText_Blended(police, "level 3", rouge);
						niveau_4 = TTF_RenderText_Blended(police, "level 4", noir);
						niveau_5 = TTF_RenderText_Blended(police, "level 5", noir);
						niveau_6 = TTF_RenderText_Blended(police, "level 6", noir);
						SDL_BlitSurface(niveau_1, NULL, ecran, &niv1_pos);
						SDL_BlitSurface(niveau_2, NULL, ecran, &niv2_pos);
						SDL_BlitSurface(niveau_3, NULL, ecran, &niv3_pos);
						SDL_BlitSurface(niveau_4, NULL, ecran, &niv4_pos);
						SDL_BlitSurface(niveau_5, NULL, ecran, &niv5_pos);
						SDL_BlitSurface(niveau_6, NULL, ecran, &niv6_pos);
						SDL_UpdateWindowSurface(fenetre);
					}
					else if(event_menu.motion.x > niv4_pos.x && event_menu.motion.x < niv4_pos.x + 180 && event_menu.motion.y > niv4_pos.y && event_menu.motion.y < niv4_pos.y + 50)
					{
						if(arl_sound == 0)
						{
							Mix_PlayMusic(sound_button, 1);
							arl_sound = 1;
						}
						niveau_1 = TTF_RenderText_Blended(police, "level 1", noir);
						niveau_2 = TTF_RenderText_Blended(police, "level 2", noir);
						niveau_3 = TTF_RenderText_Blended(police, "level 3", noir);
						niveau_4 = TTF_RenderText_Blended(police, "level 4", rouge);
						niveau_5 = TTF_RenderText_Blended(police, "level 5", noir);
						niveau_6 = TTF_RenderText_Blended(police, "level 6", noir);
						SDL_BlitSurface(niveau_1, NULL, ecran, &niv1_pos);
						SDL_BlitSurface(niveau_2, NULL, ecran, &niv2_pos);
						SDL_BlitSurface(niveau_3, NULL, ecran, &niv3_pos);
						SDL_BlitSurface(niveau_4, NULL, ecran, &niv4_pos);
						SDL_BlitSurface(niveau_5, NULL, ecran, &niv5_pos);
						SDL_BlitSurface(niveau_6, NULL, ecran, &niv6_pos);
						SDL_UpdateWindowSurface(fenetre);
					}
					else if(event_menu.motion.x > niv5_pos.x && event_menu.motion.x < niv5_pos.x + 180 && event_menu.motion.y > niv5_pos.y && event_menu.motion.y < niv5_pos.y + 50)
					{
						if(arl_sound == 0)
						{
							Mix_PlayMusic(sound_button, 1);
							arl_sound = 1;
						}
						niveau_1 = TTF_RenderText_Blended(police, "level 1", noir);
						niveau_2 = TTF_RenderText_Blended(police, "level 2", noir);
						niveau_3 = TTF_RenderText_Blended(police, "level 3", noir);
						niveau_4 = TTF_RenderText_Blended(police, "level 4", noir);
						niveau_5 = TTF_RenderText_Blended(police, "level 5", rouge);
						niveau_6 = TTF_RenderText_Blended(police, "level 6", noir);
						SDL_BlitSurface(niveau_1, NULL, ecran, &niv1_pos);
						SDL_BlitSurface(niveau_2, NULL, ecran, &niv2_pos);
						SDL_BlitSurface(niveau_3, NULL, ecran, &niv3_pos);
						SDL_BlitSurface(niveau_4, NULL, ecran, &niv4_pos);
						SDL_BlitSurface(niveau_5, NULL, ecran, &niv5_pos);
						SDL_BlitSurface(niveau_6, NULL, ecran, &niv6_pos);
						SDL_UpdateWindowSurface(fenetre);
					}
					else if(event_menu.motion.x > niv6_pos.x && event_menu.motion.x < niv6_pos.x + 180 && event_menu.motion.y > niv6_pos.y && event_menu.motion.y < niv6_pos.y + 50)
					{
						if(arl_sound == 0)
						{
							Mix_PlayMusic(sound_button, 1);
							arl_sound = 1;
						}
						niveau_1 = TTF_RenderText_Blended(police, "level 1", noir);
						niveau_2 = TTF_RenderText_Blended(police, "level 2", noir);
						niveau_3 = TTF_RenderText_Blended(police, "level 3", noir);
						niveau_4 = TTF_RenderText_Blended(police, "level 4", noir);
						niveau_5 = TTF_RenderText_Blended(police, "level 5", noir);
						niveau_6 = TTF_RenderText_Blended(police, "level 6", rouge);
						SDL_BlitSurface(niveau_1, NULL, ecran, &niv1_pos);
						SDL_BlitSurface(niveau_2, NULL, ecran, &niv2_pos);
						SDL_BlitSurface(niveau_3, NULL, ecran, &niv3_pos);
						SDL_BlitSurface(niveau_4, NULL, ecran, &niv4_pos);
						SDL_BlitSurface(niveau_5, NULL, ecran, &niv5_pos);
						SDL_BlitSurface(niveau_6, NULL, ecran, &niv6_pos);
						SDL_UpdateWindowSurface(fenetre);
					}
					else
					{
						niveau_1 = TTF_RenderText_Blended(police, "level 1", noir);
						niveau_2 = TTF_RenderText_Blended(police, "level 2", noir);
						niveau_3 = TTF_RenderText_Blended(police, "level 3", noir);
						niveau_4 = TTF_RenderText_Blended(police, "level 4", noir);
						niveau_5 = TTF_RenderText_Blended(police, "level 5", noir);
						niveau_6 = TTF_RenderText_Blended(police, "level 6", noir);
						SDL_BlitSurface(niveau_1, NULL, ecran, &niv1_pos);
						SDL_BlitSurface(niveau_2, NULL, ecran, &niv2_pos);
						SDL_BlitSurface(niveau_3, NULL, ecran, &niv3_pos);
						SDL_BlitSurface(niveau_4, NULL, ecran, &niv4_pos);
						SDL_BlitSurface(niveau_5, NULL, ecran, &niv5_pos);
						SDL_BlitSurface(niveau_6, NULL, ecran, &niv6_pos);
						SDL_UpdateWindowSurface(fenetre);
						arl_sound = 0;
					}
					
					}
					
										
					continue;
					
				case SDL_MOUSEBUTTONUP:
					if(level_unlock == 0)
					{
						if(event_menu.motion.x > niv1_pos.x && event_menu.motion.x < niv1_pos.x + 180 && event_menu.motion.y > niv1_pos.y && event_menu.motion.y < niv1_pos.y + 50)
						{
							niveau_select = 1;
							menu_select = SDL_FALSE;
						}
					}
					if(level_unlock == 1)
					{
						if(event_menu.motion.x > niv1_pos.x && event_menu.motion.x < niv1_pos.x + 180 && event_menu.motion.y > niv1_pos.y && event_menu.motion.y < niv1_pos.y + 50)
						{
							niveau_select = 1;
							menu_select = SDL_FALSE;
						}
						else if(event_menu.motion.x > niv2_pos.x && event_menu.motion.x < niv2_pos.x + 180 && event_menu.motion.y > niv2_pos.y && event_menu.motion.y < niv2_pos.y + 50)
						{
							niveau_select = 2;
							menu_select = SDL_FALSE;
						}
					}
					if(level_unlock == 2)
					{
						if(event_menu.motion.x > niv1_pos.x && event_menu.motion.x < niv1_pos.x + 180 && event_menu.motion.y > niv1_pos.y && event_menu.motion.y < niv1_pos.y + 50)
						{
							niveau_select = 1;
							menu_select = SDL_FALSE;
						}
							else if(event_menu.motion.x > niv2_pos.x && event_menu.motion.x < niv2_pos.x + 180 && event_menu.motion.y > niv2_pos.y && event_menu.motion.y < niv2_pos.y + 50)
						{
							niveau_select = 2;
							menu_select = SDL_FALSE;
						}
						else if(event_menu.motion.x > niv3_pos.x && event_menu.motion.x < niv3_pos.x + 180 && event_menu.motion.y > niv3_pos.y && event_menu.motion.y < niv3_pos.y + 50)
						{
							niveau_select = 3;
							menu_select = SDL_FALSE;
						}
					}
					if(level_unlock == 3)
					{
						if(event_menu.motion.x > niv1_pos.x && event_menu.motion.x < niv1_pos.x + 180 && event_menu.motion.y > niv1_pos.y && event_menu.motion.y < niv1_pos.y + 50)
						{
							niveau_select = 1;
							menu_select = SDL_FALSE;
						}
							else if(event_menu.motion.x > niv2_pos.x && event_menu.motion.x < niv2_pos.x + 180 && event_menu.motion.y > niv2_pos.y && event_menu.motion.y < niv2_pos.y + 50)
						{
							niveau_select = 2;
							menu_select = SDL_FALSE;
						}
						else if(event_menu.motion.x > niv3_pos.x && event_menu.motion.x < niv3_pos.x + 180 && event_menu.motion.y > niv3_pos.y && event_menu.motion.y < niv3_pos.y + 50)
						{
							niveau_select = 3;
							menu_select = SDL_FALSE;
						}
							else if(event_menu.motion.x > niv4_pos.x && event_menu.motion.x < niv4_pos.x + 180 && event_menu.motion.y > niv4_pos.y && event_menu.motion.y < niv4_pos.y + 50)
						{
							niveau_select = 4;
							menu_select = SDL_FALSE;
						}
					}
					if(level_unlock == 4)
					{
						if(event_menu.motion.x > niv1_pos.x && event_menu.motion.x < niv1_pos.x + 180 && event_menu.motion.y > niv1_pos.y && event_menu.motion.y < niv1_pos.y + 50)
						{
							niveau_select = 1;
							menu_select = SDL_FALSE;
						}
							else if(event_menu.motion.x > niv2_pos.x && event_menu.motion.x < niv2_pos.x + 180 && event_menu.motion.y > niv2_pos.y && event_menu.motion.y < niv2_pos.y + 50)
						{
							niveau_select = 2;
							menu_select = SDL_FALSE;
						}
						else if(event_menu.motion.x > niv3_pos.x && event_menu.motion.x < niv3_pos.x + 180 && event_menu.motion.y > niv3_pos.y && event_menu.motion.y < niv3_pos.y + 50)
						{
							niveau_select = 3;
							menu_select = SDL_FALSE;
						}
							else if(event_menu.motion.x > niv4_pos.x && event_menu.motion.x < niv4_pos.x + 180 && event_menu.motion.y > niv4_pos.y && event_menu.motion.y < niv4_pos.y + 50)
						{
							niveau_select = 4;
							menu_select = SDL_FALSE;
						}
						else if(event_menu.motion.x > niv5_pos.x && event_menu.motion.x < niv5_pos.x + 180 && event_menu.motion.y > niv5_pos.y && event_menu.motion.y < niv5_pos.y + 50)
						{
							niveau_select = 5;
							menu_select = SDL_FALSE;
						}
					}
					if(level_unlock == 5)
					{
						if(event_menu.motion.x > niv1_pos.x && event_menu.motion.x < niv1_pos.x + 180 && event_menu.motion.y > niv1_pos.y && event_menu.motion.y < niv1_pos.y + 50)
					{
						niveau_select = 1;
						menu_select = SDL_FALSE;
					}
					else if(event_menu.motion.x > niv2_pos.x && event_menu.motion.x < niv2_pos.x + 180 && event_menu.motion.y > niv2_pos.y && event_menu.motion.y < niv2_pos.y + 50)
					{
						niveau_select = 2;
						menu_select = SDL_FALSE;
					}
					else if(event_menu.motion.x > niv3_pos.x && event_menu.motion.x < niv3_pos.x + 180 && event_menu.motion.y > niv3_pos.y && event_menu.motion.y < niv3_pos.y + 50)
					{
						niveau_select = 3;
						menu_select = SDL_FALSE;
					}
					else if(event_menu.motion.x > niv4_pos.x && event_menu.motion.x < niv4_pos.x + 180 && event_menu.motion.y > niv4_pos.y && event_menu.motion.y < niv4_pos.y + 50)
					{
						niveau_select = 4;
						menu_select = SDL_FALSE;
					}
					else if(event_menu.motion.x > niv5_pos.x && event_menu.motion.x < niv5_pos.x + 180 && event_menu.motion.y > niv5_pos.y && event_menu.motion.y < niv5_pos.y + 50)
					{
						niveau_select = 5;
						menu_select = SDL_FALSE;
					}
					else if(event_menu.motion.x > niv6_pos.x && event_menu.motion.x < niv6_pos.x + 180 && event_menu.motion.y > niv6_pos.y && event_menu.motion.y < niv6_pos.y + 50)
					{
						niveau_select = 6;
						menu_select = SDL_FALSE;
					}
					}
					
					
					continue;
				
				case SDL_QUIT:
					menu_select = SDL_FALSE;
					break;
					
				default:
					continue;
			}
		}
	}
	return niveau_select;
}


//------------------------------------------------------ Level 1-------------------------------------------------------------------------

int level_1(SDL_Window *fenetre, SDL_Surface *ecran, SDL_Surface *compteur_mort, SDL_Surface *char_1_0, SDL_Surface *char_2_0, SDL_Rect char_pos, SDL_Surface *fond_1_0,
				 SDL_Surface *fond_2_0,	SDL_Surface *wall_3_0, SDL_Surface *wall_3_1, SDL_Rect wall1_pos, SDL_Rect wall2_pos, SDL_Rect wall3_pos, SDL_Rect wall4_pos, 
					 SDL_Rect wall5_pos,SDL_Rect wall6_pos, SDL_Rect wall7_pos, SDL_Rect wall8_pos, SDL_Rect wall9_pos,
					  SDL_Rect wall10_pos, SDL_Rect wall11_pos, SDL_Rect wall12_pos, SDL_Rect wall13_pos, 
					 SDL_Rect wall14_pos,SDL_Rect wall15_pos, SDL_Rect wall16_pos, SDL_Rect wall17_pos, SDL_Rect wall18_pos
					 , SDL_Rect wall19_pos, SDL_Rect wall20_pos,SDL_Rect wall21_pos, SDL_Rect wall22_pos, SDL_Rect wall23_pos, SDL_Rect wall24_pos, 
					 SDL_Rect wall25_pos,SDL_Rect wall26_pos, SDL_Rect wall27_pos, SDL_Rect wall28_pos, SDL_Rect wall29_pos,
					  SDL_Rect wall30_pos, SDL_Rect wall31_pos, SDL_Rect wall32_pos, SDL_Rect wall33_pos, 
					 SDL_Rect wall34_pos,SDL_Rect wall35_pos, SDL_Rect wall36_pos, SDL_Rect wall37_pos, SDL_Rect wall38_pos
					 , SDL_Rect wall39_pos, SDL_Rect wall40_pos)
{
	
				SDL_Color rouge = {255, 0, 0};
				SDL_Color blanc = {255, 255, 255};
				SDL_Color noir = {0, 0, 0};
			int temps_precedent = 0, temps_actuel = 0, multiplicateur_vitesse = 0;
			TTF_Font *police_ecriture_1, *police_ecriture_2;
			police_ecriture_1 = TTF_OpenFont("src/ttf/Robot Crush.ttf", 25);
			police_ecriture_2 = TTF_OpenFont("src/ttf/Robot Crush.ttf", 50);
			char compteur_mort_char[50] = "";
			SDL_bool program_launched = SDL_TRUE;
			int sens = 2;
			int nb_mort = 0;
			SDL_Rect mort_compt_pos;
			mort_compt_pos.x = 20;
			mort_compt_pos.y = 10;
			wall1_pos.x = 1000;
			wall1_pos.y = 200;
			wall2_pos.x = 1000;
			wall2_pos.y = 200;
			wall3_pos.x = 1000;
			wall3_pos.y = 650;
			wall4_pos.x = 1400;
			wall4_pos.y = 500;
			wall5_pos.x = 1400;
			wall5_pos.y = 200;
			wall6_pos.x = 1700;
			wall6_pos.y = 350;
			wall7_pos.x = 1700;
			wall7_pos.y = 500;
			wall8_pos.x = 2000;
			wall8_pos.y = 500;
			wall9_pos.x = 2000;
			wall9_pos.y = 650;
			wall10_pos.x = 2500;
			wall10_pos.y = 350;
			wall11_pos.x = 2500;
			wall11_pos.y = 500;
			wall12_pos.x = 2500;
			wall12_pos.y = 650;
			wall13_pos.x = 3000;
			wall13_pos.y = 200;
			wall14_pos.x = 3000;
			wall14_pos.y = 500;
			wall15_pos.x = 3000;
			wall15_pos.y = 650;
			wall16_pos.x = 3500;
			wall16_pos.y = 200;
			wall17_pos.x = 3500;
			wall17_pos.y = 350;
			wall18_pos.x = 3500;
			wall18_pos.y = 650;
			wall19_pos.x = 4000;
			wall19_pos.y = 200;
			wall20_pos.x = 4000;
			wall20_pos.y = 350;
			wall21_pos.x = 4000;
			wall21_pos.y = 500;
			
			
			sprintf(compteur_mort_char, "attemps : %d", nb_mort);
			compteur_mort = TTF_RenderText_Blended(police_ecriture_2, compteur_mort_char, blanc);
		while(program_launched)
	{

			SDL_Event event;
		while(SDL_PollEvent(&event))
		{
			switch(event.type)
			{
					
				case SDL_QUIT:
					program_launched = SDL_FALSE;
					break;
					
				case SDL_MOUSEBUTTONUP:
						
						sens = 2;
						animation_sens_2(fenetre, ecran, compteur_mort,mort_compt_pos,char_2_0, char_pos, fond_2_0,wall_3_1,wall1_pos,wall2_pos,wall3_pos,wall4_pos,wall5_pos,wall6_pos,wall7_pos, wall8_pos, wall9_pos,
									 wall10_pos,wall11_pos,wall12_pos,wall13_pos,wall14_pos,wall15_pos,wall16_pos, wall17_pos, wall18_pos,wall19_pos, wall20_pos,
									 wall21_pos,wall22_pos,wall23_pos,wall24_pos,wall25_pos,wall26_pos,wall27_pos,wall28_pos,wall29_pos,wall30_pos, wall31_pos,wall32_pos,wall33_pos,wall34_pos,
									 wall35_pos,wall36_pos,wall37_pos,wall38_pos,wall39_pos,wall40_pos);
						multiplicateur_vitesse = 0;
						
					
					
					continue;
					
				case SDL_MOUSEBUTTONDOWN:
					
					sens = 1;
					animation_sens_1(fenetre, ecran,compteur_mort,mort_compt_pos, char_1_0, char_pos, fond_1_0,wall_3_0,wall1_pos,wall2_pos,wall3_pos,wall4_pos,wall5_pos,wall6_pos,wall7_pos, wall8_pos, wall9_pos,
									 wall10_pos,wall11_pos,wall12_pos,wall13_pos,wall14_pos,wall15_pos,wall16_pos, wall17_pos, wall18_pos,wall19_pos, wall20_pos,
									 wall21_pos,wall22_pos,wall23_pos,wall24_pos,wall25_pos,wall26_pos,wall27_pos,wall28_pos,wall29_pos,wall30_pos, wall31_pos,wall32_pos,wall33_pos,wall34_pos,
									 wall35_pos,wall36_pos,wall37_pos,wall38_pos,wall39_pos,wall40_pos);
					multiplicateur_vitesse = 0;
					
					continue;

				case SDL_KEYUP:
								
				switch(event.key.keysym.sym)
				{
					case SDLK_SPACE:
						sens = 2;
						animation_sens_2(fenetre, ecran, compteur_mort,mort_compt_pos,char_2_0, char_pos, fond_2_0,wall_3_1,wall1_pos,wall2_pos,wall3_pos,wall4_pos,wall5_pos,wall6_pos,wall7_pos, wall8_pos, wall9_pos,
									 wall10_pos,wall11_pos,wall12_pos,wall13_pos,wall14_pos,wall15_pos,wall16_pos, wall17_pos, wall18_pos,wall19_pos, wall20_pos,
									 wall21_pos,wall22_pos,wall23_pos,wall24_pos,wall25_pos,wall26_pos,wall27_pos,wall28_pos,wall29_pos,wall30_pos, wall31_pos,wall32_pos,wall33_pos,wall34_pos,
									 wall35_pos,wall36_pos,wall37_pos,wall38_pos,wall39_pos,wall40_pos);
						multiplicateur_vitesse = 0;
						
					
					default:
						continue;
				}
				continue;
				
			case SDL_KEYDOWN:
								
				switch(event.key.keysym.sym)
				{
					case SDLK_SPACE:
						sens = 1;
					animation_sens_1(fenetre, ecran,compteur_mort,mort_compt_pos, char_1_0, char_pos, fond_1_0,wall_3_0,wall1_pos,wall2_pos,wall3_pos,wall4_pos,wall5_pos,wall6_pos,wall7_pos, wall8_pos, wall9_pos,
									 wall10_pos,wall11_pos,wall12_pos,wall13_pos,wall14_pos,wall15_pos,wall16_pos, wall17_pos, wall18_pos,wall19_pos, wall20_pos,
									 wall21_pos,wall22_pos,wall23_pos,wall24_pos,wall25_pos,wall26_pos,wall27_pos,wall28_pos,wall29_pos,wall30_pos, wall31_pos,wall32_pos,wall33_pos,wall34_pos,
									 wall35_pos,wall36_pos,wall37_pos,wall38_pos,wall39_pos,wall40_pos);
					multiplicateur_vitesse = 0;
					
					default:
						continue;
				}
				continue;
				default:
					continue;
			}
			

		}
				if(sens == 1)
				{
					temps_actuel = SDL_GetTicks();
					if(temps_actuel - temps_precedent > 1)
					{
						char_pos.y -= 3,75;
						wall1_pos.x -= 2;
						wall2_pos.x -= 2;
						wall3_pos.x -= 2;
						wall4_pos.x -= 2;
						wall5_pos.x -= 2;
						wall6_pos.x -= 2;
						wall7_pos.x -= 2;
						wall8_pos.x -= 2;
						wall9_pos.x -= 2;
						wall10_pos.x -= 2;
						wall11_pos.x -= 2;
						wall12_pos.x -= 2;
						wall13_pos.x -= 2;
						wall14_pos.x -= 2;
						wall15_pos.x -= 2;
						wall16_pos.x -= 2;
						wall17_pos.x -= 2;
						wall18_pos.x -= 2;
						wall19_pos.x -= 2;
						wall20_pos.x -= 2;
						wall21_pos.x -= 2;
						wall22_pos.x -= 2;
						wall23_pos.x -= 2;
						wall24_pos.x -= 2;
						wall25_pos.x -= 2;
						wall26_pos.x -= 2;
						wall27_pos.x -= 2;
						wall28_pos.x -= 2;
						wall29_pos.x -= 2;
						wall30_pos.x -= 2;
						wall31_pos.x -= 2;
						wall32_pos.x -= 2;
						wall33_pos.x -= 2;
						wall34_pos.x -= 2;
						wall35_pos.x -= 2;
						wall36_pos.x -= 2;
						wall37_pos.x -= 2;
						wall38_pos.x -= 2;
						wall39_pos.x -= 2;
						wall40_pos.x -= 2;
						temps_precedent = temps_actuel;
						
					}
					multiplicateur_vitesse =+ 2;
					animation_sens_1(fenetre, ecran,compteur_mort,mort_compt_pos, char_1_0, char_pos, fond_1_0,wall_3_0,wall1_pos,wall2_pos,wall3_pos,wall4_pos,wall5_pos,wall6_pos,wall7_pos, wall8_pos, wall9_pos,
									 wall10_pos,wall11_pos,wall12_pos,wall13_pos,wall14_pos,wall15_pos,wall16_pos, wall17_pos, wall18_pos,wall19_pos, wall20_pos,
									 wall21_pos,wall22_pos,wall23_pos,wall24_pos,wall25_pos,wall26_pos,wall27_pos,wall28_pos,wall29_pos,wall30_pos, wall31_pos,wall32_pos,wall33_pos,wall34_pos,
									 wall35_pos,wall36_pos,wall37_pos,wall38_pos,wall39_pos,wall40_pos);
					temps_actuel = 0;
				}
				if(sens == 2)
				{
					temps_actuel = SDL_GetTicks();
					if(temps_actuel - temps_precedent > 1)
					{
						char_pos.y += 3,75;
						wall1_pos.x -= 2;
						wall2_pos.x -= 2;
						wall3_pos.x -= 2;
						wall4_pos.x -= 2;
						wall5_pos.x -= 2;
						wall6_pos.x -= 2;
						wall7_pos.x -= 2;
						wall8_pos.x -= 2;
						wall9_pos.x -= 2;
						wall10_pos.x -= 2;
						wall11_pos.x -= 2;
						wall12_pos.x -= 2;
						wall13_pos.x -= 2;
						wall14_pos.x -= 2;
						wall15_pos.x -= 2;
						wall16_pos.x -= 2;
						wall17_pos.x -= 2;
						wall18_pos.x -= 2;
						wall19_pos.x -= 2;
						wall20_pos.x -= 2;
						wall21_pos.x -= 2;
						wall22_pos.x -= 2;
						wall23_pos.x -= 2;
						wall24_pos.x -= 2;
						wall25_pos.x -= 2;
						wall26_pos.x -= 2;
						wall27_pos.x -= 2;
						wall28_pos.x -= 2;
						wall29_pos.x -= 2;
						wall30_pos.x -= 2;
						wall31_pos.x -= 2;
						wall32_pos.x -= 2;
						wall33_pos.x -= 2;
						wall34_pos.x -= 2;
						wall35_pos.x -= 2;
						wall36_pos.x -= 2;
						wall37_pos.x -= 2;
						wall38_pos.x -= 2;
						wall39_pos.x -= 2;
						wall40_pos.x -= 2;
						temps_precedent = temps_actuel;
						
					}
					multiplicateur_vitesse =+ 2;
					animation_sens_2(fenetre, ecran,compteur_mort,mort_compt_pos, char_2_0, char_pos, fond_2_0,wall_3_1,wall1_pos,wall2_pos,wall3_pos,wall4_pos,wall5_pos,wall6_pos,wall7_pos, wall8_pos, wall9_pos,
									 wall10_pos,wall11_pos,wall12_pos,wall13_pos,wall14_pos,wall15_pos,wall16_pos, wall17_pos, wall18_pos,wall19_pos, wall20_pos,
									 wall21_pos,wall22_pos,wall23_pos,wall24_pos,wall25_pos,wall26_pos,wall27_pos,wall28_pos,wall29_pos,wall30_pos, wall31_pos,wall32_pos,wall33_pos,wall34_pos,
									 wall35_pos,wall36_pos,wall37_pos,wall38_pos,wall39_pos,wall40_pos);
					temps_actuel = 0;
				}
				if(char_pos.y < 130 || char_pos.y > 870 - 75 ||
				 char_pos.x + 50 > wall1_pos.x && char_pos.x + 20 < wall1_pos.x + 50 && char_pos.y + 50 > wall1_pos.y && char_pos.y + 20 < wall1_pos.y + 150||
				 char_pos.x + 50 > wall2_pos.x && char_pos.x + 20 < wall2_pos.x + 50 && char_pos.y + 50 > wall2_pos.y && char_pos.y + 20 < wall2_pos.y + 150||
				 char_pos.x + 50 > wall3_pos.x && char_pos.x + 20 < wall3_pos.x + 50 && char_pos.y + 50 > wall3_pos.y && char_pos.y + 20 < wall3_pos.y + 150||
				 char_pos.x + 50 > wall4_pos.x && char_pos.x + 20 < wall4_pos.x + 50 && char_pos.y + 50 > wall4_pos.y && char_pos.y + 20 < wall4_pos.y + 150||
				 char_pos.x + 50 > wall5_pos.x && char_pos.x + 20 < wall5_pos.x + 50 && char_pos.y + 50 > wall5_pos.y && char_pos.y + 20 < wall5_pos.y + 150||
				 char_pos.x + 50 > wall6_pos.x && char_pos.x + 20 < wall6_pos.x + 50 && char_pos.y + 50 > wall6_pos.y && char_pos.y + 20 < wall6_pos.y + 150||
				 char_pos.x + 50 > wall7_pos.x && char_pos.x + 20 < wall7_pos.x + 50 && char_pos.y + 50 > wall7_pos.y && char_pos.y + 20 < wall7_pos.y + 150||
				 char_pos.x + 50 > wall8_pos.x && char_pos.x + 20 < wall8_pos.x + 50 && char_pos.y + 50 > wall8_pos.y && char_pos.y + 20 < wall8_pos.y + 150||
				 char_pos.x + 50 > wall9_pos.x && char_pos.x + 20 < wall9_pos.x + 50 && char_pos.y + 50 > wall9_pos.y && char_pos.y + 20 < wall9_pos.y + 150||
				 char_pos.x + 50 > wall10_pos.x && char_pos.x + 20 < wall10_pos.x + 50 && char_pos.y + 50 > wall10_pos.y && char_pos.y + 20 < wall10_pos.y + 150||
				 char_pos.x + 50 > wall11_pos.x && char_pos.x + 20 < wall11_pos.x + 50 && char_pos.y + 50 > wall11_pos.y && char_pos.y + 20 < wall11_pos.y + 150||
				 char_pos.x + 50 > wall12_pos.x && char_pos.x + 20 < wall12_pos.x + 50 && char_pos.y + 50 > wall12_pos.y && char_pos.y + 20 < wall12_pos.y + 150||
				 char_pos.x + 50 > wall13_pos.x && char_pos.x + 20 < wall13_pos.x + 50 && char_pos.y + 50 > wall13_pos.y && char_pos.y + 20 < wall13_pos.y + 150||
				 char_pos.x + 50 > wall14_pos.x && char_pos.x + 20 < wall14_pos.x + 50 && char_pos.y + 50 > wall14_pos.y && char_pos.y + 20 < wall14_pos.y + 150||
				 char_pos.x + 50 > wall15_pos.x && char_pos.x + 20 < wall15_pos.x + 50 && char_pos.y + 50 > wall15_pos.y && char_pos.y + 20 < wall15_pos.y + 150||
				 char_pos.x + 50 > wall16_pos.x && char_pos.x + 20 < wall16_pos.x + 50 && char_pos.y + 50 > wall16_pos.y && char_pos.y + 20 < wall16_pos.y + 150||
				 char_pos.x + 50 > wall17_pos.x && char_pos.x + 20 < wall17_pos.x + 50 && char_pos.y + 50 > wall17_pos.y && char_pos.y + 20 < wall17_pos.y + 150||
				 char_pos.x + 50 > wall18_pos.x && char_pos.x + 20 < wall18_pos.x + 50 && char_pos.y + 50 > wall18_pos.y && char_pos.y + 20 < wall18_pos.y + 150||
				 char_pos.x + 50 > wall19_pos.x && char_pos.x + 20 < wall19_pos.x + 50 && char_pos.y + 50 > wall19_pos.y && char_pos.y + 20 < wall19_pos.y + 150||
				 char_pos.x + 50 > wall20_pos.x && char_pos.x + 20 < wall20_pos.x + 50 && char_pos.y + 50 > wall20_pos.y && char_pos.y + 20 < wall20_pos.y + 150||
				 char_pos.x + 50 > wall21_pos.x && char_pos.x + 20 < wall21_pos.x + 50 && char_pos.y + 50 > wall21_pos.y && char_pos.y + 20 < wall21_pos.y + 150||
				 char_pos.x + 50 > wall22_pos.x && char_pos.x + 20 < wall22_pos.x + 50 && char_pos.y + 50 > wall22_pos.y && char_pos.y + 20 < wall22_pos.y + 150||
				 char_pos.x + 50 > wall23_pos.x && char_pos.x + 20 < wall23_pos.x + 50 && char_pos.y + 50 > wall23_pos.y && char_pos.y + 20 < wall23_pos.y + 150||
				 char_pos.x + 50 > wall24_pos.x && char_pos.x + 20 < wall24_pos.x + 50 && char_pos.y + 50 > wall24_pos.y && char_pos.y + 20 < wall24_pos.y + 150||
				 char_pos.x + 50 > wall25_pos.x && char_pos.x + 20 < wall25_pos.x + 50 && char_pos.y + 50 > wall25_pos.y && char_pos.y + 20 < wall25_pos.y + 150||
				 char_pos.x + 50 > wall26_pos.x && char_pos.x + 20 < wall26_pos.x + 50 && char_pos.y + 50 > wall26_pos.y && char_pos.y + 20 < wall26_pos.y + 150||
				 char_pos.x + 50 > wall27_pos.x && char_pos.x + 20 < wall27_pos.x + 50 && char_pos.y + 50 > wall27_pos.y && char_pos.y + 20 < wall27_pos.y + 150||
				 char_pos.x + 50 > wall28_pos.x && char_pos.x + 20 < wall28_pos.x + 50 && char_pos.y + 50 > wall28_pos.y && char_pos.y + 20 < wall28_pos.y + 150||
				 char_pos.x + 50 > wall29_pos.x && char_pos.x + 20 < wall29_pos.x + 50 && char_pos.y + 50 > wall29_pos.y && char_pos.y + 20 < wall29_pos.y + 150||
				 char_pos.x + 50 > wall30_pos.x && char_pos.x + 20 < wall30_pos.x + 50 && char_pos.y + 50 > wall30_pos.y && char_pos.y + 20 < wall30_pos.y + 150||
				 char_pos.x + 50 > wall31_pos.x && char_pos.x + 20 < wall31_pos.x + 50 && char_pos.y + 50 > wall31_pos.y && char_pos.y + 20 < wall31_pos.y + 150||
				 char_pos.x + 50 > wall32_pos.x && char_pos.x + 20 < wall32_pos.x + 50 && char_pos.y + 50 > wall32_pos.y && char_pos.y + 20 < wall32_pos.y + 150||
				 char_pos.x + 50 > wall33_pos.x && char_pos.x + 20 < wall33_pos.x + 50 && char_pos.y + 50 > wall33_pos.y && char_pos.y + 20 < wall33_pos.y + 150||
				 char_pos.x + 50 > wall34_pos.x && char_pos.x + 20 < wall34_pos.x + 50 && char_pos.y + 50 > wall34_pos.y && char_pos.y + 20 < wall34_pos.y + 150||
				 char_pos.x + 50 > wall35_pos.x && char_pos.x + 20 < wall35_pos.x + 50 && char_pos.y + 50 > wall35_pos.y && char_pos.y + 20 < wall35_pos.y + 150||
				 char_pos.x + 50 > wall36_pos.x && char_pos.x + 20 < wall36_pos.x + 50 && char_pos.y + 50 > wall36_pos.y && char_pos.y + 20 < wall36_pos.y + 150||
				 char_pos.x + 50 > wall37_pos.x && char_pos.x + 20 < wall37_pos.x + 50 && char_pos.y + 50 > wall37_pos.y && char_pos.y + 20 < wall37_pos.y + 150||
				 char_pos.x + 50 > wall38_pos.x && char_pos.x + 20 < wall38_pos.x + 50 && char_pos.y + 50 > wall38_pos.y && char_pos.y + 20 < wall38_pos.y + 150||
				 char_pos.x + 50 > wall39_pos.x && char_pos.x + 20 < wall39_pos.x + 50 && char_pos.y + 50 > wall39_pos.y && char_pos.y + 20 < wall39_pos.y + 150||
				 char_pos.x + 50 > wall40_pos.x && char_pos.x + 20 < wall40_pos.x + 50 && char_pos.y + 50 > wall40_pos.y && char_pos.y + 20 < wall40_pos.y + 150)
				{
					nb_mort ++;
					
					char_pos.y = 425;
					wall1_pos.x = 1000;
					wall1_pos.y = 200;
					wall2_pos.x = 1000;
					wall2_pos.y = 200;
					wall3_pos.x = 1000;
					wall3_pos.y = 650;
					wall4_pos.x = 1400;
					wall4_pos.y = 500;
					wall5_pos.x = 1400;
					wall5_pos.y = 200;
					wall6_pos.x = 1700;
					wall6_pos.y = 350;
					wall7_pos.x = 1700;
					wall7_pos.y = 500;
					wall8_pos.x = 2000;
					wall8_pos.y = 500;
					wall9_pos.x = 2000;
					wall9_pos.y = 650;
					wall10_pos.x = 2500;
					wall10_pos.y = 350;
					wall11_pos.x = 2500;
					wall11_pos.y = 500;
					wall12_pos.x = 2500;
					wall12_pos.y = 650;
					wall13_pos.x = 3000;
					wall13_pos.y = 200;
					wall14_pos.x = 3000;
					wall14_pos.y = 500;
					wall15_pos.x = 3000;
					wall15_pos.y = 650;
					wall16_pos.x = 3500;
					wall16_pos.y = 200;
					wall17_pos.x = 3500;
					wall17_pos.y = 350;
					wall18_pos.x = 3500;
					wall18_pos.y = 650;
					wall19_pos.x = 4000;
					wall19_pos.y = 200;
					wall20_pos.x = 4000;
					wall20_pos.y = 350;
					wall21_pos.x = 4000;
					wall21_pos.y = 500;
					sprintf(compteur_mort_char, "attemps : %d", nb_mort);
					compteur_mort = TTF_RenderText_Blended(police_ecriture_2, compteur_mort_char, blanc);
					SDL_Delay(500);
				}
				if(wall21_pos.x < 200)
				{
					return 1;
				}
	}
}
//-------------------------------------------------------LEVEL 2--------------------------------------------------------------------

int level_2(SDL_Window *fenetre, SDL_Surface *ecran, SDL_Surface *compteur_mort, SDL_Surface *char_1_0, SDL_Surface *char_2_0, SDL_Rect char_pos, SDL_Surface *fond_1_0,
				 SDL_Surface *fond_2_0,	SDL_Surface *wall_3_0, SDL_Surface *wall_3_1, SDL_Rect wall1_pos, SDL_Rect wall2_pos, SDL_Rect wall3_pos, SDL_Rect wall4_pos, 
					 SDL_Rect wall5_pos,SDL_Rect wall6_pos, SDL_Rect wall7_pos, SDL_Rect wall8_pos, SDL_Rect wall9_pos,
					  SDL_Rect wall10_pos, SDL_Rect wall11_pos, SDL_Rect wall12_pos, SDL_Rect wall13_pos, 
					 SDL_Rect wall14_pos,SDL_Rect wall15_pos, SDL_Rect wall16_pos, SDL_Rect wall17_pos, SDL_Rect wall18_pos
					 , SDL_Rect wall19_pos, SDL_Rect wall20_pos,SDL_Rect wall21_pos, SDL_Rect wall22_pos, SDL_Rect wall23_pos, SDL_Rect wall24_pos, 
					 SDL_Rect wall25_pos,SDL_Rect wall26_pos, SDL_Rect wall27_pos, SDL_Rect wall28_pos, SDL_Rect wall29_pos,
					  SDL_Rect wall30_pos, SDL_Rect wall31_pos, SDL_Rect wall32_pos, SDL_Rect wall33_pos, 
					 SDL_Rect wall34_pos,SDL_Rect wall35_pos, SDL_Rect wall36_pos, SDL_Rect wall37_pos, SDL_Rect wall38_pos
					 , SDL_Rect wall39_pos, SDL_Rect wall40_pos)
{
	
				SDL_Color rouge = {255, 0, 0};
				SDL_Color blanc = {255, 255, 255};
				SDL_Color noir = {0, 0, 0};
			int temps_precedent = 0, temps_actuel = 0, multiplicateur_vitesse = 0;
			TTF_Font *police_ecriture_1, *police_ecriture_2;
			police_ecriture_1 = TTF_OpenFont("src/ttf/Robot Crush.ttf", 25);
			police_ecriture_2 = TTF_OpenFont("src/ttf/Robot Crush.ttf", 50);
			char compteur_mort_char[50] = "";
			SDL_bool program_launched = SDL_TRUE;
			int sens = 2;
			int nb_mort = 0;
			SDL_Rect mort_compt_pos;
			mort_compt_pos.x = 20;
			mort_compt_pos.y = 10;
			wall1_pos.x = 1000;
			wall1_pos.y = 200;
			wall2_pos.x = 1000;
			wall2_pos.y = 350;
			wall3_pos.x = 1000;
			wall3_pos.y = 500;
			wall4_pos.x = 1300;
			wall4_pos.y = 650;
			wall5_pos.x = 1300;
			wall5_pos.y = 500;
			wall6_pos.x = 1600;
			wall6_pos.y = 200;
			wall7_pos.x = 1600;
			wall7_pos.y = 350;
			wall8_pos.x = 1900;
			wall8_pos.y = 200;
			wall9_pos.x = 1900;
			wall9_pos.y = 650;
			wall10_pos.x = 2200;
			wall10_pos.y = 350;
			wall11_pos.x = 2200;
			wall11_pos.y = 500;
			wall12_pos.x = 2500;
			wall12_pos.y = 200;
			wall13_pos.x = 2500;
			wall13_pos.y = 650;
			wall14_pos.x = 2800;
			wall14_pos.y = 350;
			wall15_pos.x = 2800;
			wall15_pos.y = 650;
			wall16_pos.x = 3100;
			wall16_pos.y = 350;
			wall17_pos.x = 3100;
			wall17_pos.y = 500;
			wall18_pos.x = 3400;
			wall18_pos.y = 350;
			wall19_pos.x = 3400;
			wall19_pos.y = 500;
			wall20_pos.x = 3400;
			wall20_pos.y = 650;
			wall21_pos.x = 4000;
			wall21_pos.y = 200;
			wall22_pos.x = 4000;
			wall22_pos.y = 350;
			wall23_pos.x = 4000;
			wall23_pos.y = 500;
			
			
			sprintf(compteur_mort_char, "attemps : %d", nb_mort);
			compteur_mort = TTF_RenderText_Blended(police_ecriture_2, compteur_mort_char, blanc);
		while(program_launched)
	{

			SDL_Event event;
		while(SDL_PollEvent(&event))
		{
			switch(event.type)
			{
		
					
				case SDL_QUIT:
					program_launched = SDL_FALSE;
					break;
					
				case SDL_MOUSEBUTTONUP:
						
						sens = 2;
						animation_sens_2(fenetre, ecran, compteur_mort,mort_compt_pos,char_2_0, char_pos, fond_2_0,wall_3_1,wall1_pos,wall2_pos,wall3_pos,wall4_pos,wall5_pos,wall6_pos,wall7_pos, wall8_pos, wall9_pos,
									 wall10_pos,wall11_pos,wall12_pos,wall13_pos,wall14_pos,wall15_pos,wall16_pos, wall17_pos, wall18_pos,wall19_pos, wall20_pos,
									 wall21_pos,wall22_pos,wall23_pos,wall24_pos,wall25_pos,wall26_pos,wall27_pos,wall28_pos,wall29_pos,wall30_pos, wall31_pos,wall32_pos,wall33_pos,wall34_pos,
									 wall35_pos,wall36_pos,wall37_pos,wall38_pos,wall39_pos,wall40_pos);
						multiplicateur_vitesse = 0;
						
					
				
					continue;
					
				case SDL_MOUSEBUTTONDOWN:
				
					sens = 1;
					animation_sens_1(fenetre, ecran,compteur_mort,mort_compt_pos, char_1_0, char_pos, fond_1_0,wall_3_0,wall1_pos,wall2_pos,wall3_pos,wall4_pos,wall5_pos,wall6_pos,wall7_pos, wall8_pos, wall9_pos,
									 wall10_pos,wall11_pos,wall12_pos,wall13_pos,wall14_pos,wall15_pos,wall16_pos, wall17_pos, wall18_pos,wall19_pos, wall20_pos,
									 wall21_pos,wall22_pos,wall23_pos,wall24_pos,wall25_pos,wall26_pos,wall27_pos,wall28_pos,wall29_pos,wall30_pos, wall31_pos,wall32_pos,wall33_pos,wall34_pos,
									 wall35_pos,wall36_pos,wall37_pos,wall38_pos,wall39_pos,wall40_pos);
					multiplicateur_vitesse = 0;
					
					continue;

					case SDL_KEYUP:
								
				switch(event.key.keysym.sym)
				{
					case SDLK_SPACE:
						sens = 2;
						animation_sens_2(fenetre, ecran, compteur_mort,mort_compt_pos,char_2_0, char_pos, fond_2_0,wall_3_1,wall1_pos,wall2_pos,wall3_pos,wall4_pos,wall5_pos,wall6_pos,wall7_pos, wall8_pos, wall9_pos,
									 wall10_pos,wall11_pos,wall12_pos,wall13_pos,wall14_pos,wall15_pos,wall16_pos, wall17_pos, wall18_pos,wall19_pos, wall20_pos,
									 wall21_pos,wall22_pos,wall23_pos,wall24_pos,wall25_pos,wall26_pos,wall27_pos,wall28_pos,wall29_pos,wall30_pos, wall31_pos,wall32_pos,wall33_pos,wall34_pos,
									 wall35_pos,wall36_pos,wall37_pos,wall38_pos,wall39_pos,wall40_pos);
						multiplicateur_vitesse = 0;
						
					
					default:
						continue;
				}
				continue;
				
			case SDL_KEYDOWN:
								
				switch(event.key.keysym.sym)
				{
					case SDLK_SPACE:
						sens = 1;
					animation_sens_1(fenetre, ecran,compteur_mort,mort_compt_pos, char_1_0, char_pos, fond_1_0,wall_3_0,wall1_pos,wall2_pos,wall3_pos,wall4_pos,wall5_pos,wall6_pos,wall7_pos, wall8_pos, wall9_pos,
									 wall10_pos,wall11_pos,wall12_pos,wall13_pos,wall14_pos,wall15_pos,wall16_pos, wall17_pos, wall18_pos,wall19_pos, wall20_pos,
									 wall21_pos,wall22_pos,wall23_pos,wall24_pos,wall25_pos,wall26_pos,wall27_pos,wall28_pos,wall29_pos,wall30_pos, wall31_pos,wall32_pos,wall33_pos,wall34_pos,
									 wall35_pos,wall36_pos,wall37_pos,wall38_pos,wall39_pos,wall40_pos);
					multiplicateur_vitesse = 0;
					
					default:
						continue;
				}
				continue;
				
				default:
					continue;
			}
			

		}
				if(sens == 1)
				{
					temps_actuel = SDL_GetTicks();
					if(temps_actuel - temps_precedent > 1)
					{
						char_pos.y -= 3,75;
						wall1_pos.x -= 2;
						wall2_pos.x -= 2;
						wall3_pos.x -= 2;
						wall4_pos.x -= 2;
						wall5_pos.x -= 2;
						wall6_pos.x -= 2;
						wall7_pos.x -= 2;
						wall8_pos.x -= 2;
						wall9_pos.x -= 2;
						wall10_pos.x -= 2;
						wall11_pos.x -= 2;
						wall12_pos.x -= 2;
						wall13_pos.x -= 2;
						wall14_pos.x -= 2;
						wall15_pos.x -= 2;
						wall16_pos.x -= 2;
						wall17_pos.x -= 2;
						wall18_pos.x -= 2;
						wall19_pos.x -= 2;
						wall20_pos.x -= 2;
						wall21_pos.x -= 2;
						wall22_pos.x -= 2;
						wall23_pos.x -= 2;
						wall24_pos.x -= 2;
						wall25_pos.x -= 2;
						wall26_pos.x -= 2;
						wall27_pos.x -= 2;
						wall28_pos.x -= 2;
						wall29_pos.x -= 2;
						wall30_pos.x -= 2;
						wall31_pos.x -= 2;
						wall32_pos.x -= 2;
						wall33_pos.x -= 2;
						wall34_pos.x -= 2;
						wall35_pos.x -= 2;
						wall36_pos.x -= 2;
						wall37_pos.x -= 2;
						wall38_pos.x -= 2;
						wall39_pos.x -= 2;
						wall40_pos.x -= 2;
						temps_precedent = temps_actuel;
						
					}
					multiplicateur_vitesse =+ 2;
					animation_sens_1(fenetre, ecran,compteur_mort,mort_compt_pos, char_1_0, char_pos, fond_1_0,wall_3_0,wall1_pos,wall2_pos,wall3_pos,wall4_pos,wall5_pos,wall6_pos,wall7_pos, wall8_pos, wall9_pos,
									 wall10_pos,wall11_pos,wall12_pos,wall13_pos,wall14_pos,wall15_pos,wall16_pos, wall17_pos, wall18_pos,wall19_pos, wall20_pos,
									 wall21_pos,wall22_pos,wall23_pos,wall24_pos,wall25_pos,wall26_pos,wall27_pos,wall28_pos,wall29_pos,wall30_pos, wall31_pos,wall32_pos,wall33_pos,wall34_pos,
									 wall35_pos,wall36_pos,wall37_pos,wall38_pos,wall39_pos,wall40_pos);
					temps_actuel = 0;
				}
				if(sens == 2)
				{
					temps_actuel = SDL_GetTicks();
					if(temps_actuel - temps_precedent > 1)
					{
						char_pos.y += 3,75;
						wall1_pos.x -= 2;
						wall2_pos.x -= 2;
						wall3_pos.x -= 2;
						wall4_pos.x -= 2;
						wall5_pos.x -= 2;
						wall6_pos.x -= 2;
						wall7_pos.x -= 2;
						wall8_pos.x -= 2;
						wall9_pos.x -= 2;
						wall10_pos.x -= 2;
						wall11_pos.x -= 2;
						wall12_pos.x -= 2;
						wall13_pos.x -= 2;
						wall14_pos.x -= 2;
						wall15_pos.x -= 2;
						wall16_pos.x -= 2;
						wall17_pos.x -= 2;
						wall18_pos.x -= 2;
						wall19_pos.x -= 2;
						wall20_pos.x -= 2;
						wall21_pos.x -= 2;
						wall22_pos.x -= 2;
						wall23_pos.x -= 2;
						wall24_pos.x -= 2;
						wall25_pos.x -= 2;
						wall26_pos.x -= 2;
						wall27_pos.x -= 2;
						wall28_pos.x -= 2;
						wall29_pos.x -= 2;
						wall30_pos.x -= 2;
						wall31_pos.x -= 2;
						wall32_pos.x -= 2;
						wall33_pos.x -= 2;
						wall34_pos.x -= 2;
						wall35_pos.x -= 2;
						wall36_pos.x -= 2;
						wall37_pos.x -= 2;
						wall38_pos.x -= 2;
						wall39_pos.x -= 2;
						wall40_pos.x -= 2;
						temps_precedent = temps_actuel;
						
					}
					multiplicateur_vitesse =+ 2;
					animation_sens_2(fenetre, ecran,compteur_mort,mort_compt_pos, char_2_0, char_pos, fond_2_0,wall_3_1,wall1_pos,wall2_pos,wall3_pos,wall4_pos,wall5_pos,wall6_pos,wall7_pos, wall8_pos, wall9_pos,
									 wall10_pos,wall11_pos,wall12_pos,wall13_pos,wall14_pos,wall15_pos,wall16_pos, wall17_pos, wall18_pos,wall19_pos, wall20_pos,
									 wall21_pos,wall22_pos,wall23_pos,wall24_pos,wall25_pos,wall26_pos,wall27_pos,wall28_pos,wall29_pos,wall30_pos, wall31_pos,wall32_pos,wall33_pos,wall34_pos,
									 wall35_pos,wall36_pos,wall37_pos,wall38_pos,wall39_pos,wall40_pos);
					temps_actuel = 0;
				}
				if(char_pos.y < 130 || char_pos.y > 870 - 75 ||
				 char_pos.x + 50 > wall1_pos.x && char_pos.x + 20 < wall1_pos.x + 50 && char_pos.y + 50 > wall1_pos.y && char_pos.y + 20 < wall1_pos.y + 150||
				 char_pos.x + 50 > wall2_pos.x && char_pos.x + 20 < wall2_pos.x + 50 && char_pos.y + 50 > wall2_pos.y && char_pos.y + 20 < wall2_pos.y + 150||
				 char_pos.x + 50 > wall3_pos.x && char_pos.x + 20 < wall3_pos.x + 50 && char_pos.y + 50 > wall3_pos.y && char_pos.y + 20 < wall3_pos.y + 150||
				 char_pos.x + 50 > wall4_pos.x && char_pos.x + 20 < wall4_pos.x + 50 && char_pos.y + 50 > wall4_pos.y && char_pos.y + 20 < wall4_pos.y + 150||
				 char_pos.x + 50 > wall5_pos.x && char_pos.x + 20 < wall5_pos.x + 50 && char_pos.y + 50 > wall5_pos.y && char_pos.y + 20 < wall5_pos.y + 150||
				 char_pos.x + 50 > wall6_pos.x && char_pos.x + 20 < wall6_pos.x + 50 && char_pos.y + 50 > wall6_pos.y && char_pos.y + 20 < wall6_pos.y + 150||
				 char_pos.x + 50 > wall7_pos.x && char_pos.x + 20 < wall7_pos.x + 50 && char_pos.y + 50 > wall7_pos.y && char_pos.y + 20 < wall7_pos.y + 150||
				 char_pos.x + 50 > wall8_pos.x && char_pos.x + 20 < wall8_pos.x + 50 && char_pos.y + 50 > wall8_pos.y && char_pos.y + 20 < wall8_pos.y + 150||
				 char_pos.x + 50 > wall9_pos.x && char_pos.x + 20 < wall9_pos.x + 50 && char_pos.y + 50 > wall9_pos.y && char_pos.y + 20 < wall9_pos.y + 150||
				 char_pos.x + 50 > wall10_pos.x && char_pos.x + 20 < wall10_pos.x + 50 && char_pos.y + 50 > wall10_pos.y && char_pos.y + 20 < wall10_pos.y + 150||
				 char_pos.x + 50 > wall11_pos.x && char_pos.x + 20 < wall11_pos.x + 50 && char_pos.y + 50 > wall11_pos.y && char_pos.y + 20 < wall11_pos.y + 150||
				 char_pos.x + 50 > wall12_pos.x && char_pos.x + 20 < wall12_pos.x + 50 && char_pos.y + 50 > wall12_pos.y && char_pos.y + 20 < wall12_pos.y + 150||
				 char_pos.x + 50 > wall13_pos.x && char_pos.x + 20 < wall13_pos.x + 50 && char_pos.y + 50 > wall13_pos.y && char_pos.y + 20 < wall13_pos.y + 150||
				 char_pos.x + 50 > wall14_pos.x && char_pos.x + 20 < wall14_pos.x + 50 && char_pos.y + 50 > wall14_pos.y && char_pos.y + 20 < wall14_pos.y + 150||
				 char_pos.x + 50 > wall15_pos.x && char_pos.x + 20 < wall15_pos.x + 50 && char_pos.y + 50 > wall15_pos.y && char_pos.y + 20 < wall15_pos.y + 150||
				 char_pos.x + 50 > wall16_pos.x && char_pos.x + 20 < wall16_pos.x + 50 && char_pos.y + 50 > wall16_pos.y && char_pos.y + 20 < wall16_pos.y + 150||
				 char_pos.x + 50 > wall17_pos.x && char_pos.x + 20 < wall17_pos.x + 50 && char_pos.y + 50 > wall17_pos.y && char_pos.y + 20 < wall17_pos.y + 150||
				 char_pos.x + 50 > wall18_pos.x && char_pos.x + 20 < wall18_pos.x + 50 && char_pos.y + 50 > wall18_pos.y && char_pos.y + 20 < wall18_pos.y + 150||
				 char_pos.x + 50 > wall19_pos.x && char_pos.x + 20 < wall19_pos.x + 50 && char_pos.y + 50 > wall19_pos.y && char_pos.y + 20 < wall19_pos.y + 150||
				 char_pos.x + 50 > wall20_pos.x && char_pos.x + 20 < wall20_pos.x + 50 && char_pos.y + 50 > wall20_pos.y && char_pos.y + 20 < wall20_pos.y + 150||
				 char_pos.x + 50 > wall21_pos.x && char_pos.x + 20 < wall21_pos.x + 50 && char_pos.y + 50 > wall21_pos.y && char_pos.y + 20 < wall21_pos.y + 150||
				 char_pos.x + 50 > wall22_pos.x && char_pos.x + 20 < wall22_pos.x + 50 && char_pos.y + 50 > wall22_pos.y && char_pos.y + 20 < wall22_pos.y + 150||
				 char_pos.x + 50 > wall23_pos.x && char_pos.x + 20 < wall23_pos.x + 50 && char_pos.y + 50 > wall23_pos.y && char_pos.y + 20 < wall23_pos.y + 150||
				 char_pos.x + 50 > wall24_pos.x && char_pos.x + 20 < wall24_pos.x + 50 && char_pos.y + 50 > wall24_pos.y && char_pos.y + 20 < wall24_pos.y + 150||
				 char_pos.x + 50 > wall25_pos.x && char_pos.x + 20 < wall25_pos.x + 50 && char_pos.y + 50 > wall25_pos.y && char_pos.y + 20 < wall25_pos.y + 150||
				 char_pos.x + 50 > wall26_pos.x && char_pos.x + 20 < wall26_pos.x + 50 && char_pos.y + 50 > wall26_pos.y && char_pos.y + 20 < wall26_pos.y + 150||
				 char_pos.x + 50 > wall27_pos.x && char_pos.x + 20 < wall27_pos.x + 50 && char_pos.y + 50 > wall27_pos.y && char_pos.y + 20 < wall27_pos.y + 150||
				 char_pos.x + 50 > wall28_pos.x && char_pos.x + 20 < wall28_pos.x + 50 && char_pos.y + 50 > wall28_pos.y && char_pos.y + 20 < wall28_pos.y + 150||
				 char_pos.x + 50 > wall29_pos.x && char_pos.x + 20 < wall29_pos.x + 50 && char_pos.y + 50 > wall29_pos.y && char_pos.y + 20 < wall29_pos.y + 150||
				 char_pos.x + 50 > wall30_pos.x && char_pos.x + 20 < wall30_pos.x + 50 && char_pos.y + 50 > wall30_pos.y && char_pos.y + 20 < wall30_pos.y + 150||
				 char_pos.x + 50 > wall31_pos.x && char_pos.x + 20 < wall31_pos.x + 50 && char_pos.y + 50 > wall31_pos.y && char_pos.y + 20 < wall31_pos.y + 150||
				 char_pos.x + 50 > wall32_pos.x && char_pos.x + 20 < wall32_pos.x + 50 && char_pos.y + 50 > wall32_pos.y && char_pos.y + 20 < wall32_pos.y + 150||
				 char_pos.x + 50 > wall33_pos.x && char_pos.x + 20 < wall33_pos.x + 50 && char_pos.y + 50 > wall33_pos.y && char_pos.y + 20 < wall33_pos.y + 150||
				 char_pos.x + 50 > wall34_pos.x && char_pos.x + 20 < wall34_pos.x + 50 && char_pos.y + 50 > wall34_pos.y && char_pos.y + 20 < wall34_pos.y + 150||
				 char_pos.x + 50 > wall35_pos.x && char_pos.x + 20 < wall35_pos.x + 50 && char_pos.y + 50 > wall35_pos.y && char_pos.y + 20 < wall35_pos.y + 150||
				 char_pos.x + 50 > wall36_pos.x && char_pos.x + 20 < wall36_pos.x + 50 && char_pos.y + 50 > wall36_pos.y && char_pos.y + 20 < wall36_pos.y + 150||
				 char_pos.x + 50 > wall37_pos.x && char_pos.x + 20 < wall37_pos.x + 50 && char_pos.y + 50 > wall37_pos.y && char_pos.y + 20 < wall37_pos.y + 150||
				 char_pos.x + 50 > wall38_pos.x && char_pos.x + 20 < wall38_pos.x + 50 && char_pos.y + 50 > wall38_pos.y && char_pos.y + 20 < wall38_pos.y + 150||
				 char_pos.x + 50 > wall39_pos.x && char_pos.x + 20 < wall39_pos.x + 50 && char_pos.y + 50 > wall39_pos.y && char_pos.y + 20 < wall39_pos.y + 150||
				 char_pos.x + 50 > wall40_pos.x && char_pos.x + 20 < wall40_pos.x + 50 && char_pos.y + 50 > wall40_pos.y && char_pos.y + 20 < wall40_pos.y + 150)
				{
					nb_mort ++;
					
					char_pos.y = 425;
					wall1_pos.x = 1000;
					wall1_pos.y = 200;
					wall2_pos.x = 1000;
					wall2_pos.y = 350;
					wall3_pos.x = 1000;
					wall3_pos.y = 500;
					wall4_pos.x = 1300;
					wall4_pos.y = 650;
					wall5_pos.x = 1300;
					wall5_pos.y = 500;
					wall6_pos.x = 1600;
					wall6_pos.y = 200;
					wall7_pos.x = 1600;
					wall7_pos.y = 350;
					wall8_pos.x = 1900;
					wall8_pos.y = 200;
					wall9_pos.x = 1900;
					wall9_pos.y = 650;
					wall10_pos.x = 2200;
					wall10_pos.y = 350;
					wall11_pos.x = 2200;
					wall11_pos.y = 500;
					wall12_pos.x = 2500;
					wall12_pos.y = 200;
					wall13_pos.x = 2500;
					wall13_pos.y = 650;
					wall14_pos.x = 2800;
					wall14_pos.y = 350;
					wall15_pos.x = 2800;
					wall15_pos.y = 650;
					wall16_pos.x = 3100;
					wall16_pos.y = 350;
					wall17_pos.x = 3100;
					wall17_pos.y = 500;
					wall18_pos.x = 3400;
					wall18_pos.y = 350;
					wall19_pos.x = 3400;
					wall19_pos.y = 500;
					wall20_pos.x = 3400;
					wall20_pos.y = 650;
					wall21_pos.x = 4000;
					wall21_pos.y = 200;
					wall22_pos.x = 4000;
					wall22_pos.y = 350;
					wall23_pos.x = 4000;
					wall23_pos.y = 500;
					sprintf(compteur_mort_char, "attemps : %d", nb_mort);
					compteur_mort = TTF_RenderText_Blended(police_ecriture_2, compteur_mort_char, blanc);
					SDL_Delay(500);
				}
				if(wall23_pos.x < 200)
				{
					return 2;
				}
	}
}

//-------------------------------------------------------LEVEL 3--------------------------------------------------------------------

int level_3(SDL_Window *fenetre, SDL_Surface *ecran, SDL_Surface *compteur_mort, SDL_Surface *char_1_0, SDL_Surface *char_2_0, SDL_Rect char_pos, SDL_Surface *fond_1_0,
				 SDL_Surface *fond_2_0,	SDL_Surface *wall_3_0, SDL_Surface *wall_3_1, SDL_Rect wall1_pos, SDL_Rect wall2_pos, SDL_Rect wall3_pos, SDL_Rect wall4_pos, 
					 SDL_Rect wall5_pos,SDL_Rect wall6_pos, SDL_Rect wall7_pos, SDL_Rect wall8_pos, SDL_Rect wall9_pos,
					  SDL_Rect wall10_pos, SDL_Rect wall11_pos, SDL_Rect wall12_pos, SDL_Rect wall13_pos, 
					 SDL_Rect wall14_pos,SDL_Rect wall15_pos, SDL_Rect wall16_pos, SDL_Rect wall17_pos, SDL_Rect wall18_pos
					 , SDL_Rect wall19_pos, SDL_Rect wall20_pos,SDL_Rect wall21_pos, SDL_Rect wall22_pos, SDL_Rect wall23_pos, SDL_Rect wall24_pos, 
					 SDL_Rect wall25_pos,SDL_Rect wall26_pos, SDL_Rect wall27_pos, SDL_Rect wall28_pos, SDL_Rect wall29_pos,
					  SDL_Rect wall30_pos, SDL_Rect wall31_pos, SDL_Rect wall32_pos, SDL_Rect wall33_pos, 
					 SDL_Rect wall34_pos,SDL_Rect wall35_pos, SDL_Rect wall36_pos, SDL_Rect wall37_pos, SDL_Rect wall38_pos
					 , SDL_Rect wall39_pos, SDL_Rect wall40_pos)
{
	
				SDL_Color rouge = {255, 0, 0};
				SDL_Color blanc = {255, 255, 255};
				SDL_Color noir = {0, 0, 0};
			int temps_precedent = 0, temps_actuel = 0, multiplicateur_vitesse = 0;
			TTF_Font *police_ecriture_1, *police_ecriture_2;
			police_ecriture_1 = TTF_OpenFont("src/ttf/Robot Crush.ttf", 25);
			police_ecriture_2 = TTF_OpenFont("src/ttf/Robot Crush.ttf", 50);
			char compteur_mort_char[50] = "";
			SDL_bool program_launched = SDL_TRUE;
			int sens = 2;
			int nb_mort = 0;
			SDL_Rect mort_compt_pos;
			mort_compt_pos.x = 20;
			mort_compt_pos.y = 10;
			wall1_pos.x = 1000;
			wall1_pos.y = 350;
			wall2_pos.x = 1000;
			wall2_pos.y = 500;
			wall3_pos.x = 1000;
			wall3_pos.y = 650;
			wall4_pos.x = 1300;
			wall4_pos.y = 200;
			wall5_pos.x = 1300;
			wall5_pos.y = 350;
			wall6_pos.x = 1300;
			wall6_pos.y = 650;
			wall7_pos.x = 1600;
			wall7_pos.y = 200;
			wall8_pos.x = 1600;
			wall8_pos.y = 500;
			wall9_pos.x = 1600;
			wall9_pos.y = 650;
			wall10_pos.x = 1900;
			wall10_pos.y = 350;
			wall11_pos.x = 1900;
			wall11_pos.y = 500;
			wall12_pos.x = 1900;
			wall12_pos.y = 650;
			wall13_pos.x = 2200;
			wall13_pos.y = 200;
			wall14_pos.x = 2200;
			wall14_pos.y = 350;
			wall15_pos.x = 2200;
			wall15_pos.y = 650;
			wall16_pos.x = 2500;
			wall16_pos.y = 200;
			wall17_pos.x = 2500;
			wall17_pos.y = 350;
			wall18_pos.x = 2500;
			wall18_pos.y = 650;
			wall19_pos.x = 2800;
			wall19_pos.y = 200;
			wall20_pos.x = 2800;
			wall20_pos.y = 350;
			wall21_pos.x = 2800;
			wall21_pos.y = 500;
			wall22_pos.x = 3100;
			wall22_pos.y = 200;
			wall23_pos.x = 3100;
			wall23_pos.y = 500;
			wall24_pos.x = 3100;
			wall24_pos.y = 650;
			wall25_pos.x = 3400;
			wall25_pos.y = 200;
			wall26_pos.x = 3400;
			wall26_pos.y = 500;
			wall27_pos.x = 3400;
			wall27_pos.y = 650;
			wall28_pos.x = 3700;
			wall28_pos.y = 200;
			wall29_pos.x = 3700;
			wall29_pos.y = 350;
			wall30_pos.x = 3700;
			wall30_pos.y = 650;
			wall31_pos.x = 4000;
			wall31_pos.y = 350;
			wall32_pos.x = 4000;
			wall32_pos.y = 500;
			wall33_pos.x = 4000;
			wall33_pos.y = 650;
			wall34_pos.x = 4300;
			wall34_pos.y = 200;
			wall35_pos.x = 4300;
			wall35_pos.y = 500;
			wall36_pos.x = 4300;
			wall36_pos.y = 650;
			wall37_pos.x = 4600;
			wall37_pos.y = 350;
			wall38_pos.x = 4600;
			wall38_pos.y = 500;
			wall39_pos.x = 4600;
			wall39_pos.y = 650;
			
			sprintf(compteur_mort_char, "attemps : %d", nb_mort);
			compteur_mort = TTF_RenderText_Blended(police_ecriture_2, compteur_mort_char, blanc);
		while(program_launched)
	{

			SDL_Event event;
		while(SDL_PollEvent(&event))
		{
			switch(event.type)
			{
		
					
				case SDL_QUIT:
					program_launched = SDL_FALSE;
					break;
					
				case SDL_MOUSEBUTTONUP:
					
						sens = 2;
						animation_sens_2(fenetre, ecran, compteur_mort,mort_compt_pos,char_2_0, char_pos, fond_2_0,wall_3_1,wall1_pos,wall2_pos,wall3_pos,wall4_pos,wall5_pos,wall6_pos,wall7_pos, wall8_pos, wall9_pos,
									 wall10_pos,wall11_pos,wall12_pos,wall13_pos,wall14_pos,wall15_pos,wall16_pos, wall17_pos, wall18_pos,wall19_pos, wall20_pos,
									 wall21_pos,wall22_pos,wall23_pos,wall24_pos,wall25_pos,wall26_pos,wall27_pos,wall28_pos,wall29_pos,wall30_pos, wall31_pos,wall32_pos,wall33_pos,wall34_pos,
									 wall35_pos,wall36_pos,wall37_pos,wall38_pos,wall39_pos,wall40_pos);
						multiplicateur_vitesse = 0;
						
					
					continue;
					
				case SDL_MOUSEBUTTONDOWN:
					sens = 1;
					animation_sens_1(fenetre, ecran,compteur_mort,mort_compt_pos, char_1_0, char_pos, fond_1_0,wall_3_0,wall1_pos,wall2_pos,wall3_pos,wall4_pos,wall5_pos,wall6_pos,wall7_pos, wall8_pos, wall9_pos,
									 wall10_pos,wall11_pos,wall12_pos,wall13_pos,wall14_pos,wall15_pos,wall16_pos, wall17_pos, wall18_pos,wall19_pos, wall20_pos,
									 wall21_pos,wall22_pos,wall23_pos,wall24_pos,wall25_pos,wall26_pos,wall27_pos,wall28_pos,wall29_pos,wall30_pos, wall31_pos,wall32_pos,wall33_pos,wall34_pos,
									 wall35_pos,wall36_pos,wall37_pos,wall38_pos,wall39_pos,wall40_pos);
					multiplicateur_vitesse = 0;
					continue;
				case SDL_KEYUP:
								
				switch(event.key.keysym.sym)
				{
					case SDLK_SPACE:
						sens = 2;
						animation_sens_2(fenetre, ecran, compteur_mort,mort_compt_pos,char_2_0, char_pos, fond_2_0,wall_3_1,wall1_pos,wall2_pos,wall3_pos,wall4_pos,wall5_pos,wall6_pos,wall7_pos, wall8_pos, wall9_pos,
									 wall10_pos,wall11_pos,wall12_pos,wall13_pos,wall14_pos,wall15_pos,wall16_pos, wall17_pos, wall18_pos,wall19_pos, wall20_pos,
									 wall21_pos,wall22_pos,wall23_pos,wall24_pos,wall25_pos,wall26_pos,wall27_pos,wall28_pos,wall29_pos,wall30_pos, wall31_pos,wall32_pos,wall33_pos,wall34_pos,
									 wall35_pos,wall36_pos,wall37_pos,wall38_pos,wall39_pos,wall40_pos);
						multiplicateur_vitesse = 0;
						
					
					default:
						continue;
				}
				continue;
				
			case SDL_KEYDOWN:
								
				switch(event.key.keysym.sym)
				{
					case SDLK_SPACE:
						sens = 1;
					animation_sens_1(fenetre, ecran,compteur_mort,mort_compt_pos, char_1_0, char_pos, fond_1_0,wall_3_0,wall1_pos,wall2_pos,wall3_pos,wall4_pos,wall5_pos,wall6_pos,wall7_pos, wall8_pos, wall9_pos,
									 wall10_pos,wall11_pos,wall12_pos,wall13_pos,wall14_pos,wall15_pos,wall16_pos, wall17_pos, wall18_pos,wall19_pos, wall20_pos,
									 wall21_pos,wall22_pos,wall23_pos,wall24_pos,wall25_pos,wall26_pos,wall27_pos,wall28_pos,wall29_pos,wall30_pos, wall31_pos,wall32_pos,wall33_pos,wall34_pos,
									 wall35_pos,wall36_pos,wall37_pos,wall38_pos,wall39_pos,wall40_pos);
					multiplicateur_vitesse = 0;
					
					default:
						continue;
				}
				continue;
					
				default:
					continue;
			}
			

		}
				if(sens == 1)
				{
					temps_actuel = SDL_GetTicks();
					if(temps_actuel - temps_precedent > 2)
					{
						char_pos.y -= 3,75;
						wall1_pos.x -= 2;
						wall2_pos.x -= 2;
						wall3_pos.x -= 2;
						wall4_pos.x -= 2;
						wall5_pos.x -= 2;
						wall6_pos.x -= 2;
						wall7_pos.x -= 2;
						wall8_pos.x -= 2;
						wall9_pos.x -= 2;
						wall10_pos.x -= 2;
						wall11_pos.x -= 2;
						wall12_pos.x -= 2;
						wall13_pos.x -= 2;
						wall14_pos.x -= 2;
						wall15_pos.x -= 2;
						wall16_pos.x -= 2;
						wall17_pos.x -= 2;
						wall18_pos.x -= 2;
						wall19_pos.x -= 2;
						wall20_pos.x -= 2;
						wall21_pos.x -= 2;
						wall22_pos.x -= 2;
						wall23_pos.x -= 2;
						wall24_pos.x -= 2;
						wall25_pos.x -= 2;
						wall26_pos.x -= 2;
						wall27_pos.x -= 2;
						wall28_pos.x -= 2;
						wall29_pos.x -= 2;
						wall30_pos.x -= 2;
						wall31_pos.x -= 2;
						wall32_pos.x -= 2;
						wall33_pos.x -= 2;
						wall34_pos.x -= 2;
						wall35_pos.x -= 2;
						wall36_pos.x -= 2;
						wall37_pos.x -= 2;
						wall38_pos.x -= 2;
						wall39_pos.x -= 2;
						wall40_pos.x -= 2;
						temps_precedent = temps_actuel;
						
					}
					multiplicateur_vitesse =+ 2;
					animation_sens_1(fenetre, ecran,compteur_mort,mort_compt_pos, char_1_0, char_pos, fond_1_0,wall_3_0,wall1_pos,wall2_pos,wall3_pos,wall4_pos,wall5_pos,wall6_pos,wall7_pos, wall8_pos, wall9_pos,
									 wall10_pos,wall11_pos,wall12_pos,wall13_pos,wall14_pos,wall15_pos,wall16_pos, wall17_pos, wall18_pos,wall19_pos, wall20_pos,
									 wall21_pos,wall22_pos,wall23_pos,wall24_pos,wall25_pos,wall26_pos,wall27_pos,wall28_pos,wall29_pos,wall30_pos, wall31_pos,wall32_pos,wall33_pos,wall34_pos,
									 wall35_pos,wall36_pos,wall37_pos,wall38_pos,wall39_pos,wall40_pos);
					temps_actuel = 0;
				}
				if(sens == 2)
				{
					temps_actuel = SDL_GetTicks();
					if(temps_actuel - temps_precedent > 2)
					{
						char_pos.y += 3,75;
						wall1_pos.x -= 2;
						wall2_pos.x -= 2;
						wall3_pos.x -= 2;
						wall4_pos.x -= 2;
						wall5_pos.x -= 2;
						wall6_pos.x -= 2;
						wall7_pos.x -= 2;
						wall8_pos.x -= 2;
						wall9_pos.x -= 2;
						wall10_pos.x -= 2;
						wall11_pos.x -= 2;
						wall12_pos.x -= 2;
						wall13_pos.x -= 2;
						wall14_pos.x -= 2;
						wall15_pos.x -= 2;
						wall16_pos.x -= 2;
						wall17_pos.x -= 2;
						wall18_pos.x -= 2;
						wall19_pos.x -= 2;
						wall20_pos.x -= 2;
						wall21_pos.x -= 2;
						wall22_pos.x -= 2;
						wall23_pos.x -= 2;
						wall24_pos.x -= 2;
						wall25_pos.x -= 2;
						wall26_pos.x -= 2;
						wall27_pos.x -= 2;
						wall28_pos.x -= 2;
						wall29_pos.x -= 2;
						wall30_pos.x -= 2;
						wall31_pos.x -= 2;
						wall32_pos.x -= 2;
						wall33_pos.x -= 2;
						wall34_pos.x -= 2;
						wall35_pos.x -= 2;
						wall36_pos.x -= 2;
						wall37_pos.x -= 2;
						wall38_pos.x -= 2;
						wall39_pos.x -= 2;
						wall40_pos.x -= 2;
						temps_precedent = temps_actuel;
						
					}
					multiplicateur_vitesse =+ 2;
					animation_sens_2(fenetre, ecran,compteur_mort,mort_compt_pos, char_2_0, char_pos, fond_2_0,wall_3_1,wall1_pos,wall2_pos,wall3_pos,wall4_pos,wall5_pos,wall6_pos,wall7_pos, wall8_pos, wall9_pos,
									 wall10_pos,wall11_pos,wall12_pos,wall13_pos,wall14_pos,wall15_pos,wall16_pos, wall17_pos, wall18_pos,wall19_pos, wall20_pos,
									 wall21_pos,wall22_pos,wall23_pos,wall24_pos,wall25_pos,wall26_pos,wall27_pos,wall28_pos,wall29_pos,wall30_pos, wall31_pos,wall32_pos,wall33_pos,wall34_pos,
									 wall35_pos,wall36_pos,wall37_pos,wall38_pos,wall39_pos,wall40_pos);
					temps_actuel = 0;
				}
				if(char_pos.y < 130 || char_pos.y > 870 - 75 ||
				 char_pos.x + 50 > wall1_pos.x && char_pos.x + 20 < wall1_pos.x + 50 && char_pos.y + 50 > wall1_pos.y && char_pos.y + 20 < wall1_pos.y + 150||
				 char_pos.x + 50 > wall2_pos.x && char_pos.x + 20 < wall2_pos.x + 50 && char_pos.y + 50 > wall2_pos.y && char_pos.y + 20 < wall2_pos.y + 150||
				 char_pos.x + 50 > wall3_pos.x && char_pos.x + 20 < wall3_pos.x + 50 && char_pos.y + 50 > wall3_pos.y && char_pos.y + 20 < wall3_pos.y + 150||
				 char_pos.x + 50 > wall4_pos.x && char_pos.x + 20 < wall4_pos.x + 50 && char_pos.y + 50 > wall4_pos.y && char_pos.y + 20 < wall4_pos.y + 150||
				 char_pos.x + 50 > wall5_pos.x && char_pos.x + 20 < wall5_pos.x + 50 && char_pos.y + 50 > wall5_pos.y && char_pos.y + 20 < wall5_pos.y + 150||
				 char_pos.x + 50 > wall6_pos.x && char_pos.x + 20 < wall6_pos.x + 50 && char_pos.y + 50 > wall6_pos.y && char_pos.y + 20 < wall6_pos.y + 150||
				 char_pos.x + 50 > wall7_pos.x && char_pos.x + 20 < wall7_pos.x + 50 && char_pos.y + 50 > wall7_pos.y && char_pos.y + 20 < wall7_pos.y + 150||
				 char_pos.x + 50 > wall8_pos.x && char_pos.x + 20 < wall8_pos.x + 50 && char_pos.y + 50 > wall8_pos.y && char_pos.y + 20 < wall8_pos.y + 150||
				 char_pos.x + 50 > wall9_pos.x && char_pos.x + 20 < wall9_pos.x + 50 && char_pos.y + 50 > wall9_pos.y && char_pos.y + 20 < wall9_pos.y + 150||
				 char_pos.x + 50 > wall10_pos.x && char_pos.x + 20 < wall10_pos.x + 50 && char_pos.y + 50 > wall10_pos.y && char_pos.y + 20 < wall10_pos.y + 150||
				 char_pos.x + 50 > wall11_pos.x && char_pos.x + 20 < wall11_pos.x + 50 && char_pos.y + 50 > wall11_pos.y && char_pos.y + 20 < wall11_pos.y + 150||
				 char_pos.x + 50 > wall12_pos.x && char_pos.x + 20 < wall12_pos.x + 50 && char_pos.y + 50 > wall12_pos.y && char_pos.y + 20 < wall12_pos.y + 150||
				 char_pos.x + 50 > wall13_pos.x && char_pos.x + 20 < wall13_pos.x + 50 && char_pos.y + 50 > wall13_pos.y && char_pos.y + 20 < wall13_pos.y + 150||
				 char_pos.x + 50 > wall14_pos.x && char_pos.x + 20 < wall14_pos.x + 50 && char_pos.y + 50 > wall14_pos.y && char_pos.y + 20 < wall14_pos.y + 150||
				 char_pos.x + 50 > wall15_pos.x && char_pos.x + 20 < wall15_pos.x + 50 && char_pos.y + 50 > wall15_pos.y && char_pos.y + 20 < wall15_pos.y + 150||
				 char_pos.x + 50 > wall16_pos.x && char_pos.x + 20 < wall16_pos.x + 50 && char_pos.y + 50 > wall16_pos.y && char_pos.y + 20 < wall16_pos.y + 150||
				 char_pos.x + 50 > wall17_pos.x && char_pos.x + 20 < wall17_pos.x + 50 && char_pos.y + 50 > wall17_pos.y && char_pos.y + 20 < wall17_pos.y + 150||
				 char_pos.x + 50 > wall18_pos.x && char_pos.x + 20 < wall18_pos.x + 50 && char_pos.y + 50 > wall18_pos.y && char_pos.y + 20 < wall18_pos.y + 150||
				 char_pos.x + 50 > wall19_pos.x && char_pos.x + 20 < wall19_pos.x + 50 && char_pos.y + 50 > wall19_pos.y && char_pos.y + 20 < wall19_pos.y + 150||
				 char_pos.x + 50 > wall20_pos.x && char_pos.x + 20 < wall20_pos.x + 50 && char_pos.y + 50 > wall20_pos.y && char_pos.y + 20 < wall20_pos.y + 150||
				 char_pos.x + 50 > wall21_pos.x && char_pos.x + 20 < wall21_pos.x + 50 && char_pos.y + 50 > wall21_pos.y && char_pos.y + 20 < wall21_pos.y + 150||
				 char_pos.x + 50 > wall22_pos.x && char_pos.x + 20 < wall22_pos.x + 50 && char_pos.y + 50 > wall22_pos.y && char_pos.y + 20 < wall22_pos.y + 150||
				 char_pos.x + 50 > wall23_pos.x && char_pos.x + 20 < wall23_pos.x + 50 && char_pos.y + 50 > wall23_pos.y && char_pos.y + 20 < wall23_pos.y + 150||
				 char_pos.x + 50 > wall24_pos.x && char_pos.x + 20 < wall24_pos.x + 50 && char_pos.y + 50 > wall24_pos.y && char_pos.y + 20 < wall24_pos.y + 150||
				 char_pos.x + 50 > wall25_pos.x && char_pos.x + 20 < wall25_pos.x + 50 && char_pos.y + 50 > wall25_pos.y && char_pos.y + 20 < wall25_pos.y + 150||
				 char_pos.x + 50 > wall26_pos.x && char_pos.x + 20 < wall26_pos.x + 50 && char_pos.y + 50 > wall26_pos.y && char_pos.y + 20 < wall26_pos.y + 150||
				 char_pos.x + 50 > wall27_pos.x && char_pos.x + 20 < wall27_pos.x + 50 && char_pos.y + 50 > wall27_pos.y && char_pos.y + 20 < wall27_pos.y + 150||
				 char_pos.x + 50 > wall28_pos.x && char_pos.x + 20 < wall28_pos.x + 50 && char_pos.y + 50 > wall28_pos.y && char_pos.y + 20 < wall28_pos.y + 150||
				 char_pos.x + 50 > wall29_pos.x && char_pos.x + 20 < wall29_pos.x + 50 && char_pos.y + 50 > wall29_pos.y && char_pos.y + 20 < wall29_pos.y + 150||
				 char_pos.x + 50 > wall30_pos.x && char_pos.x + 20 < wall30_pos.x + 50 && char_pos.y + 50 > wall30_pos.y && char_pos.y + 20 < wall30_pos.y + 150||
				 char_pos.x + 50 > wall31_pos.x && char_pos.x + 20 < wall31_pos.x + 50 && char_pos.y + 50 > wall31_pos.y && char_pos.y + 20 < wall31_pos.y + 150||
				 char_pos.x + 50 > wall32_pos.x && char_pos.x + 20 < wall32_pos.x + 50 && char_pos.y + 50 > wall32_pos.y && char_pos.y + 20 < wall32_pos.y + 150||
				 char_pos.x + 50 > wall33_pos.x && char_pos.x + 20 < wall33_pos.x + 50 && char_pos.y + 50 > wall33_pos.y && char_pos.y + 20 < wall33_pos.y + 150||
				 char_pos.x + 50 > wall34_pos.x && char_pos.x + 20 < wall34_pos.x + 50 && char_pos.y + 50 > wall34_pos.y && char_pos.y + 20 < wall34_pos.y + 150||
				 char_pos.x + 50 > wall35_pos.x && char_pos.x + 20 < wall35_pos.x + 50 && char_pos.y + 50 > wall35_pos.y && char_pos.y + 20 < wall35_pos.y + 150||
				 char_pos.x + 50 > wall36_pos.x && char_pos.x + 20 < wall36_pos.x + 50 && char_pos.y + 50 > wall36_pos.y && char_pos.y + 20 < wall36_pos.y + 150||
				 char_pos.x + 50 > wall37_pos.x && char_pos.x + 20 < wall37_pos.x + 50 && char_pos.y + 50 > wall37_pos.y && char_pos.y + 20 < wall37_pos.y + 150||
				 char_pos.x + 50 > wall38_pos.x && char_pos.x + 20 < wall38_pos.x + 50 && char_pos.y + 50 > wall38_pos.y && char_pos.y + 20 < wall38_pos.y + 150||
				 char_pos.x + 50 > wall39_pos.x && char_pos.x + 20 < wall39_pos.x + 50 && char_pos.y + 50 > wall39_pos.y && char_pos.y + 20 < wall39_pos.y + 150||
				 char_pos.x + 50 > wall40_pos.x && char_pos.x + 20 < wall40_pos.x + 50 && char_pos.y + 50 > wall40_pos.y && char_pos.y + 20 < wall40_pos.y + 150)
				{
					nb_mort ++;
					char_pos.y = 425;
					wall1_pos.x = 1000;
					wall1_pos.y = 350;
					wall2_pos.x = 1000;
					wall2_pos.y = 500;
					wall3_pos.x = 1000;
					wall3_pos.y = 650;
					wall4_pos.x = 1300;
					wall4_pos.y = 200;
					wall5_pos.x = 1300;
					wall5_pos.y = 350;
					wall6_pos.x = 1300;
					wall6_pos.y = 650;
					wall7_pos.x = 1600;
					wall7_pos.y = 200;
					wall8_pos.x = 1600;
					wall8_pos.y = 500;
					wall9_pos.x = 1600;
					wall9_pos.y = 650;
					wall10_pos.x = 1900;
					wall10_pos.y = 350;
					wall11_pos.x = 1900;
					wall11_pos.y = 500;
					wall12_pos.x = 1900;
					wall12_pos.y = 650;
					wall13_pos.x = 2200;
					wall13_pos.y = 200;
					wall14_pos.x = 2200;
					wall14_pos.y = 350;
					wall15_pos.x = 2200;
					wall15_pos.y = 650;
					wall16_pos.x = 2500;
					wall16_pos.y = 200;
					wall17_pos.x = 2500;
					wall17_pos.y = 350;
					wall18_pos.x = 2500;
					wall18_pos.y = 650;
					wall19_pos.x = 2800;
					wall19_pos.y = 200;
					wall20_pos.x = 2800;
					wall20_pos.y = 350;
					wall21_pos.x = 2800;
					wall21_pos.y = 500;
					wall22_pos.x = 3100;
					wall22_pos.y = 200;
					wall23_pos.x = 3100;
					wall23_pos.y = 500;
					wall24_pos.x = 3100;
					wall24_pos.y = 650;
					wall25_pos.x = 3400;
					wall25_pos.y = 200;
					wall26_pos.x = 3400;
					wall26_pos.y = 500;
					wall27_pos.x = 3400;
					wall27_pos.y = 650;
					wall28_pos.x = 3700;
					wall28_pos.y = 200;
					wall29_pos.x = 3700;
					wall29_pos.y = 350;
					wall30_pos.x = 3700;
					wall30_pos.y = 650;
					wall31_pos.x = 4000;
					wall31_pos.y = 350;
					wall32_pos.x = 4000;
					wall32_pos.y = 500;
					wall33_pos.x = 4000;
					wall33_pos.y = 650;
					wall34_pos.x = 4300;
					wall34_pos.y = 200;
					wall35_pos.x = 4300;
					wall35_pos.y = 500;
					wall36_pos.x = 4300;
					wall36_pos.y = 650;
					wall37_pos.x = 4600;
					wall37_pos.y = 350;
					wall38_pos.x = 4600;
					wall38_pos.y = 500;
					wall39_pos.x = 4600;
					wall39_pos.y = 650;
					sprintf(compteur_mort_char, "attemps : %d", nb_mort);
					compteur_mort = TTF_RenderText_Blended(police_ecriture_2, compteur_mort_char, blanc);
					SDL_Delay(500);
				}
				if(wall39_pos.x < 200)
				{
					return 3;
				}
	}
}
//-------------------------------------------------------LEVEL 4--------------------------------------------------------------------
int level_4(SDL_Window *fenetre, SDL_Surface *ecran, SDL_Surface *compteur_mort, SDL_Surface *char_1_0, SDL_Surface *char_2_0, SDL_Rect char_pos, SDL_Surface *fond_1_0,
				 SDL_Surface *fond_2_0,	SDL_Surface *wall_3_0, SDL_Surface *wall_3_1, SDL_Rect wall1_pos, SDL_Rect wall2_pos, SDL_Rect wall3_pos, SDL_Rect wall4_pos, 
					 SDL_Rect wall5_pos,SDL_Rect wall6_pos, SDL_Rect wall7_pos, SDL_Rect wall8_pos, SDL_Rect wall9_pos,
					  SDL_Rect wall10_pos, SDL_Rect wall11_pos, SDL_Rect wall12_pos, SDL_Rect wall13_pos, 
					 SDL_Rect wall14_pos,SDL_Rect wall15_pos, SDL_Rect wall16_pos, SDL_Rect wall17_pos, SDL_Rect wall18_pos
					 , SDL_Rect wall19_pos, SDL_Rect wall20_pos,SDL_Rect wall21_pos, SDL_Rect wall22_pos, SDL_Rect wall23_pos, SDL_Rect wall24_pos, 
					 SDL_Rect wall25_pos,SDL_Rect wall26_pos, SDL_Rect wall27_pos, SDL_Rect wall28_pos, SDL_Rect wall29_pos,
					  SDL_Rect wall30_pos, SDL_Rect wall31_pos, SDL_Rect wall32_pos, SDL_Rect wall33_pos, 
					 SDL_Rect wall34_pos,SDL_Rect wall35_pos, SDL_Rect wall36_pos, SDL_Rect wall37_pos, SDL_Rect wall38_pos
					 , SDL_Rect wall39_pos, SDL_Rect wall40_pos)
{
	
				SDL_Color rouge = {255, 0, 0};
				SDL_Color blanc = {255, 255, 255};
				SDL_Color noir = {0, 0, 0};
			auto temps_precedent = 0, temps_actuel = 0, multiplicateur_vitesse = 0;
			TTF_Font *police_ecriture_1, *police_ecriture_2;
			police_ecriture_1 = TTF_OpenFont("src/ttf/Robot Crush.ttf", 25);
			police_ecriture_2 = TTF_OpenFont("src/ttf/Robot Crush.ttf", 50);
			char compteur_mort_char[50] = "";
			SDL_bool program_launched = SDL_TRUE;
			auto sens = 2;
			auto nb_mort = 0;
			SDL_Rect mort_compt_pos;
			mort_compt_pos.x = 20;
			mort_compt_pos.y = 10;
			char_pos.y = 425;
					wall1_pos.x = 1500;
					wall1_pos.y = 200;
					wall2_pos.x = 1500;
					wall2_pos.y = 650;
					wall3_pos.x = 1500;
					wall3_pos.y = 200;
					wall4_pos.x = 1500;
					wall4_pos.y = 650;
					wall5_pos.x = 1500;
					wall5_pos.y = 200;
					wall6_pos.x = 1500;
					wall6_pos.y = 650;
					wall7_pos.x = 1500;
					wall7_pos.y = 200;
					wall8_pos.x = 1500;
					wall8_pos.y = 650;
					wall9_pos.x = 1500;
					wall9_pos.y = 200;
					wall10_pos.x = 1500;
					wall10_pos.y = 500;
					wall11_pos.x = 1500;
					wall11_pos.y = 400 - 200;
					wall12_pos.x = 1500;
					wall12_pos.y = 500;
					wall13_pos.x = 1600;
					wall13_pos.y = 400 - 200;
					wall14_pos.x = 1600;
					wall14_pos.y = 500;
					wall15_pos.x = 1700;
					wall15_pos.y = 400 - 200;
					wall16_pos.x = 1700;
					wall16_pos.y = 500;
					wall17_pos.x = 1800;
					wall17_pos.y = 400 - 200;
					wall18_pos.x = 1800;
					wall18_pos.y = 500;
					wall19_pos.x = 1900;
					wall19_pos.y = 400 - 200;
					wall20_pos.x = 1900;
					wall20_pos.y = 500;
					wall21_pos.x = 2000;
					wall21_pos.y = 400 - 200;
					wall22_pos.x = 2000;
					wall22_pos.y = 500;
					wall23_pos.x = 2100;
					wall23_pos.y = 400 - 200;
					wall24_pos.x = 2100;
					wall24_pos.y = 500;
					wall25_pos.x = 2200;
					wall25_pos.y = 400 - 200;
					wall26_pos.x = 2200;
					wall26_pos.y = 500;
					wall27_pos.x = 2300;
					wall27_pos.y = 400 - 200;
					wall28_pos.x = 2300;
					wall28_pos.y = 500;
					wall29_pos.x = 2400;
					wall29_pos.y = 400 - 200;
					wall30_pos.x = 2400;
					wall30_pos.y = 500;
					wall31_pos.x = 2500;
					wall31_pos.y = 400 - 200;
					wall32_pos.x = 2500;
					wall32_pos.y = 500;
					wall33_pos.x = 2600;
					wall33_pos.y = 425 - 200;
					wall34_pos.x = 2600;
					wall34_pos.y = 485;
					wall35_pos.x = 2700;
					wall35_pos.y = 425 - 200;
					wall36_pos.x = 2700;
					wall36_pos.y = 485;
					wall37_pos.x = 2800;
					wall37_pos.y = 425 - 200;
					wall38_pos.x = 2800;
					wall38_pos.y = 485;
					wall39_pos.x = 2900;
					wall39_pos.y = 425 - 200;
					wall40_pos.x = 2900;
					wall40_pos.y = 485;
			
			sprintf(compteur_mort_char, "attemps : %d", nb_mort);
			compteur_mort = TTF_RenderText_Blended(police_ecriture_2, compteur_mort_char, blanc);
		while(program_launched)
	{

			SDL_Event event;
		while(SDL_PollEvent(&event))
		{
			switch(event.type)
			{
	
					
				case SDL_QUIT:
					program_launched = SDL_FALSE;
					break;
					
				case SDL_MOUSEBUTTONUP:
						sens = 2;
						animation_sens_2(fenetre, ecran, compteur_mort,mort_compt_pos,char_2_0, char_pos, fond_2_0,wall_3_1,wall1_pos,wall2_pos,wall3_pos,wall4_pos,wall5_pos,wall6_pos,wall7_pos, wall8_pos, wall9_pos,
									 wall10_pos,wall11_pos,wall12_pos,wall13_pos,wall14_pos,wall15_pos,wall16_pos, wall17_pos, wall18_pos,wall19_pos, wall20_pos,
									 wall21_pos,wall22_pos,wall23_pos,wall24_pos,wall25_pos,wall26_pos,wall27_pos,wall28_pos,wall29_pos,wall30_pos, wall31_pos,wall32_pos,wall33_pos,wall34_pos,
									 wall35_pos,wall36_pos,wall37_pos,wall38_pos,wall39_pos,wall40_pos);
						multiplicateur_vitesse = 0;
						
					
					continue;
					
				case SDL_MOUSEBUTTONDOWN:
					sens = 1;
					animation_sens_1(fenetre, ecran,compteur_mort,mort_compt_pos, char_1_0, char_pos, fond_1_0,wall_3_0,wall1_pos,wall2_pos,wall3_pos,wall4_pos,wall5_pos,wall6_pos,wall7_pos, wall8_pos, wall9_pos,
									 wall10_pos,wall11_pos,wall12_pos,wall13_pos,wall14_pos,wall15_pos,wall16_pos, wall17_pos, wall18_pos,wall19_pos, wall20_pos,
									 wall21_pos,wall22_pos,wall23_pos,wall24_pos,wall25_pos,wall26_pos,wall27_pos,wall28_pos,wall29_pos,wall30_pos, wall31_pos,wall32_pos,wall33_pos,wall34_pos,
									 wall35_pos,wall36_pos,wall37_pos,wall38_pos,wall39_pos,wall40_pos);
					multiplicateur_vitesse = 0;
					continue;
				case SDL_KEYUP:
								
				switch(event.key.keysym.sym)
				{
					case SDLK_SPACE:
						sens = 2;
						animation_sens_2(fenetre, ecran, compteur_mort,mort_compt_pos,char_2_0, char_pos, fond_2_0,wall_3_1,wall1_pos,wall2_pos,wall3_pos,wall4_pos,wall5_pos,wall6_pos,wall7_pos, wall8_pos, wall9_pos,
									 wall10_pos,wall11_pos,wall12_pos,wall13_pos,wall14_pos,wall15_pos,wall16_pos, wall17_pos, wall18_pos,wall19_pos, wall20_pos,
									 wall21_pos,wall22_pos,wall23_pos,wall24_pos,wall25_pos,wall26_pos,wall27_pos,wall28_pos,wall29_pos,wall30_pos, wall31_pos,wall32_pos,wall33_pos,wall34_pos,
									 wall35_pos,wall36_pos,wall37_pos,wall38_pos,wall39_pos,wall40_pos);
						multiplicateur_vitesse = 0;
						
					
					default:
						continue;
				}
				continue;
				
			case SDL_KEYDOWN:
								
				switch(event.key.keysym.sym)
				{
					case SDLK_SPACE:
						sens = 1;
					animation_sens_1(fenetre, ecran,compteur_mort,mort_compt_pos, char_1_0, char_pos, fond_1_0,wall_3_0,wall1_pos,wall2_pos,wall3_pos,wall4_pos,wall5_pos,wall6_pos,wall7_pos, wall8_pos, wall9_pos,
									 wall10_pos,wall11_pos,wall12_pos,wall13_pos,wall14_pos,wall15_pos,wall16_pos, wall17_pos, wall18_pos,wall19_pos, wall20_pos,
									 wall21_pos,wall22_pos,wall23_pos,wall24_pos,wall25_pos,wall26_pos,wall27_pos,wall28_pos,wall29_pos,wall30_pos, wall31_pos,wall32_pos,wall33_pos,wall34_pos,
									 wall35_pos,wall36_pos,wall37_pos,wall38_pos,wall39_pos,wall40_pos);
					multiplicateur_vitesse = 0;
					
					default:
						continue;
				}
				continue;
					
				default:
					continue;
			}
			

		}
				if(sens == 1)
				{
					temps_actuel = SDL_GetTicks();
					if(temps_actuel - temps_precedent > 1)
					{
						char_pos.y -= 3;
						wall1_pos.x -= 2;
						wall2_pos.x -= 2;
						wall3_pos.x -= 2;
						wall4_pos.x -= 2;
						wall5_pos.x -= 2;
						wall6_pos.x -= 2;
						wall7_pos.x -= 2;
						wall8_pos.x -= 2;
						wall9_pos.x -= 2;
						wall10_pos.x -= 2;
						wall11_pos.x -= 2;
						wall12_pos.x -= 2;
						wall13_pos.x -= 2;
						wall14_pos.x -= 2;
						wall15_pos.x -= 2;
						wall16_pos.x -= 2;
						wall17_pos.x -= 2;
						wall18_pos.x -= 2;
						wall19_pos.x -= 2;
						wall20_pos.x -= 2;
						wall21_pos.x -= 2;
						wall22_pos.x -= 2;
						wall23_pos.x -= 2;
						wall24_pos.x -= 2;
						wall25_pos.x -= 2;
						wall26_pos.x -= 2;
						wall27_pos.x -= 2;
						wall28_pos.x -= 2;
						wall29_pos.x -= 2;
						wall30_pos.x -= 2;
						wall31_pos.x -= 2;
						wall32_pos.x -= 2;
						wall33_pos.x -= 2;
						wall34_pos.x -= 2;
						wall35_pos.x -= 2;
						wall36_pos.x -= 2;
						wall37_pos.x -= 2;
						wall38_pos.x -= 2;
						wall39_pos.x -= 2;
						wall40_pos.x -= 2;
						temps_precedent = temps_actuel;
						
					}
					multiplicateur_vitesse =+ 2;
					animation_sens_1(fenetre, ecran,compteur_mort,mort_compt_pos, char_1_0, char_pos, fond_1_0,wall_3_0,wall1_pos,wall2_pos,wall3_pos,wall4_pos,wall5_pos,wall6_pos,wall7_pos, wall8_pos, wall9_pos,
									 wall10_pos,wall11_pos,wall12_pos,wall13_pos,wall14_pos,wall15_pos,wall16_pos, wall17_pos, wall18_pos,wall19_pos, wall20_pos,
									 wall21_pos,wall22_pos,wall23_pos,wall24_pos,wall25_pos,wall26_pos,wall27_pos,wall28_pos,wall29_pos,wall30_pos, wall31_pos,wall32_pos,wall33_pos,wall34_pos,
									 wall35_pos,wall36_pos,wall37_pos,wall38_pos,wall39_pos,wall40_pos);
					temps_actuel = 0;
				}
				if(sens == 2)
				{
					temps_actuel = SDL_GetTicks();
					if(temps_actuel - temps_precedent > 1)
					{
						char_pos.y += 3;
						wall1_pos.x -= 2;
						wall2_pos.x -= 2;
						wall3_pos.x -= 2;
						wall4_pos.x -= 2;
						wall5_pos.x -= 2;
						wall6_pos.x -= 2;
						wall7_pos.x -= 2;
						wall8_pos.x -= 2;
						wall9_pos.x -= 2;
						wall10_pos.x -= 2;
						wall11_pos.x -= 2;
						wall12_pos.x -= 2;
						wall13_pos.x -= 2;
						wall14_pos.x -= 2;
						wall15_pos.x -= 2;
						wall16_pos.x -= 2;
						wall17_pos.x -= 2;
						wall18_pos.x -= 2;
						wall19_pos.x -= 2;
						wall20_pos.x -= 2;
						wall21_pos.x -= 2;
						wall22_pos.x -= 2;
						wall23_pos.x -= 2;
						wall24_pos.x -= 2;
						wall25_pos.x -= 2;
						wall26_pos.x -= 2;
						wall27_pos.x -= 2;
						wall28_pos.x -= 2;
						wall29_pos.x -= 2;
						wall30_pos.x -= 2;
						wall31_pos.x -= 2;
						wall32_pos.x -= 2;
						wall33_pos.x -= 2;
						wall34_pos.x -= 2;
						wall35_pos.x -= 2;
						wall36_pos.x -= 2;
						wall37_pos.x -= 2;
						wall38_pos.x -= 2;
						wall39_pos.x -= 2;
						wall40_pos.x -= 2;
						temps_precedent = temps_actuel;
						
					}
					multiplicateur_vitesse =+ 2;
					animation_sens_2(fenetre, ecran,compteur_mort,mort_compt_pos, char_2_0, char_pos, fond_2_0,wall_3_1,wall1_pos,wall2_pos,wall3_pos,wall4_pos,wall5_pos,wall6_pos,wall7_pos, wall8_pos, wall9_pos,
									 wall10_pos,wall11_pos,wall12_pos,wall13_pos,wall14_pos,wall15_pos,wall16_pos, wall17_pos, wall18_pos,wall19_pos, wall20_pos,
									 wall21_pos,wall22_pos,wall23_pos,wall24_pos,wall25_pos,wall26_pos,wall27_pos,wall28_pos,wall29_pos,wall30_pos, wall31_pos,wall32_pos,wall33_pos,wall34_pos,
									 wall35_pos,wall36_pos,wall37_pos,wall38_pos,wall39_pos,wall40_pos);
					temps_actuel = 0;
				}
				if(char_pos.y < 130 || char_pos.y > 870 - 75 ||
				 char_pos.x + 50 > wall1_pos.x && char_pos.x + 20 < wall1_pos.x + 50 && char_pos.y + 50 > wall1_pos.y && char_pos.y + 20 < wall1_pos.y + 150||
				 char_pos.x + 50 > wall2_pos.x && char_pos.x + 20 < wall2_pos.x + 50 && char_pos.y + 50 > wall2_pos.y && char_pos.y + 20 < wall2_pos.y + 150||
				 char_pos.x + 50 > wall3_pos.x && char_pos.x + 20 < wall3_pos.x + 50 && char_pos.y + 50 > wall3_pos.y && char_pos.y + 20 < wall3_pos.y + 150||
				 char_pos.x + 50 > wall4_pos.x && char_pos.x + 20 < wall4_pos.x + 50 && char_pos.y + 50 > wall4_pos.y && char_pos.y + 20 < wall4_pos.y + 150||
				 char_pos.x + 50 > wall5_pos.x && char_pos.x + 20 < wall5_pos.x + 50 && char_pos.y + 50 > wall5_pos.y && char_pos.y + 20 < wall5_pos.y + 150||
				 char_pos.x + 50 > wall6_pos.x && char_pos.x + 20 < wall6_pos.x + 50 && char_pos.y + 50 > wall6_pos.y && char_pos.y + 20 < wall6_pos.y + 150||
				 char_pos.x + 50 > wall7_pos.x && char_pos.x + 20 < wall7_pos.x + 50 && char_pos.y + 50 > wall7_pos.y && char_pos.y + 20 < wall7_pos.y + 150||
				 char_pos.x + 50 > wall8_pos.x && char_pos.x + 20 < wall8_pos.x + 50 && char_pos.y + 50 > wall8_pos.y && char_pos.y + 20 < wall8_pos.y + 150||
				 char_pos.x + 50 > wall9_pos.x && char_pos.x + 20 < wall9_pos.x + 50 && char_pos.y + 50 > wall9_pos.y && char_pos.y + 20 < wall9_pos.y + 150||
				 char_pos.x + 50 > wall10_pos.x && char_pos.x + 20 < wall10_pos.x + 50 && char_pos.y + 50 > wall10_pos.y && char_pos.y + 20 < wall10_pos.y + 150||
				 char_pos.x + 50 > wall11_pos.x && char_pos.x + 20 < wall11_pos.x + 50 && char_pos.y + 50 > wall11_pos.y && char_pos.y + 20 < wall11_pos.y + 150||
				 char_pos.x + 50 > wall12_pos.x && char_pos.x + 20 < wall12_pos.x + 50 && char_pos.y + 50 > wall12_pos.y && char_pos.y + 20 < wall12_pos.y + 150||
				 char_pos.x + 50 > wall13_pos.x && char_pos.x + 20 < wall13_pos.x + 50 && char_pos.y + 50 > wall13_pos.y && char_pos.y + 20 < wall13_pos.y + 150||
				 char_pos.x + 50 > wall14_pos.x && char_pos.x + 20 < wall14_pos.x + 50 && char_pos.y + 50 > wall14_pos.y && char_pos.y + 20 < wall14_pos.y + 150||
				 char_pos.x + 50 > wall15_pos.x && char_pos.x + 20 < wall15_pos.x + 50 && char_pos.y + 50 > wall15_pos.y && char_pos.y + 20 < wall15_pos.y + 150||
				 char_pos.x + 50 > wall16_pos.x && char_pos.x + 20 < wall16_pos.x + 50 && char_pos.y + 50 > wall16_pos.y && char_pos.y + 20 < wall16_pos.y + 150||
				 char_pos.x + 50 > wall17_pos.x && char_pos.x + 20 < wall17_pos.x + 50 && char_pos.y + 50 > wall17_pos.y && char_pos.y + 20 < wall17_pos.y + 150||
				 char_pos.x + 50 > wall18_pos.x && char_pos.x + 20 < wall18_pos.x + 50 && char_pos.y + 50 > wall18_pos.y && char_pos.y + 20 < wall18_pos.y + 150||
				 char_pos.x + 50 > wall19_pos.x && char_pos.x + 20 < wall19_pos.x + 50 && char_pos.y + 50 > wall19_pos.y && char_pos.y + 20 < wall19_pos.y + 150||
				 char_pos.x + 50 > wall20_pos.x && char_pos.x + 20 < wall20_pos.x + 50 && char_pos.y + 50 > wall20_pos.y && char_pos.y + 20 < wall20_pos.y + 150||
				 char_pos.x + 50 > wall21_pos.x && char_pos.x + 20 < wall21_pos.x + 50 && char_pos.y + 50 > wall21_pos.y && char_pos.y + 20 < wall21_pos.y + 150||
				 char_pos.x + 50 > wall22_pos.x && char_pos.x + 20 < wall22_pos.x + 50 && char_pos.y + 50 > wall22_pos.y && char_pos.y + 20 < wall22_pos.y + 150||
				 char_pos.x + 50 > wall23_pos.x && char_pos.x + 20 < wall23_pos.x + 50 && char_pos.y + 50 > wall23_pos.y && char_pos.y + 20 < wall23_pos.y + 150||
				 char_pos.x + 50 > wall24_pos.x && char_pos.x + 20 < wall24_pos.x + 50 && char_pos.y + 50 > wall24_pos.y && char_pos.y + 20 < wall24_pos.y + 150||
				 char_pos.x + 50 > wall25_pos.x && char_pos.x + 20 < wall25_pos.x + 50 && char_pos.y + 50 > wall25_pos.y && char_pos.y + 20 < wall25_pos.y + 150||
				 char_pos.x + 50 > wall26_pos.x && char_pos.x + 20 < wall26_pos.x + 50 && char_pos.y + 50 > wall26_pos.y && char_pos.y + 20 < wall26_pos.y + 150||
				 char_pos.x + 50 > wall27_pos.x && char_pos.x + 20 < wall27_pos.x + 50 && char_pos.y + 50 > wall27_pos.y && char_pos.y + 20 < wall27_pos.y + 150||
				 char_pos.x + 50 > wall28_pos.x && char_pos.x + 20 < wall28_pos.x + 50 && char_pos.y + 50 > wall28_pos.y && char_pos.y + 20 < wall28_pos.y + 150||
				 char_pos.x + 50 > wall29_pos.x && char_pos.x + 20 < wall29_pos.x + 50 && char_pos.y + 50 > wall29_pos.y && char_pos.y + 20 < wall29_pos.y + 150||
				 char_pos.x + 50 > wall30_pos.x && char_pos.x + 20 < wall30_pos.x + 50 && char_pos.y + 50 > wall30_pos.y && char_pos.y + 20 < wall30_pos.y + 150||
				 char_pos.x + 50 > wall31_pos.x && char_pos.x + 20 < wall31_pos.x + 50 && char_pos.y + 50 > wall31_pos.y && char_pos.y + 20 < wall31_pos.y + 150||
				 char_pos.x + 50 > wall32_pos.x && char_pos.x + 20 < wall32_pos.x + 50 && char_pos.y + 50 > wall32_pos.y && char_pos.y + 20 < wall32_pos.y + 150||
				 char_pos.x + 50 > wall33_pos.x && char_pos.x + 20 < wall33_pos.x + 50 && char_pos.y + 50 > wall33_pos.y && char_pos.y + 20 < wall33_pos.y + 150||
				 char_pos.x + 50 > wall34_pos.x && char_pos.x + 20 < wall34_pos.x + 50 && char_pos.y + 50 > wall34_pos.y && char_pos.y + 20 < wall34_pos.y + 150||
				 char_pos.x + 50 > wall35_pos.x && char_pos.x + 20 < wall35_pos.x + 50 && char_pos.y + 50 > wall35_pos.y && char_pos.y + 20 < wall35_pos.y + 150||
				 char_pos.x + 50 > wall36_pos.x && char_pos.x + 20 < wall36_pos.x + 50 && char_pos.y + 50 > wall36_pos.y && char_pos.y + 20 < wall36_pos.y + 150||
				 char_pos.x + 50 > wall37_pos.x && char_pos.x + 20 < wall37_pos.x + 50 && char_pos.y + 50 > wall37_pos.y && char_pos.y + 20 < wall37_pos.y + 150||
				 char_pos.x + 50 > wall38_pos.x && char_pos.x + 20 < wall38_pos.x + 50 && char_pos.y + 50 > wall38_pos.y && char_pos.y + 20 < wall38_pos.y + 150||
				 char_pos.x + 50 > wall39_pos.x && char_pos.x + 20 < wall39_pos.x + 50 && char_pos.y + 50 > wall39_pos.y && char_pos.y + 20 < wall39_pos.y + 150||
				 char_pos.x + 50 > wall40_pos.x && char_pos.x + 20 < wall40_pos.x + 50 && char_pos.y + 50 > wall40_pos.y && char_pos.y + 20 < wall40_pos.y + 150)
				{
					nb_mort ++;
					char_pos.y = 425;
					wall1_pos.x = 1500;
					wall1_pos.y = 200;
					wall2_pos.x = 1500;
					wall2_pos.y = 650;
					wall3_pos.x = 1500;
					wall3_pos.y = 200;
					wall4_pos.x = 1500;
					wall4_pos.y = 650;
					wall5_pos.x = 1500;
					wall5_pos.y = 200;
					wall6_pos.x = 1500;
					wall6_pos.y = 650;
					wall7_pos.x = 1500;
					wall7_pos.y = 200;
					wall8_pos.x = 1500;
					wall8_pos.y = 650;
					wall9_pos.x = 1500;
					wall9_pos.y = 200;
					wall10_pos.x = 1500;
					wall10_pos.y = 500;
					wall11_pos.x = 1500;
					wall11_pos.y = 400 - 200;
					wall12_pos.x = 1500;
					wall12_pos.y = 500;
					wall13_pos.x = 1600;
					wall13_pos.y = 400 - 200;
					wall14_pos.x = 1600;
					wall14_pos.y = 500;
					wall15_pos.x = 1700;
					wall15_pos.y = 400 - 200;
					wall16_pos.x = 1700;
					wall16_pos.y = 500;
					wall17_pos.x = 1800;
					wall17_pos.y = 400 - 200;
					wall18_pos.x = 1800;
					wall18_pos.y = 500;
					wall19_pos.x = 1900;
					wall19_pos.y = 400 - 200;
					wall20_pos.x = 1900;
					wall20_pos.y = 500;
					wall21_pos.x = 2000;
					wall21_pos.y = 400 - 200;
					wall22_pos.x = 2000;
					wall22_pos.y = 500;
					wall23_pos.x = 2100;
					wall23_pos.y = 400 - 200;
					wall24_pos.x = 2100;
					wall24_pos.y = 500;
					wall25_pos.x = 2200;
					wall25_pos.y = 400 - 200;
					wall26_pos.x = 2200;
					wall26_pos.y = 500;
					wall27_pos.x = 2300;
					wall27_pos.y = 400 - 200;
					wall28_pos.x = 2300;
					wall28_pos.y = 500;
					wall29_pos.x = 2400;
					wall29_pos.y = 400 - 200;
					wall30_pos.x = 2400;
					wall30_pos.y = 500;
					wall31_pos.x = 2500;
					wall31_pos.y = 400 - 200;
					wall32_pos.x = 2500;
					wall32_pos.y = 500;
					wall33_pos.x = 2600;
					wall33_pos.y = 425 - 200;
					wall34_pos.x = 2600;
					wall34_pos.y = 485;
					wall35_pos.x = 2700;
					wall35_pos.y = 425 - 200;
					wall36_pos.x = 2700;
					wall36_pos.y = 485;
					wall37_pos.x = 2800;
					wall37_pos.y = 425 - 200;
					wall38_pos.x = 2800;
					wall38_pos.y = 485;
					wall39_pos.x = 2900;
					wall39_pos.y = 425 - 200;
					wall40_pos.x = 2900;
					wall40_pos.y = 485;
					sprintf(compteur_mort_char, "attemps : %d", nb_mort);
					compteur_mort = TTF_RenderText_Blended(police_ecriture_2, compteur_mort_char, blanc);
					SDL_Delay(500);
				}
				if(wall40_pos.x < 200)
				{
					return 4;
				}
	}
}
//-------------------------------------------------------LEVEL 5--------------------------------------------------------------------


int level_5(SDL_Window *fenetre, SDL_Surface *ecran, SDL_Surface *compteur_mort, SDL_Surface *char_1_0, SDL_Surface *char_2_0, SDL_Rect char_pos, SDL_Surface *fond_1_0,
				 SDL_Surface *fond_2_0,	SDL_Surface *wall_3_0, SDL_Surface *wall_3_1, SDL_Rect wall1_pos, SDL_Rect wall2_pos, SDL_Rect wall3_pos, SDL_Rect wall4_pos, 
					 SDL_Rect wall5_pos,SDL_Rect wall6_pos, SDL_Rect wall7_pos, SDL_Rect wall8_pos, SDL_Rect wall9_pos,
					  SDL_Rect wall10_pos, SDL_Rect wall11_pos, SDL_Rect wall12_pos, SDL_Rect wall13_pos, 
					 SDL_Rect wall14_pos,SDL_Rect wall15_pos, SDL_Rect wall16_pos, SDL_Rect wall17_pos, SDL_Rect wall18_pos
					 , SDL_Rect wall19_pos, SDL_Rect wall20_pos,SDL_Rect wall21_pos, SDL_Rect wall22_pos, SDL_Rect wall23_pos, SDL_Rect wall24_pos, 
					 SDL_Rect wall25_pos,SDL_Rect wall26_pos, SDL_Rect wall27_pos, SDL_Rect wall28_pos, SDL_Rect wall29_pos,
					  SDL_Rect wall30_pos, SDL_Rect wall31_pos, SDL_Rect wall32_pos, SDL_Rect wall33_pos, 
					 SDL_Rect wall34_pos,SDL_Rect wall35_pos, SDL_Rect wall36_pos, SDL_Rect wall37_pos, SDL_Rect wall38_pos
					 , SDL_Rect wall39_pos, SDL_Rect wall40_pos)
{
	
				SDL_Color rouge = {255, 0, 0};
				SDL_Color blanc = {255, 255, 255};
				SDL_Color noir = {0, 0, 0};
			auto temps_precedent = 0, temps_actuel = 0, multiplicateur_vitesse = 0;
			TTF_Font *police_ecriture_1, *police_ecriture_2;
			police_ecriture_1 = TTF_OpenFont("src/ttf/Robot Crush.ttf", 25);
			police_ecriture_2 = TTF_OpenFont("src/ttf/Robot Crush.ttf", 50);
			char compteur_mort_char[50] = "";
			SDL_bool program_launched = SDL_TRUE;
			auto sens = 2;
			auto nb_mort = 0;
			SDL_Rect mort_compt_pos;
			mort_compt_pos.x = 20;
			mort_compt_pos.y = 10;
			wall1_pos.x = 888;
			wall1_pos.y = 350;
			wall2_pos.x = 888;
			wall2_pos.y = 350+150;
			wall3_pos.x = 888+300;
			wall3_pos.y = 350+75;
			wall4_pos.x = 888+500;
			wall4_pos.y = 350+150;
			wall5_pos.x = 888+500;
			wall5_pos.y = 350+150+150;
			wall6_pos.x = 888+300;
			wall6_pos.y = 350-75;
			wall7_pos.x = 888+300;
			wall7_pos.y = 350-75-75;
			wall8_pos.x = 888;
			wall8_pos.y = 350+150+150;
			wall9_pos.x = 888+500+200;
			wall9_pos.y = 350+100;
			wall10_pos.x = 888+500+200;
			wall10_pos.y = 175;
			wall11_pos.x = 1888;
			wall11_pos.y = 350;
			wall12_pos.x = 1888;
			wall12_pos.y = 650;
			wall13_pos.x = 2100;
			wall13_pos.y = 500;
			wall14_pos.x = 2100;
			wall14_pos.y = 200;
			wall15_pos.x = 2100;
			wall15_pos.y = 650;
			wall16_pos.x = 2350;
			wall16_pos.y = 350;
			wall17_pos.x = 2350;
			wall17_pos.y = 500;
			wall18_pos.x = 2350;
			wall18_pos.y = 200;
			wall19_pos.x = 2700;
			wall19_pos.y = 500;
			wall20_pos.x = 2700;
			wall20_pos.y = 350;
			wall21_pos.x = 2700;
			wall21_pos.y = 650;
			wall22_pos.x = 3000;
			wall22_pos.y = 400;
			wall23_pos.x = 3000;
			wall23_pos.y = 350;
			wall24_pos.x = 3300;
			wall24_pos.y = 500;
			wall25_pos.x = 3300;
			wall25_pos.y = 350;
			wall26_pos.x = 3300;
			wall26_pos.y = 200;
			wall27_pos.x = 3500;
			wall27_pos.y = 200;
			wall28_pos.x = 3500;
			wall28_pos.y = 650;
			wall29_pos.x = 3500;
			wall29_pos.y = 350;
			wall30_pos.x = 3700;
			wall30_pos.y = 500;
			wall31_pos.x = 3700;
			wall31_pos.y = 650;
			wall32_pos.x = 3700;
			wall32_pos.y = 200;
			wall33_pos.x = 3900;
			wall33_pos.y = 350;
			wall34_pos.x = 3900;
			wall34_pos.y = 650;
			wall35_pos.x = 4100;
			wall35_pos.y = 500;
			wall36_pos.x = 4100;
			wall36_pos.y = 200;
			wall37_pos.x = 4300;
			wall37_pos.y = 350;
			wall38_pos.x = 4300;
			wall38_pos.y = 650;
			wall39_pos.x = 4500;
			wall39_pos.y = 200;
			wall40_pos.x = 4500;
			wall40_pos.y = 500;
			
			sprintf(compteur_mort_char, "attemps : %d", nb_mort);
			compteur_mort = TTF_RenderText_Blended(police_ecriture_2, compteur_mort_char, blanc);
		while(program_launched)
	{

			SDL_Event event;
		while(SDL_PollEvent(&event))
		{
			switch(event.type)
			{

				case SDL_QUIT:
					program_launched = SDL_FALSE;
					break;
					
				case SDL_MOUSEBUTTONUP:
						sens = 2;
						animation_sens_2(fenetre, ecran, compteur_mort,mort_compt_pos,char_2_0, char_pos, fond_2_0,wall_3_1,wall1_pos,wall2_pos,wall3_pos,wall4_pos,wall5_pos,wall6_pos,wall7_pos, wall8_pos, wall9_pos,
									 wall10_pos,wall11_pos,wall12_pos,wall13_pos,wall14_pos,wall15_pos,wall16_pos, wall17_pos, wall18_pos,wall19_pos, wall20_pos,
									 wall21_pos,wall22_pos,wall23_pos,wall24_pos,wall25_pos,wall26_pos,wall27_pos,wall28_pos,wall29_pos,wall30_pos, wall31_pos,wall32_pos,wall33_pos,wall34_pos,
									 wall35_pos,wall36_pos,wall37_pos,wall38_pos,wall39_pos,wall40_pos);
						multiplicateur_vitesse = 0;
						
					
					continue;
					
				case SDL_MOUSEBUTTONDOWN:
					sens = 1;
					animation_sens_1(fenetre, ecran,compteur_mort,mort_compt_pos, char_1_0, char_pos, fond_1_0,wall_3_0,wall1_pos,wall2_pos,wall3_pos,wall4_pos,wall5_pos,wall6_pos,wall7_pos, wall8_pos, wall9_pos,
									 wall10_pos,wall11_pos,wall12_pos,wall13_pos,wall14_pos,wall15_pos,wall16_pos, wall17_pos, wall18_pos,wall19_pos, wall20_pos,
									 wall21_pos,wall22_pos,wall23_pos,wall24_pos,wall25_pos,wall26_pos,wall27_pos,wall28_pos,wall29_pos,wall30_pos, wall31_pos,wall32_pos,wall33_pos,wall34_pos,
									 wall35_pos,wall36_pos,wall37_pos,wall38_pos,wall39_pos,wall40_pos);
					multiplicateur_vitesse = 0;
					continue;
					
					case SDL_KEYUP:
								
				switch(event.key.keysym.sym)
				{
					case SDLK_SPACE:
						sens = 2;
						animation_sens_2(fenetre, ecran, compteur_mort,mort_compt_pos,char_2_0, char_pos, fond_2_0,wall_3_1,wall1_pos,wall2_pos,wall3_pos,wall4_pos,wall5_pos,wall6_pos,wall7_pos, wall8_pos, wall9_pos,
									 wall10_pos,wall11_pos,wall12_pos,wall13_pos,wall14_pos,wall15_pos,wall16_pos, wall17_pos, wall18_pos,wall19_pos, wall20_pos,
									 wall21_pos,wall22_pos,wall23_pos,wall24_pos,wall25_pos,wall26_pos,wall27_pos,wall28_pos,wall29_pos,wall30_pos, wall31_pos,wall32_pos,wall33_pos,wall34_pos,
									 wall35_pos,wall36_pos,wall37_pos,wall38_pos,wall39_pos,wall40_pos);
						multiplicateur_vitesse = 0;
						
					
					default:
						continue;
				}
				continue;
				
			case SDL_KEYDOWN:
								
				switch(event.key.keysym.sym)
				{
					case SDLK_SPACE:
						sens = 1;
					animation_sens_1(fenetre, ecran,compteur_mort,mort_compt_pos, char_1_0, char_pos, fond_1_0,wall_3_0,wall1_pos,wall2_pos,wall3_pos,wall4_pos,wall5_pos,wall6_pos,wall7_pos, wall8_pos, wall9_pos,
									 wall10_pos,wall11_pos,wall12_pos,wall13_pos,wall14_pos,wall15_pos,wall16_pos, wall17_pos, wall18_pos,wall19_pos, wall20_pos,
									 wall21_pos,wall22_pos,wall23_pos,wall24_pos,wall25_pos,wall26_pos,wall27_pos,wall28_pos,wall29_pos,wall30_pos, wall31_pos,wall32_pos,wall33_pos,wall34_pos,
									 wall35_pos,wall36_pos,wall37_pos,wall38_pos,wall39_pos,wall40_pos);
					multiplicateur_vitesse = 0;
					
					default:
						continue;
				}
				continue;
					
				default:
					continue;
			}
			

		}
				if(sens == 1)
				{
					temps_actuel = SDL_GetTicks();
					if(temps_actuel - temps_precedent > 1)
					{
						char_pos.y -= 3,75;
						wall1_pos.x -= 2;
						wall2_pos.x -= 2;
						wall3_pos.x -= 2;
						wall4_pos.x -= 2;
						wall5_pos.x -= 2;
						wall6_pos.x -= 2;
						wall7_pos.x -= 2;
						wall8_pos.x -= 2;
						wall9_pos.x -= 2;
						wall10_pos.x -= 2;
						wall11_pos.x -= 2;
						wall12_pos.x -= 2;
						wall13_pos.x -= 2;
						wall14_pos.x -= 2;
						wall15_pos.x -= 2;
						wall16_pos.x -= 2;
						wall17_pos.x -= 2;
						wall18_pos.x -= 2;
						wall19_pos.x -= 2;
						wall20_pos.x -= 2;
						wall21_pos.x -= 2;
						wall22_pos.x -= 2;
						wall23_pos.x -= 2;
						wall24_pos.x -= 2;
						wall25_pos.x -= 2;
						wall26_pos.x -= 2;
						wall27_pos.x -= 2;
						wall28_pos.x -= 2;
						wall29_pos.x -= 2;
						wall30_pos.x -= 2;
						wall31_pos.x -= 2;
						wall32_pos.x -= 2;
						wall33_pos.x -= 2;
						wall34_pos.x -= 2;
						wall35_pos.x -= 2;
						wall36_pos.x -= 2;
						wall37_pos.x -= 2;
						wall38_pos.x -= 2;
						wall39_pos.x -= 2;
						wall40_pos.x -= 2;
						temps_precedent = temps_actuel;
						
					}
					multiplicateur_vitesse =+ 2;
					animation_sens_1(fenetre, ecran,compteur_mort,mort_compt_pos, char_1_0, char_pos, fond_1_0,wall_3_0,wall1_pos,wall2_pos,wall3_pos,wall4_pos,wall5_pos,wall6_pos,wall7_pos, wall8_pos, wall9_pos,
									 wall10_pos,wall11_pos,wall12_pos,wall13_pos,wall14_pos,wall15_pos,wall16_pos, wall17_pos, wall18_pos,wall19_pos, wall20_pos,
									 wall21_pos,wall22_pos,wall23_pos,wall24_pos,wall25_pos,wall26_pos,wall27_pos,wall28_pos,wall29_pos,wall30_pos, wall31_pos,wall32_pos,wall33_pos,wall34_pos,
									 wall35_pos,wall36_pos,wall37_pos,wall38_pos,wall39_pos,wall40_pos);
					temps_actuel = 0;
				}
				if(sens == 2)
				{
					temps_actuel = SDL_GetTicks();
					if(temps_actuel - temps_precedent > 1)
					{
						char_pos.y += 3,75;
						wall1_pos.x -= 2;
						wall2_pos.x -= 2;
						wall3_pos.x -= 2;
						wall4_pos.x -= 2;
						wall5_pos.x -= 2;
						wall6_pos.x -= 2;
						wall7_pos.x -= 2;
						wall8_pos.x -= 2;
						wall9_pos.x -= 2;
						wall10_pos.x -= 2;
						wall11_pos.x -= 2;
						wall12_pos.x -= 2;
						wall13_pos.x -= 2;
						wall14_pos.x -= 2;
						wall15_pos.x -= 2;
						wall16_pos.x -= 2;
						wall17_pos.x -= 2;
						wall18_pos.x -= 2;
						wall19_pos.x -= 2;
						wall20_pos.x -= 2;
						wall21_pos.x -= 2;
						wall22_pos.x -= 2;
						wall23_pos.x -= 2;
						wall24_pos.x -= 2;
						wall25_pos.x -= 2;
						wall26_pos.x -= 2;
						wall27_pos.x -= 2;
						wall28_pos.x -= 2;
						wall29_pos.x -= 2;
						wall30_pos.x -= 2;
						wall31_pos.x -= 2;
						wall32_pos.x -= 2;
						wall33_pos.x -= 2;
						wall34_pos.x -= 2;
						wall35_pos.x -= 2;
						wall36_pos.x -= 2;
						wall37_pos.x -= 2;
						wall38_pos.x -= 2;
						wall39_pos.x -= 2;
						wall40_pos.x -= 2;
						temps_precedent = temps_actuel;
						
					}
					multiplicateur_vitesse =+ 2;
					animation_sens_2(fenetre, ecran,compteur_mort,mort_compt_pos, char_2_0, char_pos, fond_2_0,wall_3_1,wall1_pos,wall2_pos,wall3_pos,wall4_pos,wall5_pos,wall6_pos,wall7_pos, wall8_pos, wall9_pos,
									 wall10_pos,wall11_pos,wall12_pos,wall13_pos,wall14_pos,wall15_pos,wall16_pos, wall17_pos, wall18_pos,wall19_pos, wall20_pos,
									 wall21_pos,wall22_pos,wall23_pos,wall24_pos,wall25_pos,wall26_pos,wall27_pos,wall28_pos,wall29_pos,wall30_pos, wall31_pos,wall32_pos,wall33_pos,wall34_pos,
									 wall35_pos,wall36_pos,wall37_pos,wall38_pos,wall39_pos,wall40_pos);
					temps_actuel = 0;
				}
				if(char_pos.y < 130 || char_pos.y > 870 - 75 ||
				 char_pos.x + 50 > wall1_pos.x && char_pos.x + 20 < wall1_pos.x + 50 && char_pos.y + 50 > wall1_pos.y && char_pos.y + 20 < wall1_pos.y + 150||
				 char_pos.x + 50 > wall2_pos.x && char_pos.x + 20 < wall2_pos.x + 50 && char_pos.y + 50 > wall2_pos.y && char_pos.y + 20 < wall2_pos.y + 150||
				 char_pos.x + 50 > wall3_pos.x && char_pos.x + 20 < wall3_pos.x + 50 && char_pos.y + 50 > wall3_pos.y && char_pos.y + 20 < wall3_pos.y + 150||
				 char_pos.x + 50 > wall4_pos.x && char_pos.x + 20 < wall4_pos.x + 50 && char_pos.y + 50 > wall4_pos.y && char_pos.y + 20 < wall4_pos.y + 150||
				 char_pos.x + 50 > wall5_pos.x && char_pos.x + 20 < wall5_pos.x + 50 && char_pos.y + 50 > wall5_pos.y && char_pos.y + 20 < wall5_pos.y + 150||
				 char_pos.x + 50 > wall6_pos.x && char_pos.x + 20 < wall6_pos.x + 50 && char_pos.y + 50 > wall6_pos.y && char_pos.y + 20 < wall6_pos.y + 150||
				 char_pos.x + 50 > wall7_pos.x && char_pos.x + 20 < wall7_pos.x + 50 && char_pos.y + 50 > wall7_pos.y && char_pos.y + 20 < wall7_pos.y + 150||
				 char_pos.x + 50 > wall8_pos.x && char_pos.x + 20 < wall8_pos.x + 50 && char_pos.y + 50 > wall8_pos.y && char_pos.y + 20 < wall8_pos.y + 150||
				 char_pos.x + 50 > wall9_pos.x && char_pos.x + 20 < wall9_pos.x + 50 && char_pos.y + 50 > wall9_pos.y && char_pos.y + 20 < wall9_pos.y + 150||
				 char_pos.x + 50 > wall10_pos.x && char_pos.x + 20 < wall10_pos.x + 50 && char_pos.y + 50 > wall10_pos.y && char_pos.y + 20 < wall10_pos.y + 150||
				 char_pos.x + 50 > wall11_pos.x && char_pos.x + 20 < wall11_pos.x + 50 && char_pos.y + 50 > wall11_pos.y && char_pos.y + 20 < wall11_pos.y + 150||
				 char_pos.x + 50 > wall12_pos.x && char_pos.x + 20 < wall12_pos.x + 50 && char_pos.y + 50 > wall12_pos.y && char_pos.y + 20 < wall12_pos.y + 150||
				 char_pos.x + 50 > wall13_pos.x && char_pos.x + 20 < wall13_pos.x + 50 && char_pos.y + 50 > wall13_pos.y && char_pos.y + 20 < wall13_pos.y + 150||
				 char_pos.x + 50 > wall14_pos.x && char_pos.x + 20 < wall14_pos.x + 50 && char_pos.y + 50 > wall14_pos.y && char_pos.y + 20 < wall14_pos.y + 150||
				 char_pos.x + 50 > wall15_pos.x && char_pos.x + 20 < wall15_pos.x + 50 && char_pos.y + 50 > wall15_pos.y && char_pos.y + 20 < wall15_pos.y + 150||
				 char_pos.x + 50 > wall16_pos.x && char_pos.x + 20 < wall16_pos.x + 50 && char_pos.y + 50 > wall16_pos.y && char_pos.y + 20 < wall16_pos.y + 150||
				 char_pos.x + 50 > wall17_pos.x && char_pos.x + 20 < wall17_pos.x + 50 && char_pos.y + 50 > wall17_pos.y && char_pos.y + 20 < wall17_pos.y + 150||
				 char_pos.x + 50 > wall18_pos.x && char_pos.x + 20 < wall18_pos.x + 50 && char_pos.y + 50 > wall18_pos.y && char_pos.y + 20 < wall18_pos.y + 150||
				 char_pos.x + 50 > wall19_pos.x && char_pos.x + 20 < wall19_pos.x + 50 && char_pos.y + 50 > wall19_pos.y && char_pos.y + 20 < wall19_pos.y + 150||
				 char_pos.x + 50 > wall20_pos.x && char_pos.x + 20 < wall20_pos.x + 50 && char_pos.y + 50 > wall20_pos.y && char_pos.y + 20 < wall20_pos.y + 150||
				 char_pos.x + 50 > wall21_pos.x && char_pos.x + 20 < wall21_pos.x + 50 && char_pos.y + 50 > wall21_pos.y && char_pos.y + 20 < wall21_pos.y + 150||
				 char_pos.x + 50 > wall22_pos.x && char_pos.x + 20 < wall22_pos.x + 50 && char_pos.y + 50 > wall22_pos.y && char_pos.y + 20 < wall22_pos.y + 150||
				 char_pos.x + 50 > wall23_pos.x && char_pos.x + 20 < wall23_pos.x + 50 && char_pos.y + 50 > wall23_pos.y && char_pos.y + 20 < wall23_pos.y + 150||
				 char_pos.x + 50 > wall24_pos.x && char_pos.x + 20 < wall24_pos.x + 50 && char_pos.y + 50 > wall24_pos.y && char_pos.y + 20 < wall24_pos.y + 150||
				 char_pos.x + 50 > wall25_pos.x && char_pos.x + 20 < wall25_pos.x + 50 && char_pos.y + 50 > wall25_pos.y && char_pos.y + 20 < wall25_pos.y + 150||
				 char_pos.x + 50 > wall26_pos.x && char_pos.x + 20 < wall26_pos.x + 50 && char_pos.y + 50 > wall26_pos.y && char_pos.y + 20 < wall26_pos.y + 150||
				 char_pos.x + 50 > wall27_pos.x && char_pos.x + 20 < wall27_pos.x + 50 && char_pos.y + 50 > wall27_pos.y && char_pos.y + 20 < wall27_pos.y + 150||
				 char_pos.x + 50 > wall28_pos.x && char_pos.x + 20 < wall28_pos.x + 50 && char_pos.y + 50 > wall28_pos.y && char_pos.y + 20 < wall28_pos.y + 150||
				 char_pos.x + 50 > wall29_pos.x && char_pos.x + 20 < wall29_pos.x + 50 && char_pos.y + 50 > wall29_pos.y && char_pos.y + 20 < wall29_pos.y + 150||
				 char_pos.x + 50 > wall30_pos.x && char_pos.x + 20 < wall30_pos.x + 50 && char_pos.y + 50 > wall30_pos.y && char_pos.y + 20 < wall30_pos.y + 150||
				 char_pos.x + 50 > wall31_pos.x && char_pos.x + 20 < wall31_pos.x + 50 && char_pos.y + 50 > wall31_pos.y && char_pos.y + 20 < wall31_pos.y + 150||
				 char_pos.x + 50 > wall32_pos.x && char_pos.x + 20 < wall32_pos.x + 50 && char_pos.y + 50 > wall32_pos.y && char_pos.y + 20 < wall32_pos.y + 150||
				 char_pos.x + 50 > wall33_pos.x && char_pos.x + 20 < wall33_pos.x + 50 && char_pos.y + 50 > wall33_pos.y && char_pos.y + 20 < wall33_pos.y + 150||
				 char_pos.x + 50 > wall34_pos.x && char_pos.x + 20 < wall34_pos.x + 50 && char_pos.y + 50 > wall34_pos.y && char_pos.y + 20 < wall34_pos.y + 150||
				 char_pos.x + 50 > wall35_pos.x && char_pos.x + 20 < wall35_pos.x + 50 && char_pos.y + 50 > wall35_pos.y && char_pos.y + 20 < wall35_pos.y + 150||
				 char_pos.x + 50 > wall36_pos.x && char_pos.x + 20 < wall36_pos.x + 50 && char_pos.y + 50 > wall36_pos.y && char_pos.y + 20 < wall36_pos.y + 150||
				 char_pos.x + 50 > wall37_pos.x && char_pos.x + 20 < wall37_pos.x + 50 && char_pos.y + 50 > wall37_pos.y && char_pos.y + 20 < wall37_pos.y + 150||
				 char_pos.x + 50 > wall38_pos.x && char_pos.x + 20 < wall38_pos.x + 50 && char_pos.y + 50 > wall38_pos.y && char_pos.y + 20 < wall38_pos.y + 150||
				 char_pos.x + 50 > wall39_pos.x && char_pos.x + 20 < wall39_pos.x + 50 && char_pos.y + 50 > wall39_pos.y && char_pos.y + 20 < wall39_pos.y + 150||
				 char_pos.x + 50 > wall40_pos.x && char_pos.x + 20 < wall40_pos.x + 50 && char_pos.y + 50 > wall40_pos.y && char_pos.y + 20 < wall40_pos.y + 150)
				{
					nb_mort ++;
					char_pos.y = 425;
					wall1_pos.x = 888;
					wall2_pos.x = 888;
					wall3_pos.x = 888+300;
					wall4_pos.x = 888+500;
					wall5_pos.x = 888+500;
					wall6_pos.x = 888+300;
					wall7_pos.x = 888+300;
					wall8_pos.x = 888;
					wall9_pos.x = 888+500+200;
					wall10_pos.x = 888+500+200;
					wall11_pos.x = 1888;
					wall12_pos.x = 1888;
					wall13_pos.x = 2100;
					wall14_pos.x = 2100;
					wall15_pos.x = 2100;
					wall16_pos.x = 2350;
					wall17_pos.x = 2350;
					wall18_pos.x = 2350;
					wall19_pos.x = 2700;
					wall20_pos.x = 2700;
					wall21_pos.x = 2700;
					wall22_pos.x = 3000;
					wall23_pos.x = 3000;
					wall24_pos.x = 3300;
					wall25_pos.x = 3300;
					wall26_pos.x = 3300;
					wall27_pos.x = 3500;
					wall28_pos.x = 3500;
					wall29_pos.x = 3500;
					wall30_pos.x = 3700;
					wall31_pos.x = 3700;
					wall32_pos.x = 3700;
					wall33_pos.x = 3900;
					wall34_pos.x = 3900;
					wall35_pos.x = 4100;
					wall36_pos.x = 4100;
					wall37_pos.x = 4300;
					wall38_pos.x = 4300;
					wall39_pos.x = 4500;
					wall40_pos.x = 4500;
					sprintf(compteur_mort_char, "attemps : %d", nb_mort);
					compteur_mort = TTF_RenderText_Blended(police_ecriture_2, compteur_mort_char, blanc);
					SDL_Delay(500);
				}
				if(wall40_pos.x < 200)
				{
					return 5;
				}
	}
}
//---------------------------------------------------------------LEVEL 6---------------------------------------------------------------------


int level_6(SDL_Window *fenetre, SDL_Surface *ecran, SDL_Surface *compteur_mort, SDL_Surface *char_1_0, SDL_Surface *char_2_0, SDL_Rect char_pos, SDL_Surface *fond_1_0,
				 SDL_Surface *fond_2_0,	SDL_Surface *wall_3_0, SDL_Surface *wall_3_1, SDL_Rect wall1_pos, SDL_Rect wall2_pos, SDL_Rect wall3_pos, SDL_Rect wall4_pos, 
					 SDL_Rect wall5_pos,SDL_Rect wall6_pos, SDL_Rect wall7_pos, SDL_Rect wall8_pos, SDL_Rect wall9_pos,
					  SDL_Rect wall10_pos, SDL_Rect wall11_pos, SDL_Rect wall12_pos, SDL_Rect wall13_pos, 
					 SDL_Rect wall14_pos,SDL_Rect wall15_pos, SDL_Rect wall16_pos, SDL_Rect wall17_pos, SDL_Rect wall18_pos
					 , SDL_Rect wall19_pos, SDL_Rect wall20_pos,SDL_Rect wall21_pos, SDL_Rect wall22_pos, SDL_Rect wall23_pos, SDL_Rect wall24_pos, 
					 SDL_Rect wall25_pos,SDL_Rect wall26_pos, SDL_Rect wall27_pos, SDL_Rect wall28_pos, SDL_Rect wall29_pos,
					  SDL_Rect wall30_pos, SDL_Rect wall31_pos, SDL_Rect wall32_pos, SDL_Rect wall33_pos, 
					 SDL_Rect wall34_pos,SDL_Rect wall35_pos, SDL_Rect wall36_pos, SDL_Rect wall37_pos, SDL_Rect wall38_pos
					 , SDL_Rect wall39_pos, SDL_Rect wall40_pos)
{
	
			Mix_Music *musique;
				SDL_Color rouge = {255, 0, 0};
				SDL_Color blanc = {255, 255, 255};
				SDL_Color noir = {0, 0, 0};
				musique = Mix_LoadMUS("src/audio/Music.mp3");
			auto temps_precedent = 0, temps_actuel = 0, multiplicateur_vitesse = 0;
			TTF_Font *police_ecriture_1, *police_ecriture_2;
			police_ecriture_1 = TTF_OpenFont("src/ttf/Robot Crush.ttf", 100);
			police_ecriture_2 = TTF_OpenFont("src/ttf/Robot Crush.ttf", 50);
			char compteur_mort_char[50] = "";
			SDL_Rect smiley_pos;
			SDL_bool program_launched = SDL_TRUE;
			auto sens = 2;
			auto nb_mort = 0;
			SDL_Rect mort_compt_pos;
			mort_compt_pos.x = 20;
			mort_compt_pos.y = 10;
			wall1_pos.x = 1000;
			wall1_pos.y = 350;
			wall2_pos.x = 1000;
			wall2_pos.y = 650;
			wall3_pos.x = 1200;
			wall3_pos.y = 200;
			wall4_pos.x = 1200;
			wall4_pos.y = 500;
			wall5_pos.x = 1500;
			wall5_pos.y = 650;
			wall6_pos.x = 1500;
			wall6_pos.y = 200;
			wall7_pos.x = 1650;
			wall7_pos.y = 500;
			wall8_pos.x = 1650;
			wall8_pos.y = 350;
			wall9_pos.x = 1900;
			wall9_pos.y = 200;
			wall10_pos.x = 1900;
			wall10_pos.y = 500;
			wall11_pos.x = 2100;
			wall11_pos.y = 350;
			wall12_pos.x = 2100;
			wall12_pos.y = 650;
			wall13_pos.x = 2300;
			wall13_pos.y = 500;
			wall14_pos.x = 2300;
			wall14_pos.y = 200;
			wall15_pos.x = 2500;
			wall15_pos.y = 350;
			wall16_pos.x = 2500;
			wall16_pos.y = 650;
			wall17_pos.x = 2900;//Montee
			wall17_pos.y = 350;
			wall18_pos.x = 2900;
			wall18_pos.y = 500;
			wall19_pos.x = 2900;
			wall19_pos.y = 650;
			wall20_pos.x = 3250;// descente
			wall20_pos.y = 200;
			wall21_pos.x = 3250;
			wall21_pos.y = 350;
			wall22_pos.x = 3250;
			wall22_pos.y = 500;
			wall23_pos.x = 3550;// Montee
			wall23_pos.y = 350;
			wall24_pos.x = 3550;
			wall24_pos.y = 500;
			wall25_pos.x = 3550;
			wall25_pos.y = 650;
			wall26_pos.x = 3700;
			wall26_pos.y = 200;
			wall27_pos.x = 3700;
			wall27_pos.y = 500;
			wall28_pos.x = 3900;
			wall28_pos.y = 350;
			wall29_pos.x = 3900;
			wall29_pos.y = 650;
			wall30_pos.x = 4100;
			wall30_pos.y = 500;
			wall31_pos.x = 4300;
			wall31_pos.y = 650;
			wall32_pos.x = 4300;
			wall32_pos.y = 350;
			wall33_pos.x = 4500;
			wall33_pos.y = 200;
			wall34_pos.x = 4500;
			wall34_pos.y = 500;
			wall35_pos.x = 4700;
			wall35_pos.y = 350;
			wall36_pos.x = 6500;
			wall36_pos.y = 200;
			wall37_pos.x = 6500;
			wall37_pos.y = 350;
			wall38_pos.x = 6500;
			wall38_pos.y = 500;
			wall39_pos.x = 6500;
			wall39_pos.y = 650;
			wall40_pos.x = 1350;
			wall40_pos.y = 350;
			smiley_pos.x = 6000;
			smiley_pos.x = 200;
			Mix_PlayMusic(musique, -1);
			sprintf(compteur_mort_char, "attemps : %d", nb_mort);
			compteur_mort = TTF_RenderText_Blended(police_ecriture_2, compteur_mort_char, blanc);
		while(program_launched)
	{

			SDL_Event event;
		while(SDL_PollEvent(&event))
		{
			switch(event.type)
			{

					
				case SDL_QUIT:
					program_launched = SDL_FALSE;
					break;
					
				case SDL_MOUSEBUTTONUP:
						sens = 2;
						animation_sens_2(fenetre, ecran, compteur_mort,mort_compt_pos,char_2_0, char_pos, fond_2_0,wall_3_1,wall1_pos,wall2_pos,wall3_pos,wall4_pos,wall5_pos,wall6_pos,wall7_pos, wall8_pos, wall9_pos,
									 wall10_pos,wall11_pos,wall12_pos,wall13_pos,wall14_pos,wall15_pos,wall16_pos, wall17_pos, wall18_pos,wall19_pos, wall20_pos,
									 wall21_pos,wall22_pos,wall23_pos,wall24_pos,wall25_pos,wall26_pos,wall27_pos,wall28_pos,wall29_pos,wall30_pos, wall31_pos,wall32_pos,wall33_pos,wall34_pos,
									 wall35_pos,wall36_pos,wall37_pos,wall38_pos,wall39_pos,wall40_pos);
						multiplicateur_vitesse = 0;
						
					
					continue;
					
				case SDL_MOUSEBUTTONDOWN:
					sens = 1;
					animation_sens_1(fenetre, ecran,compteur_mort,mort_compt_pos, char_1_0, char_pos, fond_1_0,wall_3_0,wall1_pos,wall2_pos,wall3_pos,wall4_pos,wall5_pos,wall6_pos,wall7_pos, wall8_pos, wall9_pos,
									 wall10_pos,wall11_pos,wall12_pos,wall13_pos,wall14_pos,wall15_pos,wall16_pos, wall17_pos, wall18_pos,wall19_pos, wall20_pos,
									 wall21_pos,wall22_pos,wall23_pos,wall24_pos,wall25_pos,wall26_pos,wall27_pos,wall28_pos,wall29_pos,wall30_pos, wall31_pos,wall32_pos,wall33_pos,wall34_pos,
									 wall35_pos,wall36_pos,wall37_pos,wall38_pos,wall39_pos,wall40_pos);
					multiplicateur_vitesse = 0;
					continue;

					case SDL_KEYUP:
								
				switch(event.key.keysym.sym)
				{
					case SDLK_SPACE:
						sens = 2;
						animation_sens_2(fenetre, ecran, compteur_mort,mort_compt_pos,char_2_0, char_pos, fond_2_0,wall_3_1,wall1_pos,wall2_pos,wall3_pos,wall4_pos,wall5_pos,wall6_pos,wall7_pos, wall8_pos, wall9_pos,
									 wall10_pos,wall11_pos,wall12_pos,wall13_pos,wall14_pos,wall15_pos,wall16_pos, wall17_pos, wall18_pos,wall19_pos, wall20_pos,
									 wall21_pos,wall22_pos,wall23_pos,wall24_pos,wall25_pos,wall26_pos,wall27_pos,wall28_pos,wall29_pos,wall30_pos, wall31_pos,wall32_pos,wall33_pos,wall34_pos,
									 wall35_pos,wall36_pos,wall37_pos,wall38_pos,wall39_pos,wall40_pos);
						multiplicateur_vitesse = 0;
						
					
					default:
						continue;
				}
				continue;
				
			case SDL_KEYDOWN:
								
				switch(event.key.keysym.sym)
				{
					case SDLK_SPACE:
						sens = 1;
					animation_sens_1(fenetre, ecran,compteur_mort,mort_compt_pos, char_1_0, char_pos, fond_1_0,wall_3_0,wall1_pos,wall2_pos,wall3_pos,wall4_pos,wall5_pos,wall6_pos,wall7_pos, wall8_pos, wall9_pos,
									 wall10_pos,wall11_pos,wall12_pos,wall13_pos,wall14_pos,wall15_pos,wall16_pos, wall17_pos, wall18_pos,wall19_pos, wall20_pos,
									 wall21_pos,wall22_pos,wall23_pos,wall24_pos,wall25_pos,wall26_pos,wall27_pos,wall28_pos,wall29_pos,wall30_pos, wall31_pos,wall32_pos,wall33_pos,wall34_pos,
									 wall35_pos,wall36_pos,wall37_pos,wall38_pos,wall39_pos,wall40_pos);
					multiplicateur_vitesse = 0;
					
					default:
						continue;
				}
				continue;
					
				default:
					continue;
			}
			

		}
				if(sens == 1)
				{
					temps_actuel = SDL_GetTicks();
					if(temps_actuel - temps_precedent > 1)
					{
						char_pos.y -= 3;
						wall1_pos.x -= 2;
						wall2_pos.x -= 2;
						wall3_pos.x -= 2;
						wall4_pos.x -= 2;
						wall5_pos.x -= 2;
						wall6_pos.x -= 2;
						wall7_pos.x -= 2;
						wall8_pos.x -= 2;
						wall9_pos.x -= 2;
						wall10_pos.x -= 2;
						wall11_pos.x -= 2;
						wall12_pos.x -= 2;
						wall13_pos.x -= 2;
						wall14_pos.x -= 2;
						wall15_pos.x -= 2;
						wall16_pos.x -= 2;
						wall17_pos.x -= 2;
						wall18_pos.x -= 2;
						wall19_pos.x -= 2;
						wall20_pos.x -= 2;
						wall21_pos.x -= 2;
						wall22_pos.x -= 2;
						wall23_pos.x -= 2;
						wall24_pos.x -= 2;
						wall25_pos.x -= 2;
						wall26_pos.x -= 2;
						wall27_pos.x -= 2;
						wall28_pos.x -= 2;
						wall29_pos.x -= 2;
						wall30_pos.x -= 2;
						wall31_pos.x -= 2;
						wall32_pos.x -= 2;
						wall33_pos.x -= 2;
						wall34_pos.x -= 2;
						wall35_pos.x -= 2;
						wall36_pos.x -= 2;
						wall37_pos.x -= 2;
						wall38_pos.x -= 2;
						wall39_pos.x -= 2;
						wall40_pos.x -= 2;
						smiley_pos.x -= 2;
						temps_precedent = temps_actuel;
						
					}
					multiplicateur_vitesse =+ 2;
					animation_sens_1(fenetre, ecran,compteur_mort,mort_compt_pos, char_1_0, char_pos, fond_1_0,wall_3_0,wall1_pos,wall2_pos,wall3_pos,wall4_pos,wall5_pos,wall6_pos,wall7_pos, wall8_pos, wall9_pos,
									 wall10_pos,wall11_pos,wall12_pos,wall13_pos,wall14_pos,wall15_pos,wall16_pos, wall17_pos, wall18_pos,wall19_pos, wall20_pos,
									 wall21_pos,wall22_pos,wall23_pos,wall24_pos,wall25_pos,wall26_pos,wall27_pos,wall28_pos,wall29_pos,wall30_pos, wall31_pos,wall32_pos,wall33_pos,wall34_pos,
									 wall35_pos,wall36_pos,wall37_pos,wall38_pos,wall39_pos,wall40_pos);
					temps_actuel = 0;
				}
				if(sens == 2)
				{
					temps_actuel = SDL_GetTicks();
					if(temps_actuel - temps_precedent > 1)
					{
						char_pos.y += 3;
						wall1_pos.x -= 2;
						wall2_pos.x -= 2;
						wall3_pos.x -= 2;
						wall4_pos.x -= 2;
						wall5_pos.x -= 2;
						wall6_pos.x -= 2;
						wall7_pos.x -= 2;
						wall8_pos.x -= 2;
						wall9_pos.x -= 2;
						wall10_pos.x -= 2;
						wall11_pos.x -= 2;
						wall12_pos.x -= 2;
						wall13_pos.x -= 2;
						wall14_pos.x -= 2;
						wall15_pos.x -= 2;
						wall16_pos.x -= 2;
						wall17_pos.x -= 2;
						wall18_pos.x -= 2;
						wall19_pos.x -= 2;
						wall20_pos.x -= 2;
						wall21_pos.x -= 2;
						wall22_pos.x -= 2;
						wall23_pos.x -= 2;
						wall24_pos.x -= 2;
						wall25_pos.x -= 2;
						wall26_pos.x -= 2;
						wall27_pos.x -= 2;
						wall28_pos.x -= 2;
						wall29_pos.x -= 2;
						wall30_pos.x -= 2;
						wall31_pos.x -= 2;
						wall32_pos.x -= 2;
						wall33_pos.x -= 2;
						wall34_pos.x -= 2;
						wall35_pos.x -= 2;
						wall36_pos.x -= 2;
						wall37_pos.x -= 2;
						wall38_pos.x -= 2;
						wall39_pos.x -= 2;
						wall40_pos.x -= 2;
						smiley_pos.x -= 2;
						temps_precedent = temps_actuel;
						
					}
					multiplicateur_vitesse =+ 2;
					animation_sens_2(fenetre, ecran,compteur_mort,mort_compt_pos, char_2_0, char_pos, fond_2_0,wall_3_1,wall1_pos,wall2_pos,wall3_pos,wall4_pos,wall5_pos,wall6_pos,wall7_pos, wall8_pos, wall9_pos,
									 wall10_pos,wall11_pos,wall12_pos,wall13_pos,wall14_pos,wall15_pos,wall16_pos, wall17_pos, wall18_pos,wall19_pos, wall20_pos,
									 wall21_pos,wall22_pos,wall23_pos,wall24_pos,wall25_pos,wall26_pos,wall27_pos,wall28_pos,wall29_pos,wall30_pos, wall31_pos,wall32_pos,wall33_pos,wall34_pos,
									 wall35_pos,wall36_pos,wall37_pos,wall38_pos,wall39_pos,wall40_pos);
					temps_actuel = 0;
				}
				if(char_pos.y < 130 || char_pos.y > 870 - 75 ||
				 char_pos.x + 50 > wall1_pos.x && char_pos.x + 20 < wall1_pos.x + 50 && char_pos.y + 50 > wall1_pos.y && char_pos.y + 20 < wall1_pos.y + 150||
				 char_pos.x + 50 > wall2_pos.x && char_pos.x + 20 < wall2_pos.x + 50 && char_pos.y + 50 > wall2_pos.y && char_pos.y + 20 < wall2_pos.y + 150||
				 char_pos.x + 50 > wall3_pos.x && char_pos.x + 20 < wall3_pos.x + 50 && char_pos.y + 50 > wall3_pos.y && char_pos.y + 20 < wall3_pos.y + 150||
				 char_pos.x + 50 > wall4_pos.x && char_pos.x + 20 < wall4_pos.x + 50 && char_pos.y + 50 > wall4_pos.y && char_pos.y + 20 < wall4_pos.y + 150||
				 char_pos.x + 50 > wall5_pos.x && char_pos.x + 20 < wall5_pos.x + 50 && char_pos.y + 50 > wall5_pos.y && char_pos.y + 20 < wall5_pos.y + 150||
				 char_pos.x + 50 > wall6_pos.x && char_pos.x + 20 < wall6_pos.x + 50 && char_pos.y + 50 > wall6_pos.y && char_pos.y + 20 < wall6_pos.y + 150||
				 char_pos.x + 50 > wall7_pos.x && char_pos.x + 20 < wall7_pos.x + 50 && char_pos.y + 50 > wall7_pos.y && char_pos.y + 20 < wall7_pos.y + 150||
				 char_pos.x + 50 > wall8_pos.x && char_pos.x + 20 < wall8_pos.x + 50 && char_pos.y + 50 > wall8_pos.y && char_pos.y + 20 < wall8_pos.y + 150||
				 char_pos.x + 50 > wall9_pos.x && char_pos.x + 20 < wall9_pos.x + 50 && char_pos.y + 50 > wall9_pos.y && char_pos.y + 20 < wall9_pos.y + 150||
				 char_pos.x + 50 > wall10_pos.x && char_pos.x + 20 < wall10_pos.x + 50 && char_pos.y + 50 > wall10_pos.y && char_pos.y + 20 < wall10_pos.y + 150||
				 char_pos.x + 50 > wall11_pos.x && char_pos.x + 20 < wall11_pos.x + 50 && char_pos.y + 50 > wall11_pos.y && char_pos.y + 20 < wall11_pos.y + 150||
				 char_pos.x + 50 > wall12_pos.x && char_pos.x + 20 < wall12_pos.x + 50 && char_pos.y + 50 > wall12_pos.y && char_pos.y + 20 < wall12_pos.y + 150||
				 char_pos.x + 50 > wall13_pos.x && char_pos.x + 20 < wall13_pos.x + 50 && char_pos.y + 50 > wall13_pos.y && char_pos.y + 20 < wall13_pos.y + 150||
				 char_pos.x + 50 > wall14_pos.x && char_pos.x + 20 < wall14_pos.x + 50 && char_pos.y + 50 > wall14_pos.y && char_pos.y + 20 < wall14_pos.y + 150||
				 char_pos.x + 50 > wall15_pos.x && char_pos.x + 20 < wall15_pos.x + 50 && char_pos.y + 50 > wall15_pos.y && char_pos.y + 20 < wall15_pos.y + 150||
				 char_pos.x + 50 > wall16_pos.x && char_pos.x + 20 < wall16_pos.x + 50 && char_pos.y + 50 > wall16_pos.y && char_pos.y + 20 < wall16_pos.y + 150||
				 char_pos.x + 50 > wall17_pos.x && char_pos.x + 20 < wall17_pos.x + 50 && char_pos.y + 50 > wall17_pos.y && char_pos.y + 20 < wall17_pos.y + 150||
				 char_pos.x + 50 > wall18_pos.x && char_pos.x + 20 < wall18_pos.x + 50 && char_pos.y + 50 > wall18_pos.y && char_pos.y + 20 < wall18_pos.y + 150||
				 char_pos.x + 50 > wall19_pos.x && char_pos.x + 20 < wall19_pos.x + 50 && char_pos.y + 50 > wall19_pos.y && char_pos.y + 20 < wall19_pos.y + 150||
				 char_pos.x + 50 > wall20_pos.x && char_pos.x + 20 < wall20_pos.x + 50 && char_pos.y + 50 > wall20_pos.y && char_pos.y + 20 < wall20_pos.y + 150||
				 char_pos.x + 50 > wall21_pos.x && char_pos.x + 20 < wall21_pos.x + 50 && char_pos.y + 50 > wall21_pos.y && char_pos.y + 20 < wall21_pos.y + 150||
				 char_pos.x + 50 > wall22_pos.x && char_pos.x + 20 < wall22_pos.x + 50 && char_pos.y + 50 > wall22_pos.y && char_pos.y + 20 < wall22_pos.y + 150||
				 char_pos.x + 50 > wall23_pos.x && char_pos.x + 20 < wall23_pos.x + 50 && char_pos.y + 50 > wall23_pos.y && char_pos.y + 20 < wall23_pos.y + 150||
				 char_pos.x + 50 > wall24_pos.x && char_pos.x + 20 < wall24_pos.x + 50 && char_pos.y + 50 > wall24_pos.y && char_pos.y + 20 < wall24_pos.y + 150||
				 char_pos.x + 50 > wall25_pos.x && char_pos.x + 20 < wall25_pos.x + 50 && char_pos.y + 50 > wall25_pos.y && char_pos.y + 20 < wall25_pos.y + 150||
				 char_pos.x + 50 > wall26_pos.x && char_pos.x + 20 < wall26_pos.x + 50 && char_pos.y + 50 > wall26_pos.y && char_pos.y + 20 < wall26_pos.y + 150||
				 char_pos.x + 50 > wall27_pos.x && char_pos.x + 20 < wall27_pos.x + 50 && char_pos.y + 50 > wall27_pos.y && char_pos.y + 20 < wall27_pos.y + 150||
				 char_pos.x + 50 > wall28_pos.x && char_pos.x + 20 < wall28_pos.x + 50 && char_pos.y + 50 > wall28_pos.y && char_pos.y + 20 < wall28_pos.y + 150||
				 char_pos.x + 50 > wall29_pos.x && char_pos.x + 20 < wall29_pos.x + 50 && char_pos.y + 50 > wall29_pos.y && char_pos.y + 20 < wall29_pos.y + 150||
				 char_pos.x + 50 > wall30_pos.x && char_pos.x + 20 < wall30_pos.x + 50 && char_pos.y + 50 > wall30_pos.y && char_pos.y + 20 < wall30_pos.y + 150||
				 char_pos.x + 50 > wall31_pos.x && char_pos.x + 20 < wall31_pos.x + 50 && char_pos.y + 50 > wall31_pos.y && char_pos.y + 20 < wall31_pos.y + 150||
				 char_pos.x + 50 > wall32_pos.x && char_pos.x + 20 < wall32_pos.x + 50 && char_pos.y + 50 > wall32_pos.y && char_pos.y + 20 < wall32_pos.y + 150||
				 char_pos.x + 50 > wall33_pos.x && char_pos.x + 20 < wall33_pos.x + 50 && char_pos.y + 50 > wall33_pos.y && char_pos.y + 20 < wall33_pos.y + 150||
				 char_pos.x + 50 > wall34_pos.x && char_pos.x + 20 < wall34_pos.x + 50 && char_pos.y + 50 > wall34_pos.y && char_pos.y + 20 < wall34_pos.y + 150||
				 char_pos.x + 50 > wall35_pos.x && char_pos.x + 20 < wall35_pos.x + 50 && char_pos.y + 50 > wall35_pos.y && char_pos.y + 20 < wall35_pos.y + 150||
				 char_pos.x + 50 > wall36_pos.x && char_pos.x + 20 < wall36_pos.x + 50 && char_pos.y + 50 > wall36_pos.y && char_pos.y + 20 < wall36_pos.y + 150||
				 char_pos.x + 50 > wall37_pos.x && char_pos.x + 20 < wall37_pos.x + 50 && char_pos.y + 50 > wall37_pos.y && char_pos.y + 20 < wall37_pos.y + 150||
				 char_pos.x + 50 > wall38_pos.x && char_pos.x + 20 < wall38_pos.x + 50 && char_pos.y + 50 > wall38_pos.y && char_pos.y + 20 < wall38_pos.y + 150||
				 char_pos.x + 50 > wall39_pos.x && char_pos.x + 20 < wall39_pos.x + 50 && char_pos.y + 50 > wall39_pos.y && char_pos.y + 20 < wall39_pos.y + 150||
				 char_pos.x + 50 > wall40_pos.x && char_pos.x + 20 < wall40_pos.x + 50 && char_pos.y + 50 > wall40_pos.y && char_pos.y + 20 < wall40_pos.y + 150)
				{
					nb_mort ++;
					char_pos.y = 425;
					wall1_pos.x = 1000;
					wall1_pos.y = 350;
					wall2_pos.x = 1000;
					wall2_pos.y = 650;
					wall3_pos.x = 1200;
					wall3_pos.y = 200;
					wall4_pos.x = 1200;
					wall4_pos.y = 500;
					wall5_pos.x = 1500;
					wall5_pos.y = 650;
					wall6_pos.x = 1500;
					wall6_pos.y = 200;
					wall7_pos.x = 1650;
					wall7_pos.y = 500;
					wall8_pos.x = 1650;
					wall8_pos.y = 350;
					wall9_pos.x = 1900;
					wall9_pos.y = 200;
					wall10_pos.x = 1900;
					wall10_pos.y = 500;
					wall11_pos.x = 2100;
					wall11_pos.y = 350;
					wall12_pos.x = 2100;
					wall12_pos.y = 650;
					wall13_pos.x = 2300;
					wall13_pos.y = 500;
					wall14_pos.x = 2300;
					wall14_pos.y = 200;
					wall15_pos.x = 2500;
					wall15_pos.y = 350;
					wall16_pos.x = 2500;
					wall16_pos.y = 650;
					wall17_pos.x = 2900;//Montee
					wall17_pos.y = 350;
					wall18_pos.x = 2900;
					wall18_pos.y = 500;
					wall19_pos.x = 2900;
					wall19_pos.y = 650;
					wall20_pos.x = 3250;// descente
					wall20_pos.y = 200;
					wall21_pos.x = 3250;
					wall21_pos.y = 350;
					wall22_pos.x = 3250;
					wall22_pos.y = 500;
					wall23_pos.x = 3550;// Montee
					wall23_pos.y = 350;
					wall24_pos.x = 3550;
					wall24_pos.y = 500;
					wall25_pos.x = 3550;
					wall25_pos.y = 650;
					wall26_pos.x = 3700;
					wall26_pos.y = 200;
					wall27_pos.x = 3700;
					wall27_pos.y = 500;
					wall28_pos.x = 3900;
					wall28_pos.y = 350;
					wall29_pos.x = 3900;
					wall29_pos.y = 650;
					wall30_pos.x = 4100;
					wall30_pos.y = 500;
					wall31_pos.x = 4300;
					wall31_pos.y = 650;
					wall32_pos.x = 4300;
					wall32_pos.y = 350;
					wall33_pos.x = 4500;
					wall33_pos.y = 200;
					wall34_pos.x = 4500;
					wall34_pos.y = 500;
					wall35_pos.x = 4700;
					wall35_pos.y = 350;
					wall36_pos.x = 6500;
					wall36_pos.y = 200;
					wall37_pos.x = 6500;
					wall37_pos.y = 350;
					wall38_pos.x = 6500;
					wall38_pos.y = 500;
					wall39_pos.x = 6500;
					wall39_pos.y = 650;
					wall40_pos.x = 1350;
					wall40_pos.y = 350;
					sprintf(compteur_mort_char, "attemps : %d", nb_mort);
					compteur_mort = TTF_RenderText_Blended(police_ecriture_2, compteur_mort_char, blanc);
					SDL_Delay(500);
				}
			if(wall39_pos.x < 800)
			{
				program_launched = SDL_FALSE;
				return 6;
			}
	}
}
