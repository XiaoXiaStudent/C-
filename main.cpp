#include <iostream>

//#define  LOG(x) std::cout << x << std::endl;

void increment(int *value) {
    (*value)++;
}

void incrementr(int &value) {
    value++;
}

class Player {
public:
    int x;
    int y;
    int speed;

    void move(int xa, int ya) {

        x += xa * speed;
        y += ya * speed;
    }

};


class LOG {

public:

    enum Level {
        LogLevelWarning = 0, LogLevelError, LogLevelInfo
    };



private:
    int m_LogLevel = LogLevelInfo;

public:

    void SetLevel(Level level) {
        m_LogLevel = level;
    }

    void warning(const char *string) {
        if (m_LogLevel >= LogLevelWarning) {

            std::cout << "[WARN] :" << string << std::endl;
        }

    }

    void info(const char *string) {
        if (m_LogLevel >= LogLevelInfo) {
            std::cout << "[INFO] :" << string << std::endl;

        }

    }

    void const error(const char *string) {

        if (m_LogLevel >= LogLevelError) {
            std::cout << "[ERROR] :" << string << std::endl;

        }

    }


};



int main() {
    LOG log1;

    log1.SetLevel(LOG::LogLevelInfo);
    log1.warning("1111");


    //std::cin.get();

}
