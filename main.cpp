#include <iostream>
#include <typeinfo>

using namespace std;

template<typename Type1, typename Type2>
void conversion(Type1* currentArray, Type2* updatedArray, size_t size){
    for (size_t i = 0; i < size; i++)
        updatedArray[i] = static_cast<Type2>(currentArray[i]);
}


int main() {
    int array[] = {1, 5, 7, 2, 10};
    float array1[5];
    char array2[5];

    conversion<int,float>(array, array1, 5);
    conversion<int,char>(array, array2, 5);

    for (size_t i = 0; i < 5; i++)
        cout << array1[i] << "  ";
    cout << endl;
    for (size_t i = 0; i < 5; i++)
        cout << array2[i] << " ";

    cout << typeid(array1[0]).name();

    return 0;
}
