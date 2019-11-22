#pragma once

/*******************************************************************
* @purpose	NTP��ʱЭ��ʵ��
* @details	��װNTP��ʱЭ��
********************************************************************/
#include<iostream>
#include <functional>

typedef std::function<void(int code, const char* desc, int64_t serverTime)> NTPCallback;

class NTP
{
public:
	static void getNTPServerTime(const std::string& ntpServer, int nRetry, NTPCallback cb);

private:
	static uint64_t _getCurrentNTPTime();
	static uint64_t _NTPTime2UTCTime(uint64_t ntpTime);
};