#include <iostream>
#include "MenuManager.hpp"

MenuManager menu("root menu");

int main() {
	menu.getRootMenu()

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

//	cout << "sizeof(menu): " << sizeof( menu.getMenu() ) << endl;
//	cout << "sizeof(children): " << sizeof( menu.getMenu().getChildren() ) << endl;
//	cout << "menuNodeNum: "<< menu.getMenu().getChildrenNum() << endl;
//	cout << "menuNodeNum: "<< menu.getMenu().getChildren()[1]->getChildrenNum() << endl;

	std::cout << "Hi Man! Welcome to the show!" << endl;

	return 0;
}
