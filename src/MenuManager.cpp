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

MenuManager& MenuManager::setDefaultScreen() {
	return *this;
}

MenuManager& MenuManager::setNavButtons(int, int, int, int, int, int) {
	return *this;
}

/*
 * 1. If pressed any menu button, and menu not active  - show menu.
 *  - call draw(pressedButton, this.isMenuActive);
 * 2. If no any activity (no button pressed) during 10sec expires - show user screen.
 * 3. Poll buttons menu buttons and if any button pressed - call draw(pressedButton) function of current element (any element derived from Node type)
 * 4. If press 'cancel' go back to parent menu or to 'defaultScreen'
 *
 */
void MenuManager::draw() {
	std::string pressedButton;

	//in this place must be mechanism which determine which button was pressed
	std::cout << "press menu button(up|down|left|right|cancel|enter): ";
	std::cin >> pressedButton;

	 if (pressedButton == "cancel") {
		 currentElement->clear();

//		 if (currentElement->parent == NULL) {
//			 showDefaultScreen();
//			 return;
//		 }

//		 currentElement = currentElement->parent;
	 }

	currentElement->draw(pressedButton);
}
