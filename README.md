This is a ported version of [RealPaver 0.4](http://pagesperso.lina.univ-nantes.fr/~granvilliers-l/realpaver/) that can be compiled for Mac OS X. It is partly based on [a similar project on github](https://github.com/lcgutierrez/Realpaver-0_4-Mac)

To build and install realpaver, go to the root directory and simply run the configure script and make:

```bash
# ./configure
# make
```


## Original README

RealPaver release 0.4
  Solving Nonlinear Constraints by Interval Computations


OVERVIEW

  RealPaver is a modeling language for solving mixed-integer nonlinear
  constraint systems.

  Given a system of nonlinear constraints over the real numbers, it
  computes a paving of the solution set. A paving is a union of Cartesian
  product of interval domains (boxes) enclosing the solution set.

  The solving engine of RealPaver implements a branch-and-prune algorithm
  that alternates reduction steps of variable domains by means of
  constraint consistency techniques and bisection steps.

  It is distributed under the BSD License. See the accompanying
  COPYRIGHT file for more details.


HARDWARE AND SOFTWARE REQUIREMENTS

  The compilation of RealPaver requires a recent ANSI C compiler,
  e.g., gcc 2.95.2, and GNU make. To date, RealPaver is known to
  compile on ix86 computers under Linux, Sun Sparc computers under
  Solaris 2.5 and SGI computers under IRIX 6.5.


DOCUMENTATION

  Please read the user's manual.


BUG REPORTS

  Please report bugs to Laurent Granvilliers:

    LINA - Facult� des Sciences
    2, rue de la Houssini�re
    B.P. 92208
    44322 Nantes Cedex 3 - France

    Laurent.Granvilliers@lina.univ-nantes.fr
