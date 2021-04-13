#include <iostream>

using namespace std;

int main(void){
	// valid notes are 100, 50, 20, 10, 5, 2, 1;

	unsigned long long int moneyAmount, takas[7];
	unsigned short i, validNotes[] = {100, 50, 20, 10, 5, 2, 1};
	string pCheck;
	bool fTimeOver = false;

	while(true){
		if(fTimeOver){
			cout << endl << endl;
		}
		cout << "To quite the program press 0 and hit enter." << endl;
		cout << "Don't input any negative value. if you do program will throw garbage value on you." << endl;

		if(fTimeOver){
			cout << endl;
		}

		fTimeOver = true;

		cout << endl << "Enter amount : ";
		cin >> moneyAmount;

		if(moneyAmount == 0){
			break;
		}

		takas[0] = moneyAmount / 100;
		moneyAmount %= 100;

		takas[1] = moneyAmount / 50;
		moneyAmount %= 50;

		takas[2] = moneyAmount / 20;
		moneyAmount %= 20;

		takas[3] = moneyAmount / 10;
		moneyAmount %= 10;

		takas[4] = moneyAmount / 5;
		moneyAmount %= 5;

		takas[5] = moneyAmount / 2;
		moneyAmount %= 2;

		takas[6] = moneyAmount;

		cout << endl;

		for(i=0; i<7; i++){
			if(takas[i] > 0){
				pCheck = (takas[i]  == 1)?" note":" notes";
				cout << validNotes[i] << " taka" << pCheck << " needed " << takas[i] << endl;
			}
		}
	}

	return 0;
}
