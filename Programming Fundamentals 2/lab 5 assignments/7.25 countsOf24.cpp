//Program picks 4 cards from a 52 card deck and then computes the sum of the four cards.
//Program displays the number of picks that yield the sum of 24.
#include <iostream>
using namespace std;
int main(){
    const int NUMBER_OF_CARDS = 52;

    int sumTwentyFour = 0;
	for(int card1 = 0; card1 < NUMBER_OF_CARDS; ++card1){
		for(int card2 = card1 + 1; card2 < NUMBER_OF_CARDS; ++card2){
			for(int card3 = card2 + 1; card3 < NUMBER_OF_CARDS; ++card3){
				for(int card4 = card3 + 1; card4 < NUMBER_OF_CARDS; ++card4){
					int sum = card1 % 13 + card2 % 13 + card3 % 13 + card4 % 13 + 4;
					if(sum == 24){
						++sumTwentyFour;
					}
				}
			}
		}
	}

    cout << "The number of picks that yield the sum of 24 is " << sumTwentyFour << endl;
    cout << endl;
    cout << "Code by Jacob Smetana" << endl;

    return 0;
}
