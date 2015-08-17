#ifndef SRC_NODES_CUSTOMELEMENT_HPP_
#define SRC_NODES_CUSTOMELEMENT_HPP_

#include <memory>
#include "Node.hpp"
#include "Menu.hpp"

class Menu;

class CustomElement: public Node{
private:
	std::shared_ptr<Menu> parent;

public:
	CustomElement();
	virtual ~CustomElement();
	void draw(std::string& pressedButton);
	int hasParent();
	void menuManagerSetCurrentElement();
};

#endif /* SRC_NODES_CUSTOMELEMENT_HPP_ */
