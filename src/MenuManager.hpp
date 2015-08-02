#ifndef SRC_MENUMANAGER_HPP_
#define SRC_MENUMANAGER_HPP_

#include "nodes/Menu.hpp"
#include <memory>

class MenuManager {
private:
	std::shared_ptr<Menu> rootMenu; // Menu* rootMenu;

public:
	MenuManager(const std::string& name);
	virtual ~MenuManager();

	Menu& getRootMenu();
	//void addUsrScreen(callback, 10000);
};

#endif /* SRC_MENUMANAGER_HPP_ */
