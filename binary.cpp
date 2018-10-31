#ifndef BOOLEAN_H
#define BOOLEAN_H
#include <iostream>
using namespace std;

class boolean {
    private:
        char* array;
        int size;

    public:
        boolean(int size) {
          this->size=size;
            array= new char[(size/8)+1];
            for(int i=0; i<(size/8)+1; i++){
              array[i]=0;
            }
        }

        void bitOn(int position) {
            if(position>size){
              cout<<"fuera de rango"<<endl;
            }
            else{
              int n=position/8;
              int x=position%8;
              char mask=1;
              mask=(mask << x);
              cout<<(int)array[n]<<endl;
              array[n]|=(mask);
              cout<<(int)array[n]<<endl;
            }
        }

        void bitOff(int position) {
            if(position>size){
              cout<<"fuera de rango"<<endl;
            }
            else{
              int n=position/8;
              int x=position%8;
              char mask=1;
              mask=(mask << x);
              cout<<(int)array[n]<<endl;
              array[n]&= ~(mask);
              cout<<(int)array[n]<<endl;
            }
        }

        bool operator[](int position) {
          if(position>size){
            cout<<"fuera de rango"<<endl;
            throw "error";
          }
          else{
            int n=position/8;
            int x=position%8;
            char mask=array[n];
            bool bit = (mask >> x)& 1U;
            return bit;
          }
        }

        void clear() {
            for(int i=0; i<(size/8)+1;i++){
              array[i]=0;
            }
        }

        ~boolean() {
          delete array;
        }
};

#endif
