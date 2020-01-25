#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "autocomp v0.12 | https://gitlab.com/jakub.rekowski/autocomp\n\n";
    cout << system("g++ *.cpp -o main && ./main");
    return 0;
}