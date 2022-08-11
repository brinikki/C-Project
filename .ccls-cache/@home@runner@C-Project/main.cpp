

#include <iostream>
using namespace std;

int main()
{
  // Brainy Bill C++ Quiz 5
 
  char q1 = 'a';
  char q2 = 'b';
  char q3 = 'b';
  char q4 = 'a';
  char q5 = 'c';
  int grade = 0;

  // Question 1

  cout << endl;
  cout << "1. What method gets the value in the first element of a vector?" << endl;
  cout << endl;
  cout << "a. front()" << endl;
  cout << "b. first()" << endl;
  cout << "c. zero()" << endl;
  cout << "d. top()" << endl;

  cout << endl;
  cout << "Your Answer: ";
  cin >> q1;
  cout << endl;

  if (q1 == 'a')
  {
    cout << "\033[34mThat is Correct!\033[0m" << endl;
    cout << endl;
    grade = grade + 20;
  }

  else
  {
    cout << "\033[34mThat is Incorrect!\033[0m" << endl;
    cout << endl;
  }

  // Question 2
 
  cout << "2. What method erases a vector?" << endl;
  cout << endl;
  cout << "a. erase()" << endl;
  cout << "b. clear()" << endl;
  cout << "c. empty()" << endl;
  cout << "d. clean()" << endl;

  cout << endl;
  cout << "Your Answer: ";
  cin >> q2;
  cout << endl;

  if (q2 == 'b')
  {
    cout << "\033[34mThat is Correct!\033[0m" << endl;
    cout << endl;
    grade = grade + 20;
  }

  else
  {
    cout << "\033[34mThat is Incorrect! \033[0m" << endl;
    cout << endl;
  }

  // Question 3

  cout << "3. What file mode is used to open a file to write an output?" << endl;
  cout << endl;
  cout << "a. ios::output" << endl;
  cout << "b. ios::out" << endl;
  cout << "c. ios::write" << endl;
  cout << "d. ios::open" << endl;

  cout << endl;
  cout << "Your Answer: ";
  cin >> q3;
  cout << endl;

  if (q3 == 'b')
  {
    cout << "\033[34mThat is Correct!\033[0m" << endl;
    cout << endl;
    grade = grade + 20;
  }

  else
  {
    cout << "\033[34mThat is Incorrect!\033[0m" << endl;
    cout << endl;
  }
 
  // Question 4

  cout << "4. What file mode is used to open a file to read an input?" << endl;
  cout << endl;
  cout << "a. ioa::in" << endl;
  cout << "b. ios::input" << endl;
  cout << "c. ios::read" << endl;
  cout << "d. ios::open" << endl;

  cout << endl;
  cout << "Your Answer: ";
  cin >> q4;
  cout << endl;

  if (q4 == 'a')
  {
    cout << "\033[34mThat is Correct!\033[0m" << endl;
    cout << endl;
    grade = grade + 20;
  }

  else
  {
    cout << "\033[34mThat is Incorrect!\033[0m" << endl;
    cout << endl;
  }

  // Question 5

  cout << "5. What file mode is used to open a file to append an output" << endl;
  cout << "   at the end of any existing content?" << endl;
  cout << endl;
  cout << "a. ios::append" << endl;
  cout << "b. ios::open" << endl;
  cout << "c. ios::app" << endl;
  cout << "d. ios::output" << endl;
 
  cout << endl;
  cout << "Your Answer: ";
  cin >> q5;
  cout << endl;

  if (q5 == 'c')
  {
    cout << "\033[34mThat is Correct!\033[0m" << endl;
    cout << endl;
    grade = grade + 20;
  }

  else
  {
    cout << "\033[34mThat is Incorrect!\033[0m" << endl;
    cout << endl;
  }

  cout << "\033[34mYour grade is " << grade << "." << endl;
}
