# More on Makefiles

- Gcc is a C compiler which contains many flags to help warn or specify versions of the C language.
- Within makefiles we can define macros and rules:
  Macros: like assigning a variable with a value
  Rules: functions that applies to all files of a certain type when run.

# Relational Operators

- greater than (>), less than (<), greater than or equal to (>=), and less than or equal to (<=) will return int 0 (false) or 1 (true).

* There are no boolean datatypes in C.

# Equality Operators

- equal to (==) and not equal to (!=) will return 0 or 1.

- !variable means not that variable. Equivalent to 0 == variable.

# Logical Operators

1. And : &&
2. Or : ||
3. Not : !

- they follow their corresponding logic gate output and input.

# If Statements

- statments which contains conditions that if true statements within itself.

* comparing floating point numbers, do not use an equality operator but decide of threshold of percision and check.
  double threshold = 0.001;
  if ( (double1 - double2) < threshold ) {
  printf("Close to equal");
  }

- if statements can be used with ranges also, the use of greater than or less than.
- C is simple and (a < b < c) in normal math is seen differently by C. Where you have to separate each expression in their own parenthesis. In this case, separate expressions by parenthesis and compare them with &&.

* ( (10 < 5) && (5 < 11) ) is the desired result for C of the usual (10 < 5 < 11).

* This also applies for other relational operators.
* (True and True and False) in C stops once True (1) or False (0) is determined, which in this case would just return True (1) as the last part C is ignored.
* Therefore, it would have to be written... ( (True && True ) && ( True && and False) ): returning the true result of False (0).

# Switch Statements

- for discrete values and works only with characters and integers
- break transfer the contorl outside the switch structure. And if no break is present the code will exeute until a break or the switch statement ends.

# switch vs if

- switch is for discrete values...
- if is for ranges of values
