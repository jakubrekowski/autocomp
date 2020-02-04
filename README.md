# autocomp

A simple c++ automatic compiler for linux.

## install & use

**packets required**

For the program to work properly you only need g++.

If you haven't g++, type this in terminal:
```
sudo apt install g++
```

**compile**
```
git clone https://github.com/rekubrekowski/autocomp.git
cd autocomp
g++ main.cpp -o autocomp
```

**use in project** (after the compilation)
1. copy to project folder
```[bash]
cp autocomp ~/example/path-to-your/project/autocomp
```
2. use it to compile all .cpp files```./autocomp```, or defined .cpp files  ```./autocomp main.cpp sth.cpp lol.cpp```

**install global as command** (even after the compilation)
```
sudo cp autocomp /bin/autocomp
```

## donate

[Donate me with PayPal](https://www.paypal.me/jakubReq) and support this project.

## license

This work is licensed under a [Creative Commons Attribution-ShareAlike 4.0 International License](http://creativecommons.org/licenses/by-sa/4.0/).
