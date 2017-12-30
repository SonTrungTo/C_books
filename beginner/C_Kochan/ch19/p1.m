// Example 19.2: Program to work with fractions - Objective C version
// However this program is extremely outdated since the objc/Object.h
//has been deprecated since October, 2007.
// Hence, the program does not work!
#import <stdio.h>
#import <objc/Object.h>

// ------- @interface section -------
@interface Fraction: Object
{
  int numerator;
  int denominator;
}
-(int) numerator;
-(int) denominator;
-(void)  setNumerator: (int) n;
-(void)  setDenominator: (int) d;
-(void)  print;

@end

// ------- @implementation section ------
@implementation Fraction;
// getters
-(int) numerator
{
  return numerator;
}

-(int) denominator
{
  return denominator;
}

// setters
-(void) setNumerator: (int) num
{
  numerator = num;
}

-(void) setDenominator: (int) denom
{
  denominator = denom;
}

// other
-(void) print
{
  printf("The value of the fraction is %i/%i\n", numerator,
  denominator);
}

@end

//--------- program section ------------

int main(void) {
  Fraction *myFrac;

  myFrac = [Fraction new];

  [myFrac setNumerator: 1];
  [myFrac setDenominator: 3];

  printf("The numerator is %i, and the denominator is %i\n",
[myFrac numerator], [myFrac denominator]);
  [myFrac print];

  [myFrac free];

  return 0;
}
