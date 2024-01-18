def main():
  try:
    data = []
    with open("prg408a.dat", 'r') as f:
      lines = f.readlines()
      for lcv in range(len(lines), 2):
        id = int(lines[lcv])
        score = int(lines[lcv+1])
        # Make helper class objects and add to data
    pass
    # Your code here
  except Exception as e:
    print("Error:", e)
  pass


if __name__ == "__main__":
  main()
  def __lt__(self, other):
    return self.score < other.score