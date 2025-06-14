#include <iostream> 
#include <cmath>
#include <fstream>
using namespace std;
int main() { 
    ofstream outNumbers;
    outNumbers.open("D:\\Documents\\smt4\\c++\\Data2.txt");
    if(outNumbers.is_open()){
        for(int x = 10; x< 26; x++ ){
            cout << x << "#" << pow( x, 2) << endl;
            outNumbers.close();
            cout << "file saved" << endl;
        }
    }else {
        cout << "could not open file" << endl;
    }
} 