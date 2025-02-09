#include "string_operations.h"
#include <ctype.h>

void convertToUppercase(char* str) {
	for (int i = 0; str[i] != '\0'; i++) {
		str[i] = toupper((unsigned char)str[i]);
	}
}

void convertToLowercase(char* str) {
	for (int i = 0; str[i] != '\0'; i++) {
		str[i] = tolower((unsigned char)str[i]);
	}
}

size_t getLength(const char* str) {
	size_t length = 0;

	while (str[length] != '\0') {
		length++;
	}

	return length;
}
