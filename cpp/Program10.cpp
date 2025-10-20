#include <iostream>
using namespace std;
class Box {
private:
    int length, width, height;
public:
    // Constructor
    Box(int l, int w, int h) {
        length = l;
        width = w;
        height = h;
    }
    friend int calculateVolume(Box b);
};
int calculateVolume(Box b) {
    return b.length * b.width * b.height;
}
int main() {
    Box b1(10, 5, 3);
    cout << "Volume of Box = " << calculateVolume(b1) << endl;
    return 0;
}

