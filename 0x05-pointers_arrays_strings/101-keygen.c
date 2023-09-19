#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 13

int main(void)
{
char password[PASSWORD_LENGTH + 1]; /* +1 for the null terminator */
const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
int i;
int index;

/* Seed the random number generator with the current time */
srand(time(NULL));

/* Generate a random password */
for (i = 0; i < PASSWORD_LENGTH; i++)
{
	index = rand() % (sizeof(charset) - 1);
	password[i] = charset[index];
}
password[PASSWORD_LENGTH] = '\0';

/* Print the generated password */
printf("%s\n", password);

return (0);
}
