#include <iostream>
#include <string>

using namespace std;

class Window {
public:
    Window(int width, int height) {
        this->width = width;
        this->height = height;
    }

    friend bool areSameSize(Window A, Window B) {
        if(A.width == B.width && A.height == B.height) {
            return true;
        }
        else {
            return false;
        }
    }

private:
    int width, height;
};

int main() {
    Window window1(2, 4);
    Window window2(2, 4);

    cout << areSameSize(window1, window2) << endl;

    return 0;
}
