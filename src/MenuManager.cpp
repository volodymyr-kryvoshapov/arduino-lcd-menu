#include "MenuManager.hpp"

MenuManager::MenuManager() {
	std::shared_ptr<Menu> menu(new Menu("root menu")); // Menu* rootMenu = new Menu(name);
	rootMenu = menu;
	currentElement = rootMenu;
}
MenuManager::~MenuManager() {}

Menu& MenuManager::addMenu(const string& name) {
	return rootMenu->addMenu(name);
}

/*
 * Poll buttons and call draw(pressedButton) function of current element (any element derived from Node type)
 */
void MenuManager::draw() {
	std::string pressedButton = "enter";

	currentElement->draw(pressedButton);
}
