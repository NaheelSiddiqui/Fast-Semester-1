#include <stdio.h>

int main() {
	char input, encryption, decryption;

	printf("Input a Character: ");
	scanf("%c", &input);

	encryption = ~input;
	decryption = ~encryption;
	
	printf("Result after Encryption is %x", encryption);
	printf("\nResult after Decryption is %c", decryption);

    return 0;
}