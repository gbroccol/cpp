



int main()
{ 
 try
 {
  std::cout << "\x1b[31mINT\x1b[0m" << std::endl;
  Array <int> a2(3);
  std::cout << a2.size() << std::endl<< std::endl;
  for(unsigned int i = 0; i < a2.size(); i++)
  {
   std::cout << a2[i] << std::endl;
  }
  std::cout << "\x1b[31mSTRING\x1b[0m" << std::endl;
  Array <std::string> string_arr(4);
  std::cout << string_arr.size() << std::endl<< std::endl;
  std::string tmp_arr[] = {"hi", "hello", "bie", "goodbie"};
  for(unsigned int i = 0; i < string_arr.size(); i++)
  {
   string_arr[i] = tmp_arr[i];
   std::cout << string_arr[i] << std::endl;
  }
  std::cout << "\x1b[31mDOUBLE\x1b[0m" << std::endl;
  Array <double> double_arr(4);
  std::cout << double_arr.size() << std::endl<< std::endl;
  double tmp_arr2[] = {11111,22222,33333, 44444};
  for(unsigned int i = 0; i < double_arr.size(); i++)
  {
   double_arr[i] = tmp_arr2[i];
   std::cout << double_arr[i] << std::endl;
  }
  std::cout << "\x1b[31mFLOAT\x1b[0m" << std::endl;
  Array <float> float_arr(4);
  std::cout << float_arr.size() << std::endl<< std::endl;
  double tmp_arr3[] = {55555,66666,77777,88888};
  for(unsigned int i = 0; i < float_arr.size(); i++)
  {
   float_arr[i] = tmp_arr3[i];
   std::cout << float_arr[i] << std::endl;
  }
  std::cout << "\x1b[31mCHAR\x1b[0m" << std::endl;
  Array <char> char_arr(4);
  std::cout << char_arr.size() << std::endl<< std::endl;
  char tmp_arr5[] = {'a', 'b', 'c', 'd'};
  for(unsigned int i = 0; i < char_arr.size(); i++)
  {
   char_arr[i] = tmp_arr5[i];
   std::cout << char_arr[i] << std::endl;
  }
  std::cout << "\x1b[31mEMPTY ARR\x1b[0m" << std::endl;
  Array <char> empty_arr;
  std::cout << empty_arr.size() << std::endl<< std::endl;
  for(unsigned int i = 0; i < empty_arr.size(); i++)
  {
   std::cout << empty_arr[i] << std::endl;
  }
  
  // std::cout << "\x1b[31mINCORRECT EMPTY ARR\x1b[0m" << std::endl;
  // Array <char> incorrect_empty_arr;
  // std::cout << incorrect_empty_arr.size() << std::endl<< std::endl;
  // for(unsigned int i = 0; i < incorrect_empty_arr.size() + 1; i++)
  // {
  //  std::cout << incorrect_empty_arr[i] << std::endl;
  // }
  
  std::cout << "\x1b[31mINCORRECT FULL CHAR\x1b[0m" << std::endl;
  Array <char> incorrect_char_arr(4);
  std::cout << incorrect_char_arr.size() << std::endl<< std::endl;
  char tmp_arr7[] = {'a', 'b', 'c', 'd'};
  for(unsigned int i = 0; i < incorrect_char_arr.size() + 3; i++)
  {
   incorrect_char_arr[i] = tmp_arr7[i];
   std::cout << incorrect_char_arr[i] << std::endl;
  }
 }
 catch(const std::exception& e)
 {
  std::cerr << e.what() << '\n';
 }
  
}