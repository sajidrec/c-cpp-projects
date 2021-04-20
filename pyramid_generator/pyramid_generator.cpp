#include <iostream>

using namespace std;

int main(void){


    long long int n, i, j, k;

    char sChar;

    while(true){

		cout << "Enter row number or enter zero or any negative number to exit : ";
		cin >> n;

		if(n <= 0){
			cout << endl << endl << "Thx for using this program." << endl <<"This program was fully written by MD. Sajid Hossain but some concept has been copied from other resources." << endl << endl;
			break;
		}

		cout << "Enter a character to design pyramid : ";
		cin >> sChar;

		for(i=1; i<n; i++){

			for (k = 1; k <= n - i; k++) {
				cout << " ";
			}

            for(j=1; j<=2*i-1; j++){
				cout << sChar;
            }
            cout << endl;
		}

    }

	return 0;
}
