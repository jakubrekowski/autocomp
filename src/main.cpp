#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main(int argc, char **argv) {
    cout << "autocomp v0.13 | https://github.com/rekubrekowski/autocomp\n\n";
  
    if (argv[1] == 0)
    {
        cout << "You haven't define any files";
        system("g++ *.cpp -o main && ./main");
    }
    else
    {
        system(("g++ " + argv[1] + " -o main && ./main").c_str());
    }    
  
    return 0;
}
