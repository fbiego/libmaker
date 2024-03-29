
// ---------------------------------------------
// This file was generated by libmaker.py
// Project: Sample
// ---------------------------------------------

#ifndef SAMPLE_H
#define SAMPLE_H

#include <Arduino.h>

class Sample {
    public:
        // accessible from outside the class
        Sample(); // constructor
        ~Sample(); // destructor
        
        void begin();
        void update();
        
    protected:
        // cannot be accessed from outside the class, however, they can be accessed in inherited classes
    private:
        // cannot be accessed (or viewed) from outside the class
        void test();
};

#endif
