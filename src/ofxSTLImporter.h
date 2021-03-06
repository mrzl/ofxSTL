/* 
 * Copyright (c) 2009, Rui Madeira
 * 
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 * 
 * http://creativecommons.org/licenses/LGPL/2.1/
 * 
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 */

#pragma once

#include "ofMain.h"
#include "ofxSTLBase.h"
#include "ofxSTLFacet.h"
#include "utils/ofxSTLBinaryReader.h"
#include "utils/ofxSTLASCIIReader.h"
#include <iostream>
#include <fstream>

class ofxSTLImporter: public ofxSTLBase{
public:
	ofxSTLImporter();
	virtual ~ofxSTLImporter();
	
	void loadSTL(string path); //will try to find if file is ASCII or binary and open it.
	string getModelName(); //only exists in ASCII files
	
protected:
	ofxSTLBinaryReader binaryReader;
	ofxSTLASCIIReader asciiReader;
	unsigned int lineIndex;
	bool isASCII(ifstream& myFile);
};