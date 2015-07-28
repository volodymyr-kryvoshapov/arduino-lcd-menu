#ifndef SRC_NODES_NODE_HPP_
#define SRC_NODES_NODE_HPP_

#include <memory>

class Node {
public:
	typedef std::shared_ptr<Node> SPtr;
	virtual ~Node();
	virtual void draw() = 0;
};

#endif /* SRC_NODES_NODE_HPP_ */
