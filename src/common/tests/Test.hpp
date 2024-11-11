#include "iostream"


#include <iostream>
#include <memory>
#include <fstream>

#include "common/timer/Timer.hpp"

#include "cpu/singleThreaded/SingleCpuSieve.hpp"
#include "cpu/multiThreaded/MultiCpuSieve.hpp"

class Test {
public:

    static void runTest(long max, std::shared_ptr<ISieve> sieve, std::ofstream& outFile);

private:
    static Timer timer;
};