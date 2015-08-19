#include "MenuController.hpp"

MenuController::MenuController() {
	std::shared_ptr<Menu> menu(new Menu("root menu")); // Menu* rootMenu = new Menu(name);
	rootMenu = menu;
	currentElement = rootMenu;
}
MenuController::~MenuController() {}

Menu& MenuController::addMenu(const string& name) {
	return rootMenu->addMenu(name);
}

MenuController& MenuController::setDefaultScreen() {
	return *this;
}

MenuController& MenuController::setNavButtons(int, int, int, int, int, int) {
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
void MenuController::draw() {
	std::string pressedButton;

	//in this place must be mechanism which determine which button was pressed
	std::cout << "press menu button(up|down|left|right|cancel|enter): ";
	std::cin >> pressedButton;

	 if (pressedButton == "cancel") {
		 currentElement->clear();

		 if (!currentElement->hasParent()) {
			 showDefaultScreen();
			 return;
		 }

		 currentElement->MenuControllerSetCurrentElement();
	 }

	if (pressedButton == "enter") {
		// call currentElement->enter()
		// if we call enter function of menu element - open submenu or enter into the customElement
		// if we call enter function of customElement - open MenuController.showApproveDialog()
		// - if approved dialog == ok 		- call save() function of currentElement
		// - if approved dialog == cancel 	- call currentElement->draw(pressedButton);
	}

	currentElement->draw(pressedButton);
}

void MenuController::showDefaultScreen() {
	std::cout << "show default \n screen." << std::endl;
}
