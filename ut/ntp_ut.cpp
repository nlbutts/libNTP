#include <gmock/gmock.h>
#include <ctime>
#include <iostream>

using std::cout;
using std::endl;

TEST(NTP_UT, UnixEpochTime)
{
	time_t now;
	now = time(NULL);
	cout << "Time now = " << now << endl;
	EXPECT_TRUE(true);
}