#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    movement = 1; //sets the inital value for our movement
    movement2 = 1; //sets the inital value for our movement

}

//--------------------------------------------------------------
void ofApp::update(){

    float tipX2 = (300*(cos(movement+=.01)))+400; //Defines the nature of of the second x position
    float tipX = (200*(cos(movement2+=.005))); //Defines the nature of of the first x position
    
    polyline.curveTo(tipX+tipX2,0);//Need this code twice in order to set ancor point
    polyline.curveTo(tipX+tipX2,0); // defines location of this curve
    polyline.curveTo(tipX2,200); // defines location of this curve
    polyline.curveTo(400,400); // defines location of this curve
    polyline.curveTo(400,800); // defines location of this curve
    polyline.curveTo(400,800); //Need this code twice in order to set ancor point
    
    
  

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    float numPoints = polyline.size();//The number of points on the line
    float normalLength = 50; // The length of the normals
    for (int p=0; p<100; p+=1) { //Start of the for loop
        ofVec3f point = polyline.getPointAtPercent(p/100.0); //Puts the lines throughout 100% of the
        ofVec3f normal = polyline.getNormalAtIndexInterpolated(numPoints) * normalLength; // NO IDEA??? - Defines nature of the polylines?
        ofLine(point-normal/2, point+normal/2); //Defines where the normals go on the polyline
        
        
    }
    polyline.draw(); // Draws the polyline
    polyline.clear(); //Clears the polyline
}
