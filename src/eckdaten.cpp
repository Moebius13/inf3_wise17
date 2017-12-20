#ifndef ECKDATEN
#define ECKDATEN
#include <time.h>

#define DAY_FACT 86400

struct Eckdaten{
    time_t DLZ;
    time_t Fertigungsbeginn;
    time_t Deadline;
    char*  Status;
};

#endif
