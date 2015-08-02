#include "MenuManager.hpp"

MenuManager::MenuManager(const std::string& name) {
	std::shared_ptr<Menu> menu(new Menu(name)); // Menu* rootMenu = new Menu(name); //
	rootMenu = menu;
}
MenuManager::~MenuManager() {}

Menu& MenuManager::getRootMenu() {
	return *rootMenu;
}

//Menu& MenuManager::getRootMenu() {
//	return *rootMenu;
//}
