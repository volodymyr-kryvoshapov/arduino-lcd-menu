#ifndef SRC_MENUMANAGER_HPP_
#define SRC_MENUMANAGER_HPP_

#include "nodes/Menu.hpp"

class MenuManager { // rename to MenuTree || Menu
private:
	Menu* rootMenu;

public:
	MenuManager();
	virtual ~MenuManager();

	Menu& addRootMenu(const string& name); // may by renamed to createMenu
	//void addUsrScreen(callback, 10000);
};

#endif /* SRC_MENUMANAGER_HPP_ */
