#include "../../../../extras/fixture/src/unity_fixture.h"

static void RunAllTests(void)
{
  RUN_TEST_GROUP(T1);
}

int main(int argc, const char * argv[])
{
  return UnityMain(argc, argv, RunAllTests);
}
