#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - check - string there are digit
 * @str: array str
 *
 * Return: Always 0 (Success)
 */

int check_num(char *str)
{
unsigned int count;
count = 0;
while (count < strlen(str)) /*count string*/
{
if (!isdigit(str[count])) /*check if str there are digit*/
{
return (0);
}
return (1);
}
/**
 * main - Print the name of the program
 * @argc: Count arguments
 * @argv: Arguments
 *
 * Return: Always 0 (Success)
 */
int __attribute__((unused)) main(int argc, char* argv[])
{
int sum = 0;
int count;
count = 1;
int str_to_int;
while (count < argc) /*Goes through the whole array*/
{
if (check_num(argv[count]))
{
str_to_int = atoi(argv[count]); /*ATOI --> convert string to int*/
sum += str_to_int;
}
else
{
printf("Error\n");
return (1);
}
count++;
}
printf("%d\n", sum); /*print sum*/
return (0);
}
return (0);
}	
