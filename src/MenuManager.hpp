/*
 * MenuManager.hpp
 *
 *  Created on: Jul 13, 2015
 *      Author: vladimir
 */

#ifndef SRC_MENUMANAGER_HPP_
#define SRC_MENUMANAGER_HPP_

#include "Node.hpp"

class MenuManager { // rename to MenuTree || Menu
private:
	Node* rootNode;

public:
	MenuManager();
	virtual ~MenuManager();

	Node& addMenu(const string& name); // may by renamed to createMenu
	Node& getMenu();
	//void navButtons(int,int,int,int,int,int);
	//void addUsrScreen(callback, 10000);
};

#endif /* SRC_MENUMANAGER_HPP_ */