/*
* Copyright (c) 2023 Mohammad Abbasi <mohammad.v184@gmail.com>
*
* IRValidator is free software; you can redistribute it and/or modify
* it under the terms of the MIT license. See LICENSE for details.
*/

#include <stdio.h>
#include <assert.h>

#include "../phone.h"

void test_is_valid_phone() {
    // Valid phone numbers
    assert(is_valid_phone("09123456789").isValid == 1);
    assert(is_valid_phone("+989123456789").isValid == 1);
    assert(is_valid_phone("00989123456789").isValid == 1);
    printf("Test case 1 passed.\n");

    // Invalid phone numbers
    assert(is_valid_phone("1234567890").isValid == 0);
    assert(is_valid_phone("091234567890").isValid == 0);
    assert(is_valid_phone("+9891234567890").isValid == 0);
    assert(is_valid_phone("009891234567890").isValid == 0);
    assert(is_valid_phone("0912345678a").isValid == 0);
    assert(is_valid_phone("+98912345678a").isValid == 0);
    assert(is_valid_phone("0098912345678a").isValid == 0);
    printf("Test case 2 passed.\n");
}
