#include <iostream>

using namespace std;

class CameraPhone {
public:
    CameraPhone(int, int);
    int numPictures();
private:
    int imageSize;
    int memorySize;
};

CameraPhone::CameraPhone(int myImageSize, int myMemorySize) {
    imageSize = myImageSize;
    memorySize = myMemorySize;
}

int CameraPhone::numPictures() {
    return memorySize / imageSize;
}

int main() {
    CameraPhone phone(5, 160);

    cout << phone.numPictures() << endl;

    return 0;
}
