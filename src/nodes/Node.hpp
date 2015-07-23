#ifndef NODE_HPP_
#define NODE_HPP_

#include <vector>
#include <string>

using namespace std;

class Node {
protected:
	const string* name;
	Node* parent;
	vector<Node*> children; // boost::ptr_vector<Item> || std::vector<std::unique_ptr<Node>> children

public:
	Node(); // for root element
	Node(const string& name);
	Node(const string& name, Node& parent);
	virtual ~Node();

	Node& addNode(const string& name); // return reference to new Node object
	Node& addChild(const string& name); // return reference to this object
	Node& done(); // return reference to parent
	vector<Node*>& getChildren();
	int getChildrenNum();
};

#endif /* NODE_HPP_ */
