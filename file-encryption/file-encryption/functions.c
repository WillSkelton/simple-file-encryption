

/*
Function: int isPrime(const int num)
Description: Determines whether or not the passed in number is prime
Parameters: any integer greater than 1
Returns: boolean value (1 = num is prime, 0 = num is not prime)
Preconditions:
Postconditions:
*/

int isPrime(const int num) {

	//if num % any number (1<i<num) is exactly 0, then num is not prime
	for (int i = 2; i < num; ++i) {
		if (num % i == 0) {
			return 0;
		}
	}

	return 1;
}


/*
Function: int getPrime(void) 
Description: Generates and returns a random prime integer between 0 and 100
Parameters: none
Returns: a random prime integer between 0 and 100
Preconditions:
Postconditions:
*/

int getPrime(void) {
	int found = 0, num = 0;

	//continue generating random numbers until one is prime
	while (!found) {
		num = rand() % 100 + 1;

		//check if num is prime, otherwise, repeat loop
		if (isPrime(num)) {
			//update exit loop condition
			found = !found;
		}
	}

	return num;
}