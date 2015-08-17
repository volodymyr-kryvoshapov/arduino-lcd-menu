#include <iostream>
#include "MenuManager.hpp"

// DEFINE ARDUINO PINS FOR THE NAVIGATION BUTTONS
#define UP_BUTTON_PIN       9
#define DOWN_BUTTON_PIN     10
#define LEFT_BUTTON_PIN     7
#define RIGHT_BUTTON_PIN    8
#define CONFIRM_BUTTON_PIN  12
#define CANCEL_BUTTON_PIN   11

MenuManager menu;

int main() {
	std::string exit;
	MenuManager::currentElement = std::shared_ptr();
	menu
	.setDefaultScreen()
	.setNavButtons(UP_BUTTON_PIN,DOWN_BUTTON_PIN,LEFT_BUTTON_PIN,RIGHT_BUTTON_PIN,CANCEL_BUTTON_PIN,CONFIRM_BUTTON_PIN)

	.addMenu("node 1")
		.addCustomElement("child 1.1")
		.addCustomElement("child 1.2")
		.addCustomElement("child 1.3")
	.done()

	.addMenu("node 2")
		.addCustomElement("child 2.1")

		.addMenu("node 2.2")
			.addCustomElement("child 2.2.1")
			.addCustomElement("child 2.2.2")
			.addCustomElement("child 2.2.3")
		.done()

		.addCustomElement("child 2.3")

		.addMenu("node 2.4")
			.addCustomElement("child 2.4.1")
			.addCustomElement("child 2.4.2")
			.addCustomElement("child 2.4.3")
		.done()

		.addCustomElement("child 2.5")
	.done()

	.addCustomElement("child 3")
	.addCustomElement("child 4");

	// main loop
	do {
		menu.draw();

		std::cout << "exit (y/n)?: ";
		std::cin >> exit;
	} while (exit != "y");

//	cout << "sizeof(menu): " << sizeof( menu.getMenu() ) << endl;
//	cout << "sizeof(children): " << sizeof( menu.getMenu().getChildren() ) << endl;
//	cout << "menuNodeNum: "<< menu.getMenu().getChildrenNum() << endl;
//	cout << "menuNodeNum: "<< menu.getMenu().getChildren()[1]->getChildrenNum() << endl;
//	splash screen

	std::cout << "Hi Man! Welcome to the show!" << endl;

	return 0;
}
