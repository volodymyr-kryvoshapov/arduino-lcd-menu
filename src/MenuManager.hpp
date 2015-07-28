#ifndef SRC_MENUMANAGER_HPP_
#define SRC_MENUMANAGER_HPP_

#include "nodes/Node.hpp"

class MenuManager { // rename to MenuTree || Menu
private:
	Node* rootNode;

public:
	MenuManager();
	virtual ~MenuManager();

	Node& addRootMenu(const string& name); // may by renamed to createMenu
	Node& getRootMenu();
	//void navButtons(int,int,int,int,int,int);
	//void addUsrScreen(callback, 10000);
};

#endif /* SRC_MENUMANAGER_HPP_ */
