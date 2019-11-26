/*
copy right by yuwei@qq.com
*/
#ifndef _CPP_RULE_H_
#define _CPP_RULE_H_

#include <string>
#include <map>
#include <vector>

namespace yuwei{

enum status{
	success = 0,
	fails = 1
};

struct MyTest{
	std::string m_sname;
	int m_iage;
	std::string m_saddr;
};

class PersonInfo{
public:
	PersonInfo(const std::string name,const int age,const std::string addr);//构造函数
	~PersonInfo();//析构函数
	void printInfo();//打印函数
	void setMap(const std::string key,const std::string value);
	void setAvary();
	std::string pprint(const std::vector<int> vor); //打印数组
	std::string genCode();//随机产生6位数验证码

protected:
	MyTest m_ctest;
	std::map<std::string,std::string> mkv;
	std::map<int,std::vector<int>> mAvary;
private:
	std::string mName;
	int mIage;
	std::string mSaddr;
	
};


}


#endif
