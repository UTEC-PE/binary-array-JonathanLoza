#include <iostream>
#include "binary.cpp"

using namespace std;

int main(int argc, char *argv[]) {
    cout << "===========================================================" << endl;
    cout << "Binary Array Practice" << endl;
    cout << "===========================================================" << endl << endl;
    /*char *array=new char[(1/8)+1];
    char mask=1;
    array[0] |= (mask);
    unsigned long bit = (array[0] >> 1)& 1U;
    cout<<bit;*/
    boolean boleanos(8);
    boleanos.bitOn(2);
    bool x=boleanos[2];
    cout<<x<<endl;
    boleanos.bitOff(2);


    //system("read");
    return EXIT_SUCCESS;
}
