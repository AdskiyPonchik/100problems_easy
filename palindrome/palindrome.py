def is_palindrome(num):
  orig = num
  result = 0
  while orig > 0:
    remainder = orig % 10
    result = result * 10 + remainder
    orig //= 10
  return num == result
