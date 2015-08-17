#ifndef SRC_NODES_NODE_HPP_
#define SRC_NODES_NODE_HPP_

#include <memory>

class Node {
protected:
	const std::string* name;
	int firstEnter = 1; // show initial state of element

public:
	typedef std::shared_ptr<Node> SPtr;
	virtual ~Node();

	/*
	 * Arguments:
	 * std::string& pressedButton
	 *
	 * if isMenuActive = 1 then show menu state relative of pressedButton
	 */
	virtual void draw(std::string&);
	virtual int hasParent() = 0;
	virtual void menuManagerSetCurrentElement() = 0;
	virtual void clear();
};

#endif /* SRC_NODES_NODE_HPP_ */
