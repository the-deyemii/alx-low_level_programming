#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H 
/**
 * _putchar - Don't delete _putchar, its used for testing
 * @c: character to be printed
 *
 * Description: It doesn't affect compilation or checker testing but will crash
 * the ALX tool tester if removed.
 * Return: 0 (Success) or 1 (Failure).
 */
int _putchar(char c);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
#endif
