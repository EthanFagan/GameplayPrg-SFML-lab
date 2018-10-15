#include <NPC.h>

NPC::NPC()
{
	initialize();
};
NPC::~NPC(){};

void NPC::initialize()
{
	if (!m_nPCTexture.loadFromFile("alex.png"))
	{
		std::cout << "error loading texture" << std::endl;
	}
	m_nPCSprite.setTexture(m_nPCTexture);

	m_nPCSprite.setPosition(500, 250);
	m_nPCSprite.setScale(0.5f,0.5f);
}
void NPC::update(Player* t_sprite)
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space))
	{
		m_nPCSprite.move(sf::Vector2f(-4, 0));
	}
	if (m_nPCSprite.getGlobalBounds().intersects(t_sprite->returnSprite().getGlobalBounds()))
	{
		m_nPCSprite.setPosition(500, 250);
		t_sprite->returnSprite().setPosition(100, 250);
	}
}
void NPC::draw(sf::RenderWindow* t_window)
{
	t_window->draw(m_nPCSprite);
}

sf::Sprite NPC::returnSprite()
{
	return m_nPCSprite;
}
