#include <iostream>
#include <chrono>
using namespace std::chrono;

void algo(unsigned long x) {

    if (x <= 0) {

        std::cout << "Error: Input must be a positive integer." << std::endl;
        return;
    }


    if (x == 1) {

        std::cout << x << std::endl;

        return;

    }


    std::cout << x << " ";


    if (x % 2 == 0) {

        x = x / 2;

    } else {

        x = x * 3 + 1;

    }


    algo(x);

}


int main(){
    unsigned long val {0};
    //std::cout << "Enter the value:";
    std::cin >> val;
    //auto start = high_resolution_clock::now();
    algo(val);
    //auto stop = high_resolution_clock::now();
    //auto duration = duration_cast<milliseconds>(stop - start);
    //std::cout << "Duration: " << duration.count()<< " ms";
    return 0;
}