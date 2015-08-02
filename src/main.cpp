#include <iostream>
#include "MenuManager.hpp"

using namespace std;

MenuManager menu;

int main() {
	char choice;

	menu
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

	do {
		menu.draw();

		cin >> choice;
		cout << "124" << endl;

		switch (choice) {
			case 'w':
				break;

			case 's':
				break;

			case 'a':
				break;

			case 'd':
				break;

			case 'q':
				break;

			case 'e':
				break;

			default:
				cout << '\a';
		}

	} while (choice != '4');

//	cout << "sizeof(menu): " << sizeof( menu.getMenu() ) << endl;
//	cout << "sizeof(children): " << sizeof( menu.getMenu().getChildren() ) << endl;
//	cout << "menuNodeNum: "<< menu.getMenu().getChildrenNum() << endl;
//	cout << "menuNodeNum: "<< menu.getMenu().getChildren()[1]->getChildrenNum() << endl;
//	splash screen

	std::cout << "Hi Man! Welcome to the show!" << endl;

	return 0;
}
