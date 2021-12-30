def solution(progresses, speeds):
  answer = []
  bae = 0
  for i,j in zip(progresses,speeds):
    if i+(bae*j)>=100:
      answer[-1] = answer[-1] + 1
    else:
      #-(i-100)//j => 내림한 음수에 -를 붙여서 올림처리
      bae = -(i-100)//j
      answer.append(1)
  return answer
