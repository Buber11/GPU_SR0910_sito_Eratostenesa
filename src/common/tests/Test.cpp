#include "Test.hpp"


Timer Test::timer;

void Test::runTest(long max, std::shared_ptr<ISieve> sieve, std::ofstream& outFile) {
    sieve->setMaxLimit(max);
    
    timer.start();
    sieve->computePrimes();
    timer.stop();
    
    outFile << "Time taken to compute primes up to " << max << ": " << timer.getTime() << "ms\n";
    
    std::cout << "Time taken to compute primes up to " << max << ": " << timer.getTime() << "ms" << std::endl;
}