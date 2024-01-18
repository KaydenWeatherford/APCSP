# Just some Temp Notes

Run:
g++ -o Assignments/Project1.exe Assignments/Project1.cpp && ./Assignments/Project1.exe



// Modified verion of "https://www.geeksforgeeks.org/morse-code-implementation/" code to accept More input such as capital letters and spaces. 
string morseEncode(char x) 
{
  switch (x) {
    case 'a':
      return ".-_";
    case 'A':
      return ".-_";
    case 'b':
      return "-..._";
    case 'B':
      return "-..._";
    case 'c':
      return "-.-._";
    case 'C':
      return "-.-._";
    case 'd':
      return "-.._";
    case 'D':
      return "-.._";
    case 'e':
      return "._";
    case 'E':
      return "._";
    case 'f':
      return "..-._";
    case 'F':
      return "..-._";
    case 'g':
      return "--._";
    case 'G':
      return "--._";
    case 'h':
      return "...._";
    case 'H':
      return "...._";
    case 'i':
      return ".._";
    case 'I':
      return ".._";
    case 'j':
      return ".---_";
    case 'J':
      return ".---_";
    case 'k':
      return "-.-_";
    case 'K':
      return "-.-_";
    case 'l':
      return ".-.._";
    case 'L':
      return ".-.._";
    case 'm':
      return "--_";
    case 'M':
      return "--_";
    case 'n':
      return "-._";
    case 'N':
      return "-._";
    case 'o':
      return "---_";
    case 'O':
      return "---_";
    case 'p':
      return ".--._";
    case 'P':
      return "---._";
    case 'q':
      return "--.-_";
    case 'Q':
      return "--.-_";
    case 'r':
      return ".-._";
    case 'R':
      return ".-._";
    case 's':
      return "..._";
    case 'S':
      return "..._";
    case 't':
      return "-_";
    case 'T':
      return "-_";
    case 'u':
      return "..-_";
    case 'U':
      return "..-_";
    case 'v':
      return "...-_";
    case 'V':
      return "...-_";
    case 'w':
      return ".--_";
    case 'W':
      return ".--_";
    case 'x':
      return "-..-_";
    case 'X':
      return "-..-_";
    case 'y':
      return "-.--_";
    case 'Y':
      return "-.--_";
    case 'z':
        return "--.._";
    case 'Z':
        return "--.._";
    case ' ':
        return " ";
    case '1':
        return ".----_";
    case '2':
        return "..---_";
    case '3':
        return "...--_";
    case '4':
        return "....-_";
    case '5':
        return "....._";
    case '6':
        return "-...._";
    case '7':
        return "--..._";
    case '8':
        return "---.._";
    case '9':
        return "----._";
    case '0':
        return "-----_";
    default:
        cerr << "Invalid character: " << x << " !" << endl; // Cooler version B)
        exit(0);
    }
}


string morseDCode(string str, string str2)
{
  // Morse -> Text
  // Str = Morse Text
  // Str2 = English Text

  for (int i = 0; i < str.length; i++)
    {
      bool isFound = str.find(str2) != string::npos;
      if (str.find(" .- ") == 0){ // A
        return str2[i];}
      else if (str.find(" -... ") == 0){ // B
        return str2[i];}
      else if (str.find(" -.-. ") == 0){ // C
        return str2[i];}
      else if (str.find(" -.. ") == 0){ // D
        return str2[i];}
      else if (str.find(" . ") == 0){ // E
        return str2[i];}
      else if (str.find(" ..-. ") == 0){ // F
        return str2[i];}
      else if (str.find(" --. ") == 0){ // G
        return str2[i];}
      else if (str.find(" .... ") == 0){ // H
        return str2[i];}
      else if (str.find(" .. ") == 0){ // I
        return str2[i];}
      else if (str.find(" .--- ") == 0){ // J
        return str2[i];}
      else if (str.find(" -.- ") == 0){ // K
        return str2[i];}
      else if (str.find(" .-.. ") == 0){ // L
        return str2[i];}
      else if (str.find(" -- ") == 0){ // M
        return str2[i];}
      else if (str.find(" -. ") == 0){ // N
        return str2[i];}
      else if (str.find(" --- ") == 0){ // O
        return str2[i];}
      else if (str.find(" .--. ") == 0){ // P
        return str2[i];}
      else if (str.find(" --.- ") == 0){ // Q
        return str2[i];}
      else if (str.find(" .-. ") == 0){ // R
        return str2[i];}
      else if (str.find(" ... ") == 0){ // S
        return str2[i];}
      else if (str.find(" - ") == 0){ // T
        return str2[i];}
      else if (str.find(" ..- ") == 0){ // U
        return str2[i];}
      else if (str.find(" ...- ") == 0){ // V
        return str2[i];}
      else if (str.find(" .-- ") == 0){ // W
        return str2[i];}
      else if (str.find(" -..- ") == 0){ // X
        return str2[i];}
      else if (str.find(" -.-- ") == 0){ // Y
        return str2[i];}
      else if (str.find(" --.. ") == 0){ // Z
        return str2[i];}
      else if (str.find(" .---- ") == 0){ // 1
        return str2[i];}
      else if (str.find(" ..--- ") == 0){ // 2
        return str2[i];}
      else if (str.find(" ...-- ") == 0){ // 3
        return str2[i];}
      else if (str.find(" ....- ") == 0){ // 4
        return str2[i];}
      else if (str.find(" ..... ") == 0){ // 5
        return str2[i];}
      else if (str.find(" -.... ") == 0){ // 6
        return str2[i];}
      else if (str.find(" --... ") == 0){ // 7
        return str2[i];}
      else if (str.find(" ---.. ") == 0){ // 8
        return str2[i];}
      else if (str.find(" ----. ") == 0){ // 9
        return str2[i];}
      else if (str.find(" ----- ") == 0){ // 0
        return str2[i];}
      else if (str.find(" _ ") == 0){ // Space
        return str2[i];}
      else {
        return " Error ";}
      }
}
