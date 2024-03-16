#include <iostream>
using namespace std;

//********************
// Declare Function Prototypes
//********************
void getTwoValues(int& begin, int& end ){
    cout << "Enter two values";
    do {
        cin>>begin>>end;
    } while (begin < end);
}


int getNextPrime(int begin){
    int nextPrime = begin;
    bool isPrime = false;
    while (!isPrime){
        nextPrime++;
        isPrime = true;
        for (int i = 2; i < nextPrime; i++){
            if (nextPrime % i == 0){
                isPrime = false;
                break;
            }
        }
    }
    return nextPrime;
    
}

int getPrevPrime(int end){
    int lastPrime = end;
    bool isPrime=false;
    while (!isPrime){
        lastPrime--;
        isPrime = true;
        for (int i = 2; i < lastPrime; i++){
            if (lastPrime % i == 0){
                isPrime = false;
                break;
            }
        }
    }
    return lastPrime;
}