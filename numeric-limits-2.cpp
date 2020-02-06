// numeric-limits-2.cpp
// v0.0.1 - 2020-02-06 - nelbren@nelbren.com
// Based on numeric-limits.cpp "Shows the numeric limits for all possible numerical types." from: Caio Rodrigues
// https://rextester.com/BBXAM15894
#include <limits>
#include <string> 
#include <iostream>
#include <iostream>
#include <iomanip> 
using namespace std;

#define SIL(numtype) showNumericLimits<numtype>(#numtype)
#define SFL(numtype) showFloatPointLimits<numtype>(#numtype)

struct ColPrinter{
  array<string,9> col_name {"TYPE", "INTEGER?", "SIGNED?", "DIG10", "MAXDIG10", "MIN", "MAX", "BYTES", "BITS"};
  array<int,9> col_size {18, 9, 8, 6, 9, 21, 21, 6, 5};

  auto printTitle() const -> void {
    cout << setw(85) << "TYPE NAMES, MODIFIERS AND NUMERIC LIMITS FOR C++ TYPES OF VARIABLES" << endl;
    cout << string(103, '=') << endl;
  }
  auto printFooter() const -> void {
    cout << string(103, '=') << endl;
    cout << setw(103) << "2020-02-06 - http://nelbren.com - basado en https://rextester.com/BBXAM15894" << endl;
  }

  auto printHeader() const -> void {
    for(int i = 0; i < col_name.size(); i++) 
      cout << setw(col_size[i]) << col_name[i];
      cout << endl << string(103, '-') << endl;
  }

  ColPrinter() {
    cout << boolalpha;
  }
	
  template<class A>
    auto printCol(const int col, const A& value) const -> void {
      cout << setw(col_size[col]) << value;
    }
};

template <class T>
void showNumericLimits(const std::string& name){
  ColPrinter cp;
  cp.printCol(0, name);
  cp.printCol(1, numeric_limits<T>::is_integer);
  cp.printCol(2, numeric_limits<T>::is_signed);
  cp.printCol(3, numeric_limits<T>::digits10);
  cp.printCol(4, numeric_limits<T>::max_digits10);
  if (typeid(T) == typeid(uint8_t) || typeid(T) == typeid(int8_t) 
      || typeid(T) == typeid(bool) || typeid(T) == typeid(char) || typeid(T) == typeid(unsigned char)){
    cp.printCol(5, static_cast<int>(numeric_limits<T>::min()));
    cp.printCol(6, static_cast<int>(numeric_limits<T>::max()));	
  } else {
    cp.printCol(5, numeric_limits<T>::min());
    cp.printCol(6, numeric_limits<T>::max());
  }
  cp.printCol(7, sizeof(T));
  cp.printCol(8, 8 * sizeof(T));
  if (numeric_limits<T>::is_integer)
    cout << endl;
}

template<class T>
void showFloatPointLimits(const std::string& name){
  showNumericLimits<T>(name);
  cout << endl << setw(39) << "EPSILON: " << setw(11) << numeric_limits<T>::epsilon();
  cout << setw(16) << "MIN EXPONENT: " << setw(5) << numeric_limits<T>::min_exponent10;
  cout << setw(16) << "MAX EXPONENT: " << setw(5) << numeric_limits<T>::max_exponent10 << endl;
}

int main() {
  ColPrinter cp;
  cp.printTitle();
  cp.printHeader();
  SIL(bool); SIL(char); SIL(unsigned char); SIL(wchar_t);
  SIL(int8_t); SIL(uint8_t); SIL(int16_t); SIL(uint16_t);
  SIL(int32_t); SIL(uint32_t); SIL(int64_t); SIL(uint64_t);
  SIL(short); SIL(unsigned short); SIL(int); SIL(unsigned int);
  SIL(long); SIL(unsigned long); SIL(long long); SIL(unsigned long long);
  SFL(float); SFL(double); SFL(long double);
  cp.printFooter();
}
