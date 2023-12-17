# IRValidator
IRValidator is a library that provides validation for various Iranian identification systems. It includes validation for cards, national IDs, and phone numbers.

## Building
To build the library, you need a C compiler and the make utility. Once you have these installed, you can build the library by running:
```bash
make all
```

This will compile the source files and create a static library libirvalidator.a.

## Testing
To run the tests for the library, use the make test command:
```bash
make test
```

This will compile the test source files, link them with the library, and run the tests.

## Installation
To install the library, use the make install command:
```bash
make install
```
Please note that you might need to run this command with sudo or as root, depending on your system's configuration.

## Usage
To use the library in your C programs, include the appropriate header files and link with the library. For example:
```c
#include <irvalidator/card.h>
#include <irvalidator/national_id.h>
#include <irvalidator/phone.h>

int main() {
    // Validate a card number
    char *card_number = "6274129000000000";
    if (is_valid_card(card_number)) {
        printf("Card number is valid\n");
    } else {
        printf("Card number is invalid\n");
    }
    
    // Validate a national ID
    char *national_id = "0012345678";
    if (is_valid_national_id(national_id)) {
        printf("National ID is valid\n");
    } else {
        printf("National ID is invalid\n");
    }
    
    // Validate a phone number
    char *phone_number = "09123456789";
    if (is_valid_phone(phone_number)) {
        printf("Phone number is valid\n");
    } else {
        printf("Phone number is invalid\n");
    }
    
    return 0;
}
```
When compiling your program, don't forget to link with the library:
```bash
gcc your_program.c -lirvalidator -o your_program
```

## Cleaning Up
You can clean up the build artifacts using the make clean command:
```bash
make clean
```

## Credits

- [Mohammad Abbasi](https://github.com/mohammadv184)
- [All Contributors](../../contributors)

## License

The MIT License (MIT). Please see [License File](LICENSE) for more information.