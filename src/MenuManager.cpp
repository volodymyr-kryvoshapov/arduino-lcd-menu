/*
 * MenuManager.cpp
 *
 *  Created on: Jul 13, 2015
 *      Author: vladimir
 */

#include "MenuManager.hpp"

MenuManager::MenuManager() {
	// TODO Auto-generated constructor stub

}

MenuManager::~MenuManager() {
	// TODO Auto-generated destructor stub
}

Node& MenuManager::addMenu(const string& name) {
	rootNode = new Node(name);
	return *rootNode;
}

Node& MenuManager::getMenu() {
	return *rootNode;
}
