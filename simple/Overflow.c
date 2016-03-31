#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main()
{
	int i;
	char password[32], buffer[32];

	strcpy(password, "SuperSecretPassword");
	//printf("Address of the buffer is 0x%x\n", &buffer);
	//printf("Address of the password is 0x%x\n", &password);

	while(1)
	{
		printf("Please enter the password: ");
		scanf("%s", buffer);
		if(strcmp(buffer, password) == 0)
		{
			printf("Correct!\n");
			exit(1);
		}
		else printf("Wrong password!\n");
	}

	exit(0);
}
