#include<iostream>

void insertion_sort(int* arr, unsigned sz);
unsigned moveright(int* arr, int key, unsigned last);

int main() {

#ifdef AA
unsigned size = 0; std::cin >> size;
int* arr = new int[size];

for(int i = 0; i < size; ++i) {
    std::cin >> arr[i];
}
insertion_sort(arr,size);
for(int i = 0; i < size; ++i) {
    std::cout << arr[i];
}
    delete[] arr;
    return 0;
#endif

unsigned size = 0; std::cout << "Enter size of the array " ; std::cin >> size;
int* arr = new int[size];
for(int i = 0; i < size; ++i) {
    std::cin >> arr[i];
}
insertion_sort(arr, size);

for(int i = 0; i < size; ++i) {
    std::cout << arr[i] << " ";
}
delete[] arr;
return 0;
}

void insertion_sort(int* arr, unsigned sz) {
    for(unsigned i = 0; i < sz; ++i) {
        int key = arr[i];
        unsigned pos = moveright(arr, key, i);
        arr[pos] = key;
    }
}
unsigned moveright(int* arr, int key, unsigned last) {
    unsigned pos = last;
    for(int i = 0; i <= last; ++i) {
        if(arr[i] > key) {
            pos = i;
    for(int j = last; j >= pos; --j) {
            arr[j + 1] = arr[i];
            return pos;
            }
        }
        
    }
    return pos;
}

//for comm