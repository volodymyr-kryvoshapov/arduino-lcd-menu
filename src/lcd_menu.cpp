//============================================================================
// Name        : lcd_menu.cpp
// Author      : Vladimir
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <typeinfo> // string s = typeid(YourClass).name()
#include "Node.hpp"
#include "MenuManager.hpp"

using namespace std;

MenuManager menu;

int main() {
	menu.addMenu("root menu")

	.addNode("node 1")
		.addChild("child 1.1")
		.addChild("child 1.2")
		.addChild("child 1.3")
	.done()

	.addNode("node 2")
		.addChild("child 2.1")

		.addNode("node 2.2")
			.addChild("child 2.2.1")
			.addChild("child 2.2.2")
			.addChild("child 2.2.3")
		.done()

		.addChild("child 2.3")

		.addNode("node 2.4")
			.addChild("child 2.4.1")
			.addChild("child 2.4.2")
			.addChild("child 2.4.3")
		.done()

		.addChild("child 2.5")
	.done()

	.addChild("child 3")
	.addChild("child 4");

	//typeid(menu.getMenu().getChildren()).name();

	cout << "sizeof(menu): " << sizeof( menu.getMenu() ) << endl;
	cout << "sizeof(children): " << sizeof( menu.getMenu().getChildren() ) << endl;
	cout << "menuNodeNum: "<< menu.getMenu().getChildrenNum() << endl;
	cout << "menuNodeNum: "<< menu.getMenu().getChildren()[1]->getChildrenNum() << endl;
	return 0;
}
