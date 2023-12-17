/*
* Copyright (c) 2023 Mohammad Abbasi <mohammad.v184@gmail.com>
*
* IRValidator is free software; you can redistribute it and/or modify
* it under the terms of the MIT license. See LICENSE for details.
*/

#include <regex.h>
#include <string.h>
#include <stdio.h>
#include "phone.h"

phone_result is_valid_phone(const char *phone){
    phone_result result;
    result.isValid = 0;
    // Check length
    if (strlen(phone) < 11) {
        result.err = PHONE_LENGTH_ERROR;
        return result;
    }

    regex_t regex;

    if (regcomp(&regex, "^(\\+98|0098|0)[0-9]{10}$", REG_EXTENDED)) {
        printf("Could not compile regex\n");
        result.err = PHONE_IS_INVALID;
        regfree(&regex);
        return result;
    }

    if (regexec(&regex, phone, 0, NULL, 0)) {
        result.err = PHONE_IS_INVALID;
        regfree(&regex);
        return result;
    }

    regfree(&regex);

    result.isValid = 1;
    return result;
}