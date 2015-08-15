#ifndef SRC_MENUMANAGER_HPP_
#define SRC_MENUMANAGER_HPP_

#include <iostream>
#include "nodes/Menu.hpp"
#include <memory>

class MenuManager {
private:
	std::shared_ptr<Menu> rootMenu; // Menu* rootMenu;
	std::shared_ptr<Node> currentElement;
	long long int lastActivityTimeMs = 0;

public:
	MenuManager();
	virtual ~MenuManager();

	Menu& addMenu(const string& name);

	MenuManager& setDefaultScreen(); //setDefaultScreen(callback, timeout)
	MenuManager& setNavButtons(int, int, int, int, int, int);
	void draw();
};

#endif /* SRC_MENUMANAGER_HPP_ */
