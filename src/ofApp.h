#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();
    
    ofPolyline polyline; //Variable to hold our polyline
    
    float movement; //floating point for our first movement
    float movement2; //floating point for our second movement 
    
		
};
