#include <stdio.h>
#include <stdlib.h>

/* Function to check if a given string contains only digits */
int is_valid_number(char *num) {
	for (int i = 0; num[i] != '\0'; i++) {
		if (num[i] < '0' || num[i] > '9') {
			return 0;
		}
	}
	return 1;
}

/* Function to multiply two numbers represented as strings */
char *multiply(char *num1, char *num2) {
	int len1 = 0, len2 = 0, len_result = 0;
	int *result, carry = 0, prod = 0;

	/* Calculate the lengths of the input strings */
	while (num1[len1] != '\0') {
		len1++;
	}
	while (num2[len2] != '\0') {
		len2++;
	}
	len_result = len1 + len2;

	/* Allocate memory for the result */
	result = calloc(len_result, sizeof(int));
	if (result == NULL) {
		printf("Error: Memory allocation failed\n");
		exit(98);
	}

	/* Perform the multiplication */
	for (int i = len1 - 1; i >= 0; i--) {
		carry = 0;
	for (int j = len2 - 1; j >= 0; j--) {
	prod = (num1[i] - '0') * (num2[j] - '0') + result[i + j + 1] + carry;
	carry = prod / 10;
	result[i + j + 1] = prod % 10;
	}
	result[i] += carry;
	}

	/* Convert the result to a string */
	char *result_str = malloc(len_result + 1);
	if (result_str == NULL) {
		printf("Error: Memory allocation failed\n");
		exit(98);
	}
	int i = 0;
	while (i < len_result && result[i] == 0) {
		i++;
	}
	if (i == len_result) {
		result_str[0] = '0';
		result_str[1] = '\0';
	} else {
		int j = 0;
		while (i < len_result) {
			result_str[j] = result[i] + '0';
			i++;
			j++;
		}
		result_str[j] = '\0';
	}

	/* Free memory and return the result */
	free(result);
	return result_str;
}

int main(int argc, char **argv) {
	if (argc != 3 || !is_valid_number(argv[1]) || !is_valid_number(argv[2])) {
		printf("Error\n");
		exit(98);
	}
	char *num1 = argv[1];
	char *num2 = argv[2];
	char *result = multiply(num1, num2);
	printf("%s\n", result);
	free(result);
	return 0;
}
