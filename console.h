#ifndef CONSOLECOLOR_H_
#define CONSOLECOLOR_H_

#include <cstdlib>
#include <sstream>

class Console
{
public:

  static const std::string BLACK;
  static const std::string DARK_BLUE;
  static const std::string DARK_GREEN;
  static const std::string DARK_SKYBLUE;
  static const std::string DARK_RED;
  static const std::string DARK_PURPLE;
  static const std::string DARK_YELLOW;
  static const std::string GRAY;
  static const std::string DARK_GRAY;
  static const std::string BLUE;
  static const std::string GREEN;
  static const std::string SKYBLUE;
  static const std::string RED;
  static const std::string PURPLE;
  static const std::string LIGHT_YELLOW;
  static const std::string WHITE;

  static void change(const std::string background_color, const std::string text_color) {

    std::stringstream ss;
    ss << "color ";
    ss << background_color;
    ss << text_color;
    
    system(ss.str().c_str());

  }

  static void time(void) {
    system("time /t");
  }
  static void date(void) {
    system("date /t");
  }
  static void title(const std::string title) {

    std::stringstream ss;
    ss << "title ";
    ss << title;
    
    system(ss.str().c_str());

  }
  
};

const std::string Console::BLACK = "0";
const std::string Console::DARK_BLUE = "1";
const std::string Console::DARK_GREEN = "2";
const std::string Console::DARK_SKYBLUE = "3";
const std::string Console::DARK_RED = "4";
const std::string Console::DARK_PURPLE = "5";
const std::string Console::DARK_YELLOW = "6";
const std::string Console::GRAY = "7";
const std::string Console::DARK_GRAY = "8";
const std::string Console::BLUE = "9";
const std::string Console::GREEN = "a";
const std::string Console::SKYBLUE = "b";
const std::string Console::RED = "c";
const std::string Console::PURPLE = "d";
const std::string Console::LIGHT_YELLOW = "e";
const std::string Console::WHITE = "f";

typedef Console cc;

#endif // CONSOLECOLOR_H_