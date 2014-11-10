#ifndef LOGGER_H
#define LOGGER_H

#include <ostream>
#include <iostream>
#include <string.h>
#include <sstream>
using namespace std;

class Logger{
private:
	ostream* os;
	string errorPrefix;
	string messagePrefix;
	stringstream ss;
	void init();
	/*
	 * Logs and clears what's current in the stringstream
	 */
	void log();
	void p_setStream(ostream* out);
	bool checkStream(bool setToCout=true);

	template<typename Func>
	static void applyToLoggerInstance(Func f);
public:
	static Logger& getInstance(){
		static Logger instance;
		return instance;
	}

	static void setStream(ostream* out);
	static void logMessage(string message);
	static void logError(string error);
	static void setMessagePrefix(string s);
	static void setErrorPrefix(string s);
	static void standardInit();
};
	
#endif
