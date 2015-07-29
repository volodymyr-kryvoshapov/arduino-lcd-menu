#include <iostream>
#include "MenuManager.hpp"

MenuManager menu;

int main() {
	menu.addRootMenu("root menu")

	.addMenu("node 1")
		.addCustomElement("child 1.1")
		.addCustomElement("child 1.2")
		.addCustomElement("child 1.3")
	.done();

//	.addNode("node 2")
//		.addChild("child 2.1")
//
//		.addNode("node 2.2")
//			.addChild("child 2.2.1")
//			.addChild("child 2.2.2")
//			.addChild("child 2.2.3")
//		.done()
//
//		.addChild("child 2.3")
//
//		.addNode("node 2.4")
//			.addChild("child 2.4.1")
//			.addChild("child 2.4.2")
//			.addChild("child 2.4.3")
//		.done()
//
//		.addChild("child 2.5")
//	.done()
//
//	.addChild("child 3")
//	.addChild("child 4");

//	cout << "sizeof(menu): " << sizeof( menu.getMenu() ) << endl;
//	cout << "sizeof(children): " << sizeof( menu.getMenu().getChildren() ) << endl;
//	cout << "menuNodeNum: "<< menu.getMenu().getChildrenNum() << endl;
//	cout << "menuNodeNum: "<< menu.getMenu().getChildren()[1]->getChildrenNum() << endl;

	std::cout << "Hi Man! Welcome to the show!" << endl;

	return 0;
}
