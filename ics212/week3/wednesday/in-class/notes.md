# define

It is used to create symbolic constants, meant to create macros and listed at the top of the code. The preprocessor uses this and replaces all occurances of the 'identifier' with 'replacement-text' that aren't string literals (strings with double quotes around them).

- #define identifier replacement-text

creates names of constants, requires no semi colon, cannot redefine these constants.

also, ability to create macros

# numbers and operators in C

Depending on the machine, the maximum amount of integers, floats, and character depends on the bit level of the machine.

Floats are represented by 3 parts: sign, exponent, mantissa.

Integers are binary numbers

super small floats that are too small to be stored are underflowed, numbers too big are overflowed.

pre increment operators: increments and returns this new value
post increment operators: increments and returns the value before increment

implicit and explicit conversion is where we mess with integers and floats. Where moving to floats or working with floats allows good percision(implicit) and moving to integers or working with integers loses percision(explicit)

# Formatting Output

string versions and number versions of a character ('3' vs 3) are two entirely different characters
