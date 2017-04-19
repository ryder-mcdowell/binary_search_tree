#pragma once
#include <string>
#include "ofMain.h"

class Node {

public:
    
    int value;
    double x;
    double y;
    double theta;

    Node *left;
    Node *right;
    
    ofColor color;
    
    Node();
    Node(int x, int y);
    ~Node();
    
    void drawTree();
    void move();
    
    void add(Node *node);
    
    std::string inOrder();
    std::string preOrder();
    std::string postOrder();
    
    
};
