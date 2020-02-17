#include <iostream>
#include <string>

using namespace std;

int main(){

	//variables
	int input, sum, temp, curr, digits, mult;
	sum = 0;
	digits = 0;
	curr = 0;
	//get input
	cin >> input;

	//copy input into temp
	temp = input;

	//determine n numbers
	while (temp != 0){
		temp /= 10;
		if(temp >= 0){
			digits++;
		}
	}

	//reset temp to input
	temp = input;

	//take each number and find nth power
	while (temp != 0){
		//get next number
		curr = temp % 10;
		//reset mult to 1
		mult = 1;
		//calculate nth power
		for(int i = 0; i < digits; i++){
			mult *= curr;
		}
		//add nth power to sum
		sum += mult;
		//remove curr number
		temp /= 10;
	}

	//if sum is equal to input is armstrong, else not
	if (sum == input){
		cout << input << " is an Armstrong number";
	}else {
		cout << input << " is not an Armstrong number";
	}

	return 0;
}
