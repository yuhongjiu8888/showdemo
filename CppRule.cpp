#include "CppRule.h"

#include <string>
#include <iostream>
#include <sstream>
#include <cstdlib>

namespace yuwei{
PersonInfo::PersonInfo(const std::string name,const int age,const std::string addr):mName(name),mIage(age),mSaddr(addr){
	m_ctest.m_sname = name;
	m_ctest.m_iage = age;
	m_ctest.m_saddr = addr;
}

PersonInfo::~PersonInfo(){

}

std::string PersonInfo::pprint(const std::vector<int> vor){
	std::stringstream ss;
	for(std::vector<int>::const_iterator m = vor.begin(); m != vor.end(); m++ ){
		ss<<*m<<" ";
	}
	//std::cout<<std::endl;
	return ss.str();
}

void PersonInfo::printInfo(){
	std::cout<<"name:"<<mName<<",age:"<<mIage<<",addr:"<<mSaddr<<std::endl;
	for(std::map<std::string,std::string>::const_iterator iter = mkv.begin();iter!=mkv.end();iter++){
		std::cout<<iter->first<<"=="<<iter->second<<std::endl;
	}
	std::cout<<"what wrong?"<<std::endl;
	for(std::map<int,std::vector<int>>::const_iterator iter2 = mAvary.begin();iter2!=mAvary.end();iter2++){
			std::cout<<iter2->first<<":["<<pprint(iter2->second)<<"]"<<std::endl;
		}
}

void PersonInfo::setMap(const std::string key,const std::string value){
	mkv.insert(std::make_pair(key,value));
	//mkv["two"] = "two";
}

/*¸ºÔØ¾ùºâ*/
void PersonInfo::setAvary(){
	std::vector<int> v1,v2,v3,v4,v5;
	for(int i=1;i<=100;i++){
		if(i%5==1){
			v1.push_back(i);
		}else if(i%5==2){
			v2.push_back(i);
		}else if(i%5==3){
			v3.push_back(i);
		}else if(i%5==4){
			v4.push_back(i);
		}else{
			v5.push_back(i);
		}
	}
	mAvary[1] = v1;
	mAvary[2] = v2;
	mAvary[3] = v3;
	mAvary[4] = v4;
	mAvary[5] = v5;
}

std::string PersonInfo::genCode(){
	std::string ss;
	for(int i=1;i<=6;i++){
		int x = rand()%10;
		ss.append(std::to_string(x));
	}
	return ss;
}


}
