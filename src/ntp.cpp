#include "ntp.h"
#include <time.h>

NTP::NTP(uint32_t ntpTime[2])
{
	_ntpTime[0] = ntpTime[0];
	_ntpTime[1] = ntpTime[1];
}

NTP::~NTP()
{

}

time_t NTP::getUnixEpoch() const
{

}

void NTP::getNTPTime(time_t, uint32_t ntpTime[2]) const
{

}
