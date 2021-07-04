/*
 * command_parser.c
 *
 *  Created on: Jan 13, 2021
 *      Author: Andres
 */

#include "command_parser.h"

void parse_line(char* line, uint8_t len)
{
    uint8_t i = 0;
    switch (line[0])
    {
    case 'G':
        switch (line[2])
        {
        case '1':
            //line
            double x = parse_code('X', line, len);
            double y = parse_code('Y', line, len);
            draw_line(actual_x, actual_y, x, y, true);
            break;
        
        default:
            break;
        }
        break;
    
    default:
        break;
    }
}

double parse_code(char code, char* line, uint8_t len)
{
    uint8_t i = 0;

    while (line[i] != code && i < len)
    {
        i++;
    }

    if (i == len)
        return -1;

    return atof(line + i + 1);
}