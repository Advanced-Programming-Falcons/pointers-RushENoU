#include <iostream>
using namespace std;



int main()
{
    int input; 
    cout << "Enter the size of the array: ";
    cin >> input;
    
    int *arr = new int[input];
    
    for (int i = 0; i < input; i++) {
         
        *(arr+i) = i*2;
    }
    
    cout << "Original array values: ";
    for (int i = 0; i < input; i++) {
         
        cout << *(arr+i) << " ";
    }
    
    for (int i = 0; i < input; i++) {
         
        *(arr+i) += 5;
    }
    
    cout << "Modified array (each element +5): ";
    for (int i = 0; i < input; i++) {
         
        cout << *(arr+i) << " ";
    }
    
    int last = *(arr+input-1);
    for (int i = input-1; i > 0; i--) {
            *(arr+i) = *(arr+i-1);
            
    }
    *(arr) = last;
    cout << "Array after shifting: ";
    for (int i = 0; i < input; i++) {
         
        cout << *(arr+i) << " ";
    }
    
    
    delete[] arr;
    
    return 0;
}
