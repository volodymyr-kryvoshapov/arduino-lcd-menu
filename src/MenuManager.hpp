#ifndef SRC_MENUMANAGER_HPP_
#define SRC_MENUMANAGER_HPP_

#include "nodes/Menu.hpp"
#include <memory>

class MenuManager {
private:
	std::shared_ptr<Menu> rootMenu; // Menu* rootMenu;
	std::shared_ptr<Node> currentElement;

public:
	MenuManager();
	virtual ~MenuManager();

	Menu& addMenu(const string& name);
	void draw();
	//void addUsrScreen(callback, 10000);
};

#endif /* SRC_MENUMANAGER_HPP_ */
