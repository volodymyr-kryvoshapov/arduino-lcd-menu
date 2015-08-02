#include "Menu.hpp"

Menu::Menu(const string& menuName) {
	name = &menuName;
	parent = NULL;
}
Menu::Menu(const string& menuName, SPtr sptrParent) {
	name = &menuName;
	parent = sptrParent;
}
Menu::~Menu() {}

void Menu::draw() {

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
	return *this;
}

//std:vector<SPtr>& Menu::getChildren() {
//	return children;
//}
//
//int Menu::getChildrenNum() {
//    return children.size();
//}
