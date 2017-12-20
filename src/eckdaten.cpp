#ifndef _ECKDATEN
#define _ECKDATEN
#include <time.h>
#include <string>

#define DAY_FACT 86400

struct Eckdaten{
    time_t DLZ;
    time_t Fertigungsbeginn;
    time_t Deadline;
    std::string Status;
};

#endif
