#include <iostream>

using namespace std;

void Hello() {
    cout << "Hello World!\n";
}

int AddThree(int a, int b, int c) {
    return a + b + c;
}

int largest(int arr[], int size) {
    int max = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }

    }

    return max;
}

int main()
{
    Hello();

}