/*
 * Node.cpp
 *
 *  Created on: Jul 13, 2015
 *      Author: vladimir
 */

#include "Node.hpp"

Node::Node():name(NULL), parent(NULL) {}
Node::Node(const string& name):name(&name), parent(NULL) {}
Node::Node(const string& name, Node& parent):name(&name), parent(&parent) {}
Node::~Node() {}

Node& Node::addNode(const string& name) {
	Node* pNode = new Node(name, *this);
    children.push_back(pNode);
    return *pNode;
}

Node& Node::addChild(const string& name) {
    children.push_back(new Node(name, *this));
    return *this;
}

Node& Node::done() {
	return *parent;
}

vector<Node*>& Node::getChildren() {
	return children;
}

int Node::getChildrenNum() {
    return children.size();
}
