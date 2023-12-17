/*
* Copyright (c) 2023 Mohammad Abbasi <mohammad.v184@gmail.com>
*
* IRValidator is free software; you can redistribute it and/or modify
* it under the terms of the MIT license. See LICENSE for details.
*/

#ifndef IRIDVALIDATOR_CARD_H
#define IRIDVALIDATOR_CARD_H

typedef enum {
    CARD_LENGTH_ERROR,
    CARD_IS_NOT_VALID,
} card_result_error;

typedef struct {
    int isValid;
    card_result_error err;
} card_result;


extern card_result is_valid_card(const char *card_number);
#endif //IRIDVALIDATOR_CARD_H
