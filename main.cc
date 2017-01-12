#include <iostream>
#include "tj_console.hh"

int main(int argc, char *argv[]) {
  TJConsole::title("AA");
  TJConsole::change(TJConsole::BLACK, TJConsole::GREEN);
  TJConsole::time();
  TJConsole::date();
  TJConsole::trap("だるい", TJConsole::TRAP_EXIT); // いい感じには機能しない

  std::cout << "test" << std::endl;

  return 0;
}
