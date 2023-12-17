/*
* Copyright (c) 2023 Mohammad Abbasi <mohammad.v184@gmail.com>
*
* IRValidator is free software; you can redistribute it and/or modify
* it under the terms of the MIT license. See LICENSE for details.
*/

#ifndef IRIDVALIDATOR_NATIONAL_ID_H
#define IRIDVALIDATOR_NATIONAL_ID_H

typedef enum {
    NATIONAL_ID_LENGTH_ERROR,
    NATIONAL_ID_IS_INVALID,
} national_id_error;


typedef struct {
    int isValid;
    national_id_error err;
} national_id_result;


extern national_id_result is_valid_national_id(const char *national_id);
#endif //IRIDVALIDATOR_NATIONAL_ID_H