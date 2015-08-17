#include "Menu.hpp"

Menu::Menu(const string& menuName) {
	name = &menuName;
	parent = NULL;
}
Menu::Menu(const string& menuName, std::shared_ptr<Menu> sptrParent) {
	name = &menuName;
	parent = sptrParent;
}
Menu::~Menu() {}

/*
 * case_1: enter to the menu
 *  get two first element from 'child' array and draw it
 *  draw arrow opposite first element
 *
 * case_2: buttonDown.click()
 * 	move arrow on a one element down (opposite second element)
 *
 * case_3: buttonDown.click() again
 * 	draw second and third element
 *  draw arrow opposite third element
 *
 * case_4: buttonEnter.click()
 *  MenuManager::setCurrentElement(this);
 *	call draw(std::string& pressedButton) method of derived element
 *
 */
void Menu::draw(std::string& pressedButton) {
	if (firstEnter) {
		// show initial state of menu

		firstEnter = 0;
		return;
	}

	if (pressedButton == "up") {

	}
	if (pressedButton == "down") {

	}
}

Menu& Menu::addMenu(const string& name) {
	std::shared_ptr<Menu> menu(new Menu(name, shared_from_this()));
    children.push_back(menu);
    return *menu;
}

Menu& Menu::addCustomElement(const string& name) {
    children.push_back(make_shared<CustomElement>());
    return *this;
}

Menu& Menu::done() {
	return *parent;
}

int Menu::hasParent() {
	return parent != NULL;
}

void Menu::menuManagerSetCurrentElement(){
	MenuManager::currentElement = shared_from_this();
}

//std:vector<SPtr>& Menu::getChildren() {
//	return children;
//}
//
//int Menu::getChildrenNum() {
//    return children.size();
//}
