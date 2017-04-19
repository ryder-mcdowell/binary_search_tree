#include "Node.hpp"
#include "ofMain.h"
#include <string>

Node::Node() {
    value = ofRandom(100);
    x = 0;
    y = 0;
    theta = 0,0;
    color = ofColor(ofRandom(255), ofRandom(225), ofRandom(225));
    left = NULL;
    right = NULL;
}

Node::Node(int x, int y) {
    this->x = x;
    this->y = y;
    theta = 0,0;
    color = ofColor(ofRandom(255), ofRandom(225), ofRandom(225));
    value = ofRandom(100);
    left = NULL;
    right = NULL;

}

Node::~Node() {
    delete left;
    delete right;
}

void Node::add(Node *node) {

    if (value <= node->value) {
        if (left == NULL) {
            node->x = x + 150;
            node->y = y + 150;
            left = node;
        } else {
            left->add(node);
        }
    } else {
        if (right == NULL) {
            node->x = x - 150;
            node->y = y + 150;
            right = node;
        } else {
            right->add(node);
        }
    }
    
}

void Node::drawTree() {
    ofSetColor(color);
    ofDrawEllipse(x, y, 50, 50);
    ofSetColor(225, 225, 225);
    ofDrawBitmapString(ofToString(value), x, y);
    
    if (left != NULL) {
        ofSetColor(225, 225, 225);
        ofDrawLine(x, y, left->x, left->y);
        left->drawTree();
        left->move();
    }
    if (right != NULL) {
        ofDrawLine(x, y, right->x, right->y);
        right->drawTree();
        right->move();
    }
}

void Node::move() {
    y += 0.9 * cos(theta);
    theta += 0.1;
    
}

std::string Node::inOrder() {
    std::string str = "";
    if (right != NULL) {
        str.append(right->inOrder());
    }
    str.append(to_string(value) + ", ");
    if (left != NULL) {
        str.append(left->inOrder());
    }
    return str;
}

std::string Node::preOrder() {
    std::string str = "";
    str.append(to_string(value) + ", ");
    if (right != NULL) {
        str.append(right->preOrder());
    }
    if (left != NULL) {
        str.append(left->preOrder());
    }
    return str;
}

std::string Node::postOrder() {
    std::string str = "";
    if (right != NULL) {
        str.append(right->postOrder());
    }
    if (left != NULL) {
        str.append(left->postOrder());
    }
    str.append(to_string(value) + ", ");
    return str;
}


