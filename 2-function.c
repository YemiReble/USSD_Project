#include "header.h"

/**
  * balance - This section is for the Balance section
  * No Parameters is given
  * This just prints a bunch of strings
  * This function returns void
  *
  * Return: Always Success
  */
void balance(void)
{
	/* Maybe I can later adjust this section to generate */
	/* some random float as the remaining data plan */
	printf("-------------------------------------------------------------\n");
	printf("Your data balance:\n");
	printf("45GB Montly Always On Plan: 3.55GB, expires: 07/04/2023\n");
}

/**
  * roaming - This section is for the data roaming section
  * No Parameters is given
  * This function returns void
  *
  * Return: Always Success
  */
void roaming(void)
{
	printf("-------------------------------------------------------------\n");
	printf("Roaming Plans\n");

	int i, size, input;
	char *roam[] = {"1. TravelPass Plans", "2. Data Hybrid",
			"3. Inflight Roaming Data",
			"4. Free Incoming roaming call",
			"5. Int'l Calling Bundle",
			"6. Roaming Balance Check"};

	size = sizeof(roam) / sizeof(roam[0]);
	for (i = 0; i < size; i++)
		printf("%s\n", roam[i]);

	printf("Input: ");
	scanf("%d", &input);

	/* Conditions */
}

/**
  * borrow - This section is for the Borrow (data plan) section
  * No Parameters is given
  * This function returns void
  *
  * Return: Always Success
  */
void borrow(void)
{
	printf("-------------------------------------------------------------\n");
	printf("Borrow Somthing\n");

	int i, size, input;
	char *borw[] = {"1. Borrow Airtime", "2. Borrow Data",
			"3. Recharge", "0. Back"};

	size = sizeof(borw) / sizeof(borw[0]);
	for (i = 0; i < size; i++)
		printf("%s\n", borw[i]);

	/* Take some Input from user */
	printf("Input: ");
	scanf("%d", &input);

	/* Conditions */
	if (input == 0)
	{
		_131_dail();
	}
	if (input == 1)
	{
		printf("You are not eligible to borrow Airtime\n");
	}
	if (input == 2)
	{
		printf("You are not eligible to borrow a Data Plan\n");
	}
	if (input == 3)
	{
		printf("Kindly recharge your line through our online streams\n");
		printf("Visit: https://mtnonline.com.ng/recharge\n");
		printf("or\n");
		printf("Use MTN Diamond Yellow Acc. via your prefered bank app\n");
	}
	else
		printf("Thanks for choosing MTN\n");
}

/**
  * gift - This is the section that holds the gift strings
  * it returns the program to the main menu if the user
  * choose to do so.
  *
  * Return: Alway Success
  */

void gift(void)
{
	printf("-------------------------------------------------------------\n");
	printf("Gift Plans\n");

	int i, size, input;
	char *gif[] = {"1. Transfer from Data Balance", "2. Buy for a Friend",
			"3. Request from a Friend", "4. View Pending Request",
			"0. Back", "99. MainMenu",};

	size = sizeof(gif) / sizeof(gif[i]);
	for (i = 0; i < size; i++)
		printf("%s\n", gif[i]);

	/* Ask for input */
	printf("Input: ");
	scanf("%d", &input);

	/* Conditions */
	if (input == 0)
	{
		data_plan();
	}
	if (input == 99)
	{
		_131_dail();
	}
	else
		printf("You've chose the wrong option\n");
		printf("Thank you for choosing MTN\n");
}

/**
  * video_pack - This is a section that holds the video stings
  * this part dose not allow user to return back to the main
  * menu but it will terminate the program on wrong request.
  *
  * Return: Always success
  */

void video_pack(void)
{
	printf("-------------------------------------------------------------\n");
	printf("Video Streaming Packs\n");

	int i, size, input;
	char *video[] = {"1.YouTube Video Packs",
			"2. 1GB (YouTube Only) + 500MB (Data access)",
			"3. Showmax Mobile"};

	size = sizeof(video) / sizeof(video);
	for (i = 0; i < size; i++)
		printf("%s\n", video[i]);

	/* Ask for input */
	printf("Input: ");
	scanf("%d", &input);
}
