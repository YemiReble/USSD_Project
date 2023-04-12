#include "header.h"

/**
  * _option - Five Functions that will return some Options
  * This is a test function and will be rendered
  * useless later in the program
  *
  */

void _option(void)
{
	printf("-------------------------------------------------------------\n");
	printf("Program is successful\n");
}

/**
  * data_plan - This section is for the data plan section
  * No Parameters is given
  * This function returns void
  *
  * Return: Always Success
  */

void data_plan(void)
{
	printf("-------------------------------------------------------------\n");
	printf("Data Plans:\n");

	int i;
	int size, input;
	char *data[] = {"1. Daily", "2. Weekly", "3. Monthly", "4. 2-3Month",
			"5. Always ON Plan", "6. Broadband Plans",
			"7. Family Packs", "8. Hot Deals", "9. 5G Plans",
			"99. Next", "0. Back"};

	size = sizeof(data) / sizeof(data[0]);
	for (i = 0; i < size; i++)
		printf("%s\n", data[i]);

	/* Taking further input from user */
	printf("Input: ");
	scanf("%d", &input);

	/* Conditions */
	if (input == 99)
	{
		data_bund_more();
	}
	if (input == 0)
	{
		_131_dail();
	}
}

/**
  * data_bund_more - This is the continuation of Data Plan
  * This function returns the remaining of the above function
  *
  * Return Always Success.
  */

void data_bund_more(void)
{
	printf("-------------------------------------------------------------\n");
	printf("More Data Plan\n");

	int i, size, input;
	char *data[] = {"10. FREE YouTube", "11. Manage Data", "0. Back"};

	size = sizeof(data) / sizeof(data[0]);
	for (i = 0; i < size; i++)
		printf("%s\n", data[i]);

	/* Taking further input from user */
	printf("Input: ");
	scanf("%d", &input);

	/* Conditions */
	if (input == 0)
	{
		data_plan();
	}
}

/**
  * social_bund - This is the function that handles the
  * social bundle of your data selection
  * No Parameter is given
  * This function returns not value
  *
  * Return: Always Success.
  */

void social_bund(void)
{
	printf("-------------------------------------------------------------\n");
	printf("Social Bundle\n");

	int i, size, input;
	char *social[] = {"1. WhatsApp", "2. Facebook", "3. Instagram", "4. TikTok",
			"5. Ayoba", "6. All Social Bundles",
			"7. YouTube, Instagram, and TikTok",
			"8. Opera Mini & News",
			"9. Social Mega Bundle", "99. Next",};

	size = sizeof(social) / sizeof(social[0]);
	for (i = 0; i < size; i++)
		printf("%s\n", social[i]);

	/* Taking further input from user */
	printf("Input: ");
	scanf("%d", &input);

	/* Condition */
	if (input == 99)
	{
		social_more();
	}
}


/**
  * social_more - This function retuns the rmaining option under
  * social bund function
  *
  * Return: Always Success
  */

void social_more(void)
{
	printf("-------------------------------------------------------------\n");
	printf("More Social Plans\n");

	int i, size, input;
	char *s_more[] = {"10. 2Go", "11. WeChat", "12. Eskimi", "0. Back"};

	size = sizeof(s_more) / sizeof(s_more[0]);
	for (i = 0; i < size; i++)
		printf("%s\n", s_more[i]);

	/* Taking further input from user */
	printf("Input: ");
	scanf("%d", &input);

	/* Conditions */
	if (input == 0)
	{
		social_bund();
	}
}
