#ifndef _ECKDATEN
#define _ECKDATEN
#include <time.h>
#include <string>

struct Eckdaten
{
  time_t DLZ;
  time_t Fertigungsbeginn;
  time_t Deadline;
  std::string Status;
};
#endif
