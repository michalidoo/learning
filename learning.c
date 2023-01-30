#include <stdio.h>

int main() {
	//printing
	printf("Hello world\n");
	
	//variables
	int firstInt = 4;
	printf("firstInt = %d\n", firstInt);
	firstInt = -9;
	printf("firstInt = %d\n", firstInt);
	firstInt = 107;

	//addition
	firstInt = firstInt + 2;
	printf("firstInt = %d\n", firstInt);
	firstInt += 2;
	printf("firstInt = %d\n", firstInt);

	//subtraction
	firstInt = firstInt - 3;
	firstInt -= 3;
	printf("firstInt = %d\n", firstInt);

	//multiplication
	firstInt = firstInt * 2;
	firstInt*=2;
	printf("firstInt = %d\n", firstInt);

	//division
	firstInt = firstInt / 2;
	firstInt/=2;
	printf("firstInt = %d\n", firstInt);

	//increment/decrement
	firstInt++;
	printf("firstInt = %d\n", firstInt);
	firstInt--;
	printf("firstInt = %d\n", firstInt);

	printf("\n");
	
	//characters
	char firstChar = 'M';
	printf("firstChar = %c\n", firstChar);
	firstChar++;
	printf("firstChar = %c\n", firstChar);

	printf("\n");
	
	//arrays
	int firstArray[6] = {5,2,7,1,6,8};
	int secondArray[] = {5,21,7,8};
	int thirdArray[9] = {5,32,7};
	printf("firstArray[0] = %d\n", firstArray[0]);
	printf("firstArray[1] = %d\n", firstArray[1]);
	printf("firstArray[2] = %d\n", firstArray[2]);
	printf("firstArray[3] = %d\n", firstArray[3]);
	printf("firstArray[4] = %d\n", firstArray[4]);
	printf("firstArray[5] = %d\n", firstArray[5]);

	//strings! (they're really just lists!)
	char firstString[] = {'M','i','c','h','a','l','i',0};
	char secondString[20] = "Michali is awesome!";
	printf("%s\n%s\n", firstString, secondString);
	
	
	return 0;
}