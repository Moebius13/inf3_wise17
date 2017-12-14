#include <time.h>
#include <string>

struct Eckdaten
{
  struct time_t DLZ;
  struct time_t Fertigungsbeginn;
  struct time_t Deadline;
  string Status;
};
