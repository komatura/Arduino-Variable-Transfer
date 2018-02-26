#pragma once

#include "stream.h"

class I2Communicator : public Stream {
public:
	I2Communicator(const int& address);
	~I2Communicator();

	virtual void init(const std::string& ttydir);
	virtual bool sendMessage(const std::string& msg);
	virtual std::string readMessage();
private:

	int _fileID;
	int _i2cAddress;

};
