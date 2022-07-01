#ifndef __OP_H__
#define __OP_H__

/**
 * @brief The structure pointer that stores the operation state.
 **/
typedef struct op_s* op;

/**
 * @brief Standard unsigned integer type.
 **/
typedef unsigned int uint;

/**
 * @brief Sum of 2 strings numbers
 * @param num1 The first string number
 * @param num2 The second string number
 * @return The sum in a string
 **/
char *addition(op var, char* num1, char* num2);


/**
 * @brief Difference between 2 strings numbers
 * @param num1 The first string number
 * @param num2 The second string number
 * @return The difference in a string
 **/
char *substraction(op var, char* num1, char* num2);

/**
 * @brief Product of 2 strings numbers
 * @param num1 The first string number
 * @param num2 The second string number
 * @return The product in a string
 **/
char *multiplication(op var, char* num1, char* num2);

/**
 * @brief Quotient of 2 strings numbers
 * @param num1 The first string number
 * @param num2 The second string number
 * @return The quotient in a string
 **/
char *division(op var, char* num1, long num2);

#endif