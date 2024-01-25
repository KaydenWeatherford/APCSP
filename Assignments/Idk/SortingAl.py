def bubble(self, A):
  int i, j;
  for i = 0 to length(A) - 1 
    for j = 0 to length(A) - i - 1 
      if A[j] > A[j+1]
      A[j], A[j+1] = A[j+1], A[j]
    
def selection(self, A):
  for i = 0 to length(A) - 1 do
    min_index = i
    for j = i + 1 to length(A) do
      if A[j] < A[min_index] then
        min index = j
        A[i], A[min_index] = A[min_index], A[i]

def insertion(self, A):
  for i = 1 to length(A) do
    key = A[i]
    j = i - 1
    while j >= 0 and A[j] > key do
      A[j + 1] = A[j]
      j = j - 1
    A[j + 1] = key