// Ryder McDowell
// A tree of nodes placed by their values. Added values less than parent node go left
// and added values greater than parent node go right.

#include "ofMain.h"
#include "ofApp.h"

int main( ){    
    ofSetupOpenGL(1024,768,OF_WINDOW);
    ofSeedRandom();
	ofRunApp(new ofApp());

}
