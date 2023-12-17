/*
* Copyright (c) 2023 Mohammad Abbasi <mohammad.v184@gmail.com>
*
* IRValidator is free software; you can redistribute it and/or modify
* it under the terms of the MIT license. See LICENSE for details.
*/

#ifndef IRIDVALIDATOR_PHONE_H
#define IRIDVALIDATOR_PHONE_H
typedef enum {
    PHONE_LENGTH_ERROR,
    PHONE_IS_INVALID,
} phone_error;


typedef struct {
    int isValid;
    phone_error err;
} phone_result;


extern phone_result is_valid_phone(const char *phone);
#endif //IRIDVALIDATOR_PHONE_H