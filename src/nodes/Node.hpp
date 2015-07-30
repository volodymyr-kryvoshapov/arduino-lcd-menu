#ifndef SRC_NODES_NODE_HPP_
#define SRC_NODES_NODE_HPP_

#include <memory>

class Node {
protected:
	const std::string* name;
	std::shared_ptr<Node> parent;

public:
	typedef std::shared_ptr<Node> SPtr;
	virtual ~Node();
	virtual void draw() = 0;
};

#endif /* SRC_NODES_NODE_HPP_ */
