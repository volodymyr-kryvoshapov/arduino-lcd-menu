#include "Menu.hpp"

Menu::Menu():name(NULL), parent(NULL) {}
Menu::Menu(const string& name):name(&name), parent(NULL) {}
Menu::Menu(const string& name, Menu& parent):name(&name), parent(&parent) {}
Menu::~Menu() {}

void Menu::draw() {

}

Menu& Menu::addMenu(const string& name) {
	SPtr menu = SPtr(new Menu(name, *this));
    children.push_back(menu);
    return *menu;
}

Menu& Menu::addCustomElement(const string& name) {
    children.push_back( SPtr(new CustomElement(name, *this)) );
    return *this;
}

Menu& Menu::done() {
	return *parent;
}

//std:vector<SPtr>& Menu::getChildren() {
//	return children;
//}
//
//int Menu::getChildrenNum() {
//    return children.size();
//}
