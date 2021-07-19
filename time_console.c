#define __STDC_WANT_LIB_EXT1__ 1
#include <stdio.h>
#include <time.h>


int main() {
	time_t timer = time(NULL);
	time(&timer);

	char str[26];
	ctime_s(str, sizeof str, &timer);
	printf("Local time is: %s", str);

	return 0;
}