#ifndef my_lib_h
#define my_lib_h

    #ifndef ARDUINO_H
        #include <Arduino.h>
    #endif

int suma(int param1, int param2);

int resta (int param1, int param2);

int multip (int param1, int param2);

bool comparacion (int pin, int comp);

#endif
