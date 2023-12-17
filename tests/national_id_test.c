/*
* Copyright (c) 2023 Mohammad Abbasi <mohammad.v184@gmail.com>
*
* IRValidator is free software; you can redistribute it and/or modify
* it under the terms of the MIT license. See LICENSE for details.
*/

#include <stdio.h>
#include <assert.h>

#include "../national_id.h"

void test_is_valid_national_id() {
    // Test valid national ID
    const char *valid_id = "1111111111";
    national_id_result result = is_valid_national_id(valid_id);
    assert(result.isValid == 1);
    printf("Test case 1 passed.\n");

    // Test invalid national ID
    const char *invalid_id = "2187654320";
    result = is_valid_national_id(invalid_id);
    assert(result.isValid == 0);
    printf("Test case 2 passed.\n");

    // Test national ID with incorrect length
    const char *invalid_length_id = "123456789";
    result = is_valid_national_id(invalid_length_id);
    assert(result.err == NATIONAL_ID_LENGTH_ERROR);
    printf("Test case 3 passed.\n");
}

