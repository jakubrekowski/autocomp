#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main(int argc, char **argv) {
    cout << "autocomp v1.0 | https://github.com/rekubrekowski/autocomp\n\n";
  
    if (argv[1] == 0)
    {
        cout << "You haven't define any files";
        system("g++ *.cpp -o main && ./main");
    }
    else
    {
        string files = "";
    
        for (int i = 1; i < argc; i++)
        {
            files = files + argv[i] + " ";
        }
        

        string str = "g++ "; 
        str = str + files + " -o main "; 

        const char *command = str.c_str(); 
    
        system(command); 
        system("./main");
    }    

    return 0;
}
