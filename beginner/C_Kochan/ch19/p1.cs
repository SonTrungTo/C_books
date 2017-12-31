// Program 19.4: Simple program with fractions -- C# version
using System;

class Fraction
{
  private int numerator;
  private int denominator;

  public int Numerator
  {
    set
    {
      numerator = value;
    }
    get
    {
      return numerator;
    }
  }

  public int Denominator
  {
    set
    {
      denominator = value;
    }
    get
    {
      return denominator;
    }
  }

  public void print()
  {
    Console.WriteLine("The value of the fraction is {0}/{1}.\n",
    numerator, denominator);
  }
}

class example
{
  public static void Main()
  {
    Fraction myFrac = new Fraction();

    myFrac.Numerator = 1;
    myFrac.Denominator = 3;

    myFrac.print();
  }
}
