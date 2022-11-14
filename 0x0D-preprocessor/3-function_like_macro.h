#ifndef FUNCTION_LIKE_MACRO
#define FUNCTION_LIKE_MACRO
/**
 * _putchar - Don't delete _putchar, its used for testing
 * @c: character to be printed
 *
 * Description: It doesn't affect compilation or checker testing but will crash
 * the ALX tool tester if removed.
 * Return: 0 (Success) or 1 (Failure).
 */
int _putchar(char c);
#define ABS(x) ((x) < 0 ? -1 * (x) : (x))

#endif
