#ifndef NPC_H
#define NPC_H

#include <iostream>
#include "Character.h"
#include "Player.h"

using namespace std;

class NPC : public Character
{
public:
	NPC();
	~NPC();
	void initialize();
	void update(Player * t_sprite);
	void draw(sf::RenderWindow* t_window);
	sf::Sprite returnSprite();
private:
	sf::Sprite m_nPCSprite;
	sf::Texture m_nPCTexture;
};
#endif