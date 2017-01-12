#ifndef TJ_CONSOLECOLOR_H_
#define TJ_CONSOLECOLOR_H_

#include <cstdlib>
#include <sstream>

class TJConsole
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

  static const std::string TRAP_EXIT;
  static const std::string TRAP_ERR;
  static const std::string TRAP_SIGINT;

  static void change(const std::string background_color, const std::string text_color);
  static void time(void);
  static void date(void);
  static void title(const std::string title);
  static void trap(const std::string text, const std::string type);
};

#endif // TJ_CONSOLECOLOR_H_
