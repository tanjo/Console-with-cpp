#include "tj_console.hh"

typedef TJConsole tjc;

const std::string tjc::BLACK = "0";
const std::string tjc::DARK_BLUE = "1";
const std::string tjc::DARK_GREEN = "2";
const std::string tjc::DARK_SKYBLUE = "3";
const std::string tjc::DARK_RED = "4";
const std::string tjc::DARK_PURPLE = "5";
const std::string tjc::DARK_YELLOW = "6";
const std::string tjc::GRAY = "7";
const std::string tjc::DARK_GRAY = "8";
const std::string tjc::BLUE = "9";
const std::string tjc::GREEN = "a";
const std::string tjc::SKYBLUE = "b";
const std::string tjc::RED = "c";
const std::string tjc::PURPLE = "d";
const std::string tjc::LIGHT_YELLOW = "e";
const std::string tjc::WHITE = "f";

const std::string tjc::TRAP_EXIT = "EXIT";
const std::string tjc::TRAP_ERR = "ERR";
const std::string tjc::TRAP_SIGINT = "SIGINT";

void tjc::change(const std::string background_color, const std::string text_color) {
  std::stringstream ss;
#ifdef _WIN32
  ss << "color";
  ss << background_color;
  ss << text_color;
  system(ss.str().c_str());
#elif __APPLE__

#endif
}

void tjc::time() {
#ifdef _WIN32
  system("time /t");
#elif __APPLE__
  system("time");
#endif
}

void tjc::date(void) {
#ifdef _WIN32
  system("time /t");
#elif __APPLE__
  system("date");
#endif
}

void tjc::title(const std::string title) {
#ifdef _WIN32
  std::stringstream ss;
  ss << "title ";
  ss << title;
  system(ss.str().c_str());
#elif __APPLE__

#endif
}

void tjc::trap(const std::string text, const std::string type) {
#ifdef _WIN32
#elif __APPLE__
  std::stringstream ss;
  ss << "trap \"echo ";
  ss << text;
  ss << "\" ";
  ss << type;
  system(ss.str().c_str());
#endif
}
