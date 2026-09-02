#ifndef LAB_H
#define LAB_H

/** * @brief Returns a greeting message.
 *
 * This function returns a string that contains a greeting message.
 * The string is allocated with malloc and should be freed by the caller.
 * @param name The name to include in the greeting.
 * @return A greeting string.
 */
char* get_greeting(const char* restrict name);

/**
 * @brief Multiplies two integers.
 * 
 * This function takes two integers as input and returns their product.
 * 
 * @param a The first integer.
 * @param b The second integer.
 * @return The product of a and b.
 */
int multiply(int a, int b);

/**
 * @brief Incorrectly sums two integers.
 * 
 * This function takes two integers as input and returns their sum.
 * However, it is intentionally implemented incorrectly for testing purposes.
 * 
 * @param a The first integer.
 * @param b The second integer.
 * @return The sum of a and b (incorrectly implemented).
 */
int incorrect_sum(int a, int b);

#endif // LAB_H
