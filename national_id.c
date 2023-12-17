/*
* Copyright (c) 2023 Mohammad Abbasi <mohammad.v184@gmail.com>
*
* IRValidator is free software; you can redistribute it and/or modify
* it under the terms of the MIT license. See LICENSE for details.
*/

#include <string.h>
#include "national_id.h"


national_id_result is_valid_national_id(const char *national_id) {
    national_id_result result;
    result.isValid = 0;
    // Check length
    if ((int)strlen(national_id) != 10) {
        result.err = NATIONAL_ID_LENGTH_ERROR;
        return result;
    }

    int sum = 0;
    for (int i = 0; i < 9; i++) {
        int digit = national_id[i] - '0';
        sum += digit * (10 - i);
    }
    int last_digit = national_id[9] - '0';
    int remainder = sum % 11;
    if (remainder < 2) {
        result.isValid = last_digit == remainder;
    } else {
        result.isValid = last_digit == 11 - remainder;
    }
    if (!result.isValid) {
        result.err = NATIONAL_ID_IS_INVALID;
    }
    
    return result;
}