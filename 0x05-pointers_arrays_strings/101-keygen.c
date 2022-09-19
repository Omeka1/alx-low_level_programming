#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * password - generates a random password
 * @password: int
 * Return: 0
 */

int password(int password) {
char list[] = "1234567890qwertyuiopasdfghjklzxcvbnm!QWERTYUIOPASDFGHJKLZXCVBNM";
printf("\t");
for(int i = 0; i < password; i++) {
    printf("*");
}
printf("\n");
printf("\t");
srand(time(NULL));
for(int i = 0; i < password; i++) {
    printf("%c", list[rand() % (sizeof list - 1)]);
}
printf("\n");
printf("\t");
for(int i = 0; i < password; i++) {
    printf("*");
}
printf("\n");
}

/**
 * main - writes passwords
 * @void: Empty parameter list for main.
 *
 * Description: Writes ask for length and generate a random number
 *
 * Return: 0 for success
*/
int main(void) {
int password_length;
printf("\n\t*********************************\n\n");
printf("\tWelcome to the password generator\n\n");
printf("\t*********************************\n");
printf("\n\tEnter length of the password = ");
scanf("%d", &password_length);
printf("\n");
printf("\n");
password(password_length);
return 0;
}
