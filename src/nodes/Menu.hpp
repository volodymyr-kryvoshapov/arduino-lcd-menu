#ifndef MENU_HPP_
#define MENU_HPP_

#include <memory>
#include <vector>
#include <string>
#include "Node.hpp"
#include "CustomElement.hpp"

using namespace std;

class Menu: public Node, public enable_shared_from_this<Menu> {
private:
	std::shared_ptr<Menu> parent;
	std::vector<SPtr> children;

public:
	Menu(const string& name);
	Menu(const string& name, std::shared_ptr<Menu> parent);
	virtual ~Menu();

	void draw(std::string& pressedButton);

	Menu& addMenu(const string& name); // return reference to new Menu object
	Menu& addCustomElement(const string& name); // return reference to this object
	Menu& done(); // return reference to parent
};

#endif /* MENU_HPP_ */
