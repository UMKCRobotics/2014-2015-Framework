#ifndef CARDINAL_H
#define CARDINAL_H

#include <string>
#include "Logger.h"
using std::string;

enum Cardinal { NORTH,
		SOUTH,
		EAST,
		WEST};
string cardinalToString(Cardinal c){
	switch(c){
		case NORTH:
			return "NORTH";
		case SOUTH:
			return "SOUTH";
		case WEST:
			return "WEST";
		case EAST:
			return "EAST";
	}
	return "";
	Logger::logError("Cardinal to string cast failed!");
}
#endif
