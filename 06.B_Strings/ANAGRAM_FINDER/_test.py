//ANAGRAM_FINDER
load_file_in_context('script.py')
try:
  PotatoSalad
except NameError:
  fail_tests("Is there a class called `PotatoSalad` defined?")
try:
  SpecialPotatoSalad
except NameError:
  fail_tests("Did you define a class called `SpecialPotatoSalad`?")

try:
  if not issubclass(SpecialPotatoSalad, PotatoSalad):
    fail_tests("Does `SpecialPotatoSalad` subclass `PotatoSalad`?")
except TypeError:
  fail_tests("Are `PotatoSalad` and `SpecialPotatoSalad` both classes?")
pass_tests()