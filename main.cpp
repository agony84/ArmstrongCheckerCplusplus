/*
Author: John Kear
Version: v1.0
Date: 2/17/2020

Comments:
This program takes a user input integer and determines if it is an Armstrong number.
An Armstrong number is a number with n-digits whose sum of each digit raised
to the nth power is equal to the original number.
EX: 4 has 1 digit. 4^1 = 4 therefore 4 is an Armstrong number.
EX: 10 has 2 digits. 1^2 + 0^2 = 1, therefore 10 is NOT an Armstrong number.
EX: 153 has 3 digits. 1^3 + 5^3 + 3^3 = 153, therefore 153 is an Armstrong number.

To accomplish the task of this program we will first need to determine the number of digits
if the input number. When the number of digits has been found we will need to take each
digit individually and multiply it by itself n times. That value will them need to be added
to the total sum. Once all digits have been multiplied and added to the total sum,
we will compare the total sum to the original input. Print the corresponding messages.

This program is written using C++.
 */

#include <iostream>
#include <string>

using namespace std;

int main(){

	// Variables to hold original user input, summation of numbers, number of digits, current digit, multiplied number
	int input, sum, temp, curr, digits, mult;
	sum = 0;
	digits = 0;
	curr = 0;

	//get user input
	cin >> input;

	//copy input into temporary
	temp = input;

	//determine n numbers
	while (temp != 0){
		temp /= 10;
		digits++;
	}

	//reset temporary to input
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
