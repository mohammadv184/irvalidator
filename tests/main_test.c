/*
* Copyright (c) 2023 Mohammad Abbasi <mohammad.v184@gmail.com>
*
* IRValidator is free software; you can redistribute it and/or modify
* it under the terms of the MIT license. See LICENSE for details.
*/

#include "card_test.c"
#include "national_id_test.c"
#include "phone_test.c"

int main(void) {
    printf("Running tests...\n");
    printf("Testing is_valid_card()\n");
    test_is_valid_card();
    printf("Testing is_valid_national_id()\n");
    test_is_valid_national_id();
    printf("Testing is_valid_phone()\n");
    test_is_valid_phone();
    return 0;
}