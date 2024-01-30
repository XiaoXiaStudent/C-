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


class Log {

public:
    const int LogLevelWarning = 1;
    const int LogLevelError = 0;
    const int LogLevelInfo = 2;

private:
    int m_LogLevel;

public:

    void SetLevel(const int i) {
        m_LogLevel = i;
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

    void error(const char *string) {

        if (m_LogLevel >= LogLevelError) {
            std::cout << "[ERROR] :" << string << std::endl;

        }

    }


};


int main() {

    Log log;
    log.SetLevel(log.LogLevelError);
    log.info("Hello");

    //std::cin.get();

}
