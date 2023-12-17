/*
* Copyright (c) 2023 Mohammad Abbasi <mohammad.v184@gmail.com>
*
* IRValidator is free software; you can redistribute it and/or modify
* it under the terms of the MIT license. See LICENSE for details.
*/

#include <stdio.h>
#include <assert.h>

#include "../card.h"

void test_is_valid_card() {
    // Test valid card
    const char *valid_card = "6221061049447982";
    card_result result = is_valid_card(valid_card);
    assert(result.isValid == 1);
    printf("Test case 1 passed.\n");

    // Test invalid card
    const char *invalid_card = "9876543210123456";
    result = is_valid_card(invalid_card);
    assert(result.isValid == 0);
    printf("Test case 2 passed.\n");

    // Test card with incorrect length
    const char *invalid_length_card = "123456789012345";
    result = is_valid_card(invalid_length_card);
    assert(result.err == CARD_LENGTH_ERROR);
    printf("Test case 3 passed.\n");
}

