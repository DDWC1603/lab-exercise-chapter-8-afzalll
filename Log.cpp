include<iostream>
#include<conio.h>

using namespace std;

class Log

{
	public:
		const int LogLevelError=0;
		const int LogLevelWarning=1;
		const int LogLevelinfo=2;
		
	private:
		int m_LogLevel=LogLevelinfo;
		
	public:
	    void SetLevel(int Level)
		{
			m_LogLevel=Level;
		}	
			
		void Error(const char* message)
		{
			if(m_LogLevel>=LogLevelError)
			cout<<"[ERROR]:"<<message<<endl;
		}
		
		void Warn(const char* message)
		{
			if(m_LogLevel>=LogLevelWarning)
			cout<<"[WARNING]:"<<message<<endl;
		}
		
		void info(const char* message)
		{
			if(m_LogLevel>=LogLevelinfo)
			cout<<"[INFO]:"<<message<<endl;
		}
		
};

int main()
{
	Log olog;
	olog.SetLevel(olog.LogLevelWarning);
	olog.Warn("Hello!!!");
	olog.SetLevelinfo(olog.LogLevelinfo);
	olog.info("Do Not Proceed!");
	getch();
	std::cin.get();
}
