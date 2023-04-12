#include "header.h"

/**
  * _131_dail - This is the Initialization
  * The very first option that get to users
  * Just assume it as if you are dailling *131#
  * On your MTN Line.
  *
  * Return Alway Success
  */

void _131_dail(void)
{
	printf("\nWelcome to MTN Self Service\n");
	printf("Choose from the options below to purchase a data bundle\n");

	int i;
	int num, input;
	char *opt[] = {"1. Data Plans", "2. Social Bundles",
			"3. Balance Check", "4. Roaming/Int'l",
			"5. Borrow Credit/Recharge", "6. Gift Data",
			"7. Video Packs", "8. Hot Deals"};

	num = sizeof(opt) / sizeof(opt[0]);
	for (i = 0; i < num; i++)
		printf("%s\n", opt[i]);

	printf("Input: ");
	scanf("%d", &input);

	/* Conditions, maybe I should consider suing case instead of nested
	 if statements*/
	if (input == 1)
	{
		data_plan();
	}
	if (input == 2)
	{
		social_bund();
	}
	if (input == 3)
	{
		balance();
	}
	if (input == 4)
	{
		roaming();
	}
	if (input == 5)
	{
		borrow();
	}
	if (input == 6)
	{
		gift();
	}
	if (input == 7)
	{
		video_pack();
	}
	if (input == 8)
	{
		hot_deal();
	}
	else
		printf("\nYou've selected an invalid option\n");
		printf("Program Has Terminated\n");
}
