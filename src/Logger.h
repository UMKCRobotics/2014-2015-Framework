#ifndef LOGGER_H
#define LOGGER_H

#include <ostream>
#include <iostream>
#include <string.h>
using namespace std;

class Logger{
private:
	ostream* os;
	string errorPrefix;
	string messagePrefix;
	void init();
	void log(string& message);
	void p_setStream(ostream* out);
	bool checkStream(bool setToCout=true);
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
