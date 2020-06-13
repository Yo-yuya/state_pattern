#include <stdio.h>
#include <iostream>

enum State_base {
    STATE_CREDIT,
    STATE_TITLE,
    STATE_OPENING,
    STATE_DEMO
};

int main()
{
    State_base now = STATE_CREDIT;

    while (true)
    {
        switch (now)
        {
        case STATE_CREDIT:
            printf("credit\n");
            std::this_thread::sleep_for(std::chrono::seconds(3));// 3 秒待つ
            now = STATE_TITLE;
            
            break;
            
        case STATE_TITLE:
            printf("title\n");
            std::this_thread::sleep_for(std::chrono::seconds(3));// 3 秒待つ
            now = STATE_OPENING;
            break;

        case STATE_OPENING:
            printf("opning\n");
            std::this_thread::sleep_for(std::chrono::seconds(5));// 5 秒待つ
            now = STATE_DEMO;
            break;

        case STATE_DEMO:
            printf("demo\n");
            std::this_thread::sleep_for(std::chrono::seconds(5));// 5 秒待つ
            now = STATE_CREDIT;
            break;
            
             
 

        }
    }
    
}
