#include <iostream>
using namespace std;

class HelloWorld {
private:
    void printMessage() const {
        cout << "Hello World form private!" << endl;
    }
public:
    void callPrintMessage() const {
        std::cout << "Hello World from Public!\n";
        printMessage();
    }
    int sum(int a, int b)
    {
        return a + b;
    }
};

int main() {
    HelloWorld hw;
    std::cout << "Hello World from main!\n";
    hw.callPrintMessage();
    cout << "Toplam: " << hw.sum(3, 5) << "\n";
    return 0;
}