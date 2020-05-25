//c++
#include <iostream>
#include <chrono>

int main() {
    //std::chrono::duration<double> all[20];
    for (int j = 0; j < 20; j++) {
        auto begin = std::chrono::high_resolution_clock::now();
        for (int i = 0; i < 10000000; i++) {
            (i + i) / (i * i + 1) - 1;
        }
        auto end = std::chrono::high_resolution_clock::now();
        
        std::chrono::duration<double> elapsed = end - begin;
        std::cout << "Elapsed Time: " << elapsed.count() << "s\n";
    }
    std::cout << "end";
    
    while(1) {}
    return 0;
}