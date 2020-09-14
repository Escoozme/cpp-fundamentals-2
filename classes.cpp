#include <iostream>
using namespace std;
class EvenNumber{
public:
    int i;
    EvenNumber(){
        i = 0;
    }
    EvenNumber(int newValue){
        i = newValue;
    }
    int getValue(){
        return i;
    }
    EvenNumber getNext(){
        return EvenNumber(i + 2);
    }
    EvenNumber getPrevious(){
        return EvenNumber(i - 2);
    }
private:
    int whatEver = 5;
};

int main(){
    EvenNumber number(16);

    cout << number.getValue() << endl;
    cout << number.getNext().getValue() << endl;
    cout << number.getPrevious().getValue() << endl;
    cout << number.i << endl;
//    cout << number.whatEver << endl;

    return 0;
}
