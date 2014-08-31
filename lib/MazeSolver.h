#include <vector>
#include "Cardinal.h"

class WorldSensor{
	public:
		virtual vector<Cardinal> computeOpenings() = 0;
};

