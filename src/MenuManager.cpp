#include "MenuManager.hpp"

MenuManager::MenuManager() {
	// TODO Auto-generated constructor stub

}

MenuManager::~MenuManager() {
	// TODO Auto-generated destructor stub
}

Menu& MenuManager::addRootMenu(const string& name) {
	rootMenu = new Menu(name);
	return *rootMenu;
}

//Menu& MenuManager::getRootMenu() {
//	return *rootMenu;
//}
