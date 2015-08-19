#ifndef SRC_MENUCONTROLLER_HPP_
#define SRC_MENUCONTROLLER_HPP_

#include <iostream>
#include "nodes/Menu.hpp"
#include <memory>

class MenuController {
private:
	std::shared_ptr<Menu> rootMenu; // Menu* rootMenu;
	long long int lastActivityTimeMs = 0;
	void showDefaultScreen();

public:
	static std::shared_ptr<Node> currentElement;
	MenuController();
	virtual ~MenuController();

	Menu& addMenu(const string& name);

	MenuController& setDefaultScreen(); //setDefaultScreen(callback, timeout)
	MenuController& setNavButtons(int, int, int, int, int, int);
	void draw();
};

#endif /* SRC_MENUCONTROLLER_HPP_ */
