import math

def count_complaints(preferences, forbiddens, num_options):
    complaints = 0

    available_options = list()
    for i in range(2 ** num_options):
        bits = int(max(num_options, math.log(i, 2)+1))
        available_options.insert([1 if i & (1 << (bits-1-n)) else 0 for n in range(bits)])
        
    print(available_options)
  
  # TODO: Add logic to count the number of complaints
  return complaints

if __name__ == '__main__':
  # Read number of test cases
  num_cases = int(input())

  for tc in range(1, num_cases + 1):
    # Read number of friends, number of forbidden teas, and number of options
    num_friends, num_forbidden, num_options = map(int, input().split())

    # Read the friends' preferences
    preferences = [input() for _ in range(num_friends)]

    # Read the forbidden teas
    forbiddens = [input() for _ in range(num_forbidden)]

    print("Case #%d: %d" % (tc, count_complaints(preferences, forbiddens)))
