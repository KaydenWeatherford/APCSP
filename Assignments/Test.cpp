
int inputArr[input.length()];
vector<int> biArr[input.length()];
int count = 0;

for (int i = 0; i < input.length(); i++)
  {
    inputArr[i] = (int(input[i]) - 32); // Simple Ascii
  }

for (int i = 0; i < inputArr0.length(); i++)
  {
    biArr = decToBinary(inputArr[i]);
    count++;
    if(count = 5)
    {
      string temp = "";
      for(int j = 0; j < biArr.length(); j++)
        {
          temp = temp + to_string(biArr[j]);
        }
      count = 0;
      clear(biArr);
      cout << temp << endl;
    } 
  }


