from collections import defaultdict

if __name__ == '__main__':
  numSolved = 0
  isSolved = defaultdict(bool)
  qPoints = defaultdict(int)
  wrongPoints = defaultdict(int)
  
  while True:
    entry = input().split()
    if len(entry) == 1:
      break
    points = entry[0]
    question = entry[1]
    status = entry[2]
  
    if status == "right":
      qPoints[question] += int(points)
      isSolved[question] = True
      numSolved += 1
    else:
      wrongPoints[question] += 20
      isSolved[question] = False

  total = 0
  for letter in qPoints:
    if isSolved[letter] == True:
      total += qPoints[letter]
      total += wrongPoints[letter]
  
  print(numSolved, total)
