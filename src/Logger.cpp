#include "Logger.h"
#include <iostream>
#include <stdexcept>

void Logger::log(string& message){
	(*os) << message;
}

void Logger::logMessage(string message)
{
	Logger::getInstance().checkStream();
	Logger::getInstance().log(message);
}

void Logger::logError(string error)
{
	error = "Error: " + error;
	Logger::getInstance().checkStream();
	Logger::getInstance().log(error);
}
void Logger::p_setStream(ostream* out){
	os = out;
}
void Logger::setStream(ostream* out){
	Logger::getInstance().p_setStream(out);	
}

bool Logger::checkStream(bool setToCout){
	
	if(Logger::getInstance().os == NULL){
		if(setToCout){
			Logger::getInstance().setStream(&cout);
		}
		return false;
	}
	return true;
}