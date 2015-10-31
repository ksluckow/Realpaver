/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
 
 Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
 Free Software Foundation, Inc.
 
 This program is free software; you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation; either version 2, or (at your option)
 any later version.
 
 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.
 
 You should have received a copy of the GNU General Public License
 along with this program; if not, write to the Free Software
 Foundation, Inc., 51 Franklin Street, Fifth Floor,
 Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
 part or all of the Bison parser skeleton and distribute that work
 under terms of your choice, so long as that work isn't itself a
 parser generator using the skeleton or a modified version thereof
 as a parser skeleton.  Alternatively, if you modify or redistribute
 the parser skeleton itself, you may (at your option) remove this
 special exception, which will cause the skeleton and the resulting
 Bison output files to be licensed under the GNU General Public
 License without this special exception.
 
 This special exception was added by the Free Software Foundation in
 version 2.2 of Bison.  */

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
/* Put the tokens into the symbol table, so that GDB and other debuggers
 know about them.  */
enum yytokentype {
    PRAGMACONSTANTS = 258,
    PRAGMADOMAINS = 259,
    PRAGMACONSTRAINTS = 260,
    PRAGMABISECTION = 261,
    BISECTIONCHOICE = 262,
    BISECTIONPARTS = 263,
    NOBISECTION = 264,
    BISECTIONCHOICERR = 265,
    BISECTIONCHOICELF = 266,
    BISECTIONCHOICEMN = 267,
    BISECTIONNUMBER = 268,
    BISECTIONSUBPAVING = 269,
    BISECTIONPOINTS = 270,
    PRAGMAMAXTIME = 271,
    MODE = 272,
    PRAGMAOUTPUT = 273,
    OUTPUTHULLMODE = 274,
    OUTPUTUNIONMODE = 275,
    OUTPUTDIGITS = 276,
    OUTPUTSTYLE = 277,
    OUTPUTBOUNDSTYLE = 278,
    OUTPUTMIDPOINTSTYLE = 279,
    OUTPUTSOLUTION = 280,
    OUTPUTALLSOLUTION = 281,
    PRAGMACONSISTENCY = 282,
    LOCALCONSISTENCY = 283,
    STRONGCONSISTENCY = 284,
    CONSISTENCYBC3 = 285,
    CONSISTENCYBC3Newton = 286,
    CONSISTENCYBC4 = 287,
    CONSISTENCYBC5 = 288,
    CONSISTENCYHC3 = 289,
    CONSISTENCYHC4 = 290,
    CONSISTENCYHC4I = 291,
    CONSISTENCYHC4Newton = 292,
    PRECISION2B = 293,
    IMPROVEMENT2B = 294,
    CONSISTENCY3B = 295,
    CONSISTENCYWEAK3B = 296,
    PRECISION3B = 297,
    PRECISION = 298,
    INDOM = 299,
    COMMA = 300,
    TWOPOINTS = 301,
    SCOLON = 302,
    COLON = 303,
    UNDERSCORE = 304,
    LSBR = 305,
    RSBR = 306,
    LBR = 307,
    RBR = 308,
    IDENT = 309,
    INTEGER = 310,
    FLOAT = 311,
    REALPOSINFINITY = 312,
    REALNEGINFINITY = 313,
    ADD = 314,
    SUB = 315,
    MUL = 316,
    DIV = 317,
    POW = 318,
    SQRT = 319,
    LOG = 320,
    EXP = 321,
    MINIMUM = 322,
    MAXIMUM = 323,
    COS = 324,
    SIN = 325,
    TAN = 326,
    COSH = 327,
    SINH = 328,
    TANH = 329,
    ACOS = 330,
    ASIN = 331,
    ATAN = 332,
    ACOSH = 333,
    ASINH = 334,
    ATANH = 335,
    PREV = 336,
    SUCC = 337,
    INTEGERTYPE = 338,
    REALTYPE = 339,
    NEWDATA = 340,
    EQU = 341,
    INF = 342,
    SUP = 343
};
#endif
/* Tokens.  */
#define PRAGMACONSTANTS 258
#define PRAGMADOMAINS 259
#define PRAGMACONSTRAINTS 260
#define PRAGMABISECTION 261
#define BISECTIONCHOICE 262
#define BISECTIONPARTS 263
#define NOBISECTION 264
#define BISECTIONCHOICERR 265
#define BISECTIONCHOICELF 266
#define BISECTIONCHOICEMN 267
#define BISECTIONNUMBER 268
#define BISECTIONSUBPAVING 269
#define BISECTIONPOINTS 270
#define PRAGMAMAXTIME 271
#define MODE 272
#define PRAGMAOUTPUT 273
#define OUTPUTHULLMODE 274
#define OUTPUTUNIONMODE 275
#define OUTPUTDIGITS 276
#define OUTPUTSTYLE 277
#define OUTPUTBOUNDSTYLE 278
#define OUTPUTMIDPOINTSTYLE 279
#define OUTPUTSOLUTION 280
#define OUTPUTALLSOLUTION 281
#define PRAGMACONSISTENCY 282
#define LOCALCONSISTENCY 283
#define STRONGCONSISTENCY 284
#define CONSISTENCYBC3 285
#define CONSISTENCYBC3Newton 286
#define CONSISTENCYBC4 287
#define CONSISTENCYBC5 288
#define CONSISTENCYHC3 289
#define CONSISTENCYHC4 290
#define CONSISTENCYHC4I 291
#define CONSISTENCYHC4Newton 292
#define PRECISION2B 293
#define IMPROVEMENT2B 294
#define CONSISTENCY3B 295
#define CONSISTENCYWEAK3B 296
#define PRECISION3B 297
#define PRECISION 298
#define INDOM 299
#define COMMA 300
#define TWOPOINTS 301
#define SCOLON 302
#define COLON 303
#define UNDERSCORE 304
#define LSBR 305
#define RSBR 306
#define LBR 307
#define RBR 308
#define IDENT 309
#define INTEGER 310
#define FLOAT 311
#define REALPOSINFINITY 312
#define REALNEGINFINITY 313
#define ADD 314
#define SUB 315
#define MUL 316
#define DIV 317
#define POW 318
#define SQRT 319
#define LOG 320
#define EXP 321
#define MINIMUM 322
#define MAXIMUM 323
#define COS 324
#define SIN 325
#define TAN 326
#define COSH 327
#define SINH 328
#define TANH 329
#define ACOS 330
#define ASIN 331
#define ATAN 332
#define ACOSH 333
#define ASINH 334
#define ATANH 335
#define PREV 336
#define SUCC 337
#define INTEGERTYPE 338
#define REALTYPE 339
#define NEWDATA 340
#define EQU 341
#define INF 342
#define SUP 343




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 65 "parser.y"
{
    int  nvar;
    char str_num[40];
    char str_unum[40];
    char str_sign[2];
    char str_integ[40];
    char str_float[40];
    char str_var[20];
    int  n, vtype, bbound;
    double lbound, rbound;
    void *fun;
}
/* Line 1529 of yacc.c.  */
#line 238 "parser.h"
YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

