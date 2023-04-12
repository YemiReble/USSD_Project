#include "header.h"

/**
  * hot_deal - This is the function that holds the
  * the offer that MTN has to offer their users
  *
  * Return: Alway Success
  */

void hot_deal(void)
{
	printf("-------------------------------------------------------------\n");
	printf("Data Offer\n");

	int i, input, size;
	char *deal[] = {"1. TopDeal4Me", "2. Data4Me", "3. Recharge4Me",
			"4. Combo4Me", "5. VAS4ME"};

	size = sizeof(deal) / sizeof(deal[0]);
	for (i = 0; i < size; i++)
		printf("%s\n", deal[i]);

	/* Take Input from users for further actions */
	printf("Input: ");
	scanf("%d", &input);

	/* Conditions */
}
