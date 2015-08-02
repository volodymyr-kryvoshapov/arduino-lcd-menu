#include "MenuManager.hpp"

MenuManager::MenuManager() {
	std::shared_ptr<Menu> menu(new Menu("root menu")); // Menu* rootMenu = new Menu(name);
	rootMenu = menu;
}
MenuManager::~MenuManager() {}

Menu& MenuManager::addMenu(const string& name) {
	return rootMenu->addMenu(name);
}

void MenuManager::draw() {
	rootMenu->draw();
}
