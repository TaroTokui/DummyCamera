#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetFrameRate(60);
	ofSetCircleResolution(128);
	fbo.allocate(CAMERA_WIDTH, CAMERA_HEIGHT);

	spout.init("shaow", CAMERA_WIDTH, CAMERA_HEIGHT);

	// gui
	params.setName("settings");
	params.add(radius.set("rarius", 100, 1, 500));
	gui.setup(params);
}

//--------------------------------------------------------------
void ofApp::update(){

	fbo.begin();
	ofClear(0, 0, 0, 255);
	ofDrawCircle(mouseX, mouseY, radius);
	//ofDrawBitmapString("sample shadow image", 20, ofGetWindowHeight() / 2);
	fbo.end();

	//fbo.getTexture();
	spout.send(fbo.getTexture());

	ofSetWindowTitle(ofToString(ofGetFrameRate()));
}

//--------------------------------------------------------------
void ofApp::draw(){
	ofBackground(0);
	fbo.draw(0,0);
	gui.draw();

	ofDrawBitmapString("spout channel name: shadow", 20, ofGetWindowHeight() - 20);
}

void ofApp::exit() {
	spout.release();
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
