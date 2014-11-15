#ifndef CARDINAL_H
#define CARDINAL_H

#include <string>
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
}
#endif
