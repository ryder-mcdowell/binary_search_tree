#include "ofApp.h"
#include "Node.hpp"

//--------------------------------------------------------------
void ofApp::setup(){
    tree = Node(ofGetWidth() / 2, 100);
    ofBackground(14);
}

//--------------------------------------------------------------
void ofApp::update(){
    tree.move();
}

//--------------------------------------------------------------
void ofApp::draw(){
    tree.drawTree();
    ofSetColor(225, 225, 225);
    ofDrawBitmapString("In-Order: " + tree.inOrder(), 100, 600);
    ofDrawBitmapString("Pre-Order: " + tree.preOrder(), 100, 650);
    ofDrawBitmapString("Post-Order: " + tree.postOrder(), 100, 700);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
        tree.add(new Node());
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
