#ifndef SAFEARRAY_H
#define SAFEARRAY_H




class SafeArray {
    char* arr;
    int size;
    public:
    SafeArray(char* arr, int size);
    char operator[](int index);
};



#endif