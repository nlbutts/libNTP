#include <stdint.h>
#include <time.h>

class NTP
{
public:
	NTP(uint32_t ntpTime[2]);
	~NTP();
	time_t getUnixEpoch() const;
	void getNTPTime(time_t, uint32_t ntpTime[2]) const;
private:
	uint32_t _ntpTime[2];
};