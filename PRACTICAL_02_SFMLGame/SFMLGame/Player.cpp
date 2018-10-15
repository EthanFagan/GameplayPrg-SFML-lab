#include <Player.h>

Player::Player()
{
	initialize();
};
Player::~Player(){};

void Player::initialize()
{
	if (!m_playerTexture.loadFromFile("chun.png"))
	{
		std::cout << "error loading texture" << std::endl;
	}
	m_playerSprite.setTexture(m_playerTexture);
	m_playerSprite.setPosition(100, 250);
}
void Player::update()
{
	/*if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space))
	{
		m_playerSprite.move(sf::Vector2f(4, 0));
	}*/
}
void Player::draw(sf::RenderWindow* t_window)
{
	t_window->draw(m_playerSprite);
}

sf::Sprite Player::returnSprite()
{
	return m_playerSprite;
}
