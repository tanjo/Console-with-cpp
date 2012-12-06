Console-with-cpp
================

コマンドプロンプトの機能を使えるようにしたい


関数
==========
* change  
色を変化させる  
* time  
時間表示  
* date  
日付表示  
* title  
タイトルバーのテキストを変更  


サンプルコード
===============
    
    #include "console.h"
    
    int main(int argc, char *argv[])
    {
      Console::title("AA");
      Console::change(Console::BLACK, Console::GREEN);
    
      std::cout << "test" << std::endl;
    
      return 0;
    }