/*
* Copyright (c) 2023 Mohammad Abbasi <mohammad.v184@gmail.com>
*
* IRValidator is free software; you can redistribute it and/or modify
* it under the terms of the MIT license. See LICENSE for details.
*/

#include <string.h>
#include "card.h"

const char CARD_VALID_FIRST_DIGITS[] = {54,53,52}; // 6,5,4

card_result is_valid_card(const char *card_number) {
    card_result result;
    result.isValid = 0;
    // Check length
    if (strlen(card_number) != 16) {
        result.err = CARD_LENGTH_ERROR;
        return result;
    }

    for (int i = 0; i < (int)sizeof(CARD_VALID_FIRST_DIGITS); i++) {
        if (card_number[0] == CARD_VALID_FIRST_DIGITS[i]) {
            break;
        }
        if (i == (sizeof(CARD_VALID_FIRST_DIGITS)-1)) {
            result.err = CARD_IS_NOT_VALID;
            return result;
        }

    }

    int sum = 0;
    for (int i = 0; i < 16; i++) {
        int digit = card_number[i] - '0';
        if (i % 2 == 0) {
            digit *= 2;
            if (digit > 9) {
                digit -= 9;
            }
        }
        sum += digit;
    }
    result.isValid = sum % 10 == 0;
    if (!result.isValid) {
        result.err = CARD_IS_NOT_VALID;
    }
    return result;
}
