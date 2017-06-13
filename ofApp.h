#pragma once

#include "ofMain.h"
#include "ofxSpout.h"
#include "ofxGui.h"

static const int CAMERA_WIDTH = 1280;
static const int CAMERA_HEIGHT = 720;

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();
		void exit();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		
private:
	ofxSpout::Sender spout;
	ofFbo fbo;

	// gui
	ofxPanel gui;
	ofParameterGroup params;
	ofParameter<int> radius;
};
