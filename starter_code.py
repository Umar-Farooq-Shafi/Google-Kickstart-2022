def h_index(n, citations):
  ans = []
  # TODO: Complete the function to get the H-Index scores after each paper

  return ans


if __name__ == '__main__':
  t = int(raw_input())

  for test_case in range(1, t + 1):
    n = int(raw_input())                      # The number of papers
    citations = map(int, raw_input().split()) # The number of citations for each paper
    h_index_scores = h_index(n, citations)
    print("Case #" + str(test_case) + ": " + ' '.join(map(str, h_index_scores)))
