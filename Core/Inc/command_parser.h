/*
 * command_parser.h
 *
 *  Created on: Jan 13, 2021
 *      Author: Andres
 */

#ifndef INC_COMMAND_PARSER_H_
#define INC_COMMAND_PARSER_H_

#include "main.h"
#include "math.h"
#include "stdbool.h"

void parse_line(char* line, uint8_t len);
double parse_code(char code, char* line, uint8_t len);



#endif /* INC_COMMAND_PARSER_H_ */
