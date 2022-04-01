#include <iostream>
using namespace std;


class Log
{
private:
    int m_logLevel=LogLevelInfo;

public:
    const int LogLevelError = 0;
    const int LogLevelWarning = 1;
    const int LogLevelInfo = 2;

public:
    void SetLevel(int level)
    {
          m_logLevel=level;

    }
    
    void Error(const char* message)
    {
        if (m_logLevel>= LogLevelError)
           cout << "[ERROR]: " << message << endl;

    }

    void Info(const char* message)
    {
        if (m_logLevel >= LogLevelInfo)
          cout << "[INFO]: " << message << endl;

    }

    void Warn(const char* message)
    {
        if (m_logLevel >= LogLevelWarning)
          cout << "[WARNING]: " <<message << endl;

    }




};



int main()
{
    Log log;
    log.SetLevel(log.LogLevelWarning);
    log.Warn("You are warned!!");

    log.Error("Hey");
    log.Info("holla");
   
}
