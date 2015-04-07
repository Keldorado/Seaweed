#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    movement = 1;
    movement2 = 1;

}

//--------------------------------------------------------------
void ofApp::update(){

    float tipX2 = (300*(cos(movement+=.01)))+400;
    float tipX = (200*(cos(movement2+=.005)));
    
    polyline.curveTo(tipX+tipX2,0);
    polyline.curveTo(tipX+tipX2,0);
    polyline.curveTo(tipX2,200);
    polyline.curveTo(400,400);
    polyline.curveTo(400,800);
    polyline.curveTo(400,800);
    
    
  

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    float numPoints = polyline.size();
    float normalLength = 50;
    for (int p=0; p<100; p+=1) {
        ofVec3f point = polyline.getPointAtPercent(p/100.0);
        float floatIndex = p/100.0 * (numPoints-1);
        ofVec3f normal = polyline.getNormalAtIndexInterpolated(floatIndex) * normalLength;
        ofLine(point-normal/2, point+normal/2);
        
        
    }
    polyline.draw();
    polyline.clear();
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
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
