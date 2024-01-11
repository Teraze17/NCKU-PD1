cmake_minimum_required(VERSION 3.23)
project(pretest C)

set(CMAKE_C_STANDARD 99)

add_executable(pretest main.c pretest.c sizeof.c swap.c polynomial.c triangle.c BMI.c EAN.c Grouping.c Dungeon.c coffee.c FoodStand.c RightTriangle.c DD2.c turnip.c MathFanatic.c CapitalizeEnglishNameCorrectOne.c LanguageModel.c CapitalizeEnglishName.c)
