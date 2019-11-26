#include"CppRule.h"
#include<iostream>
#include <ctime>
#include <unistd.h>

int main(){
	clock_t start,end;
	start= clock();
	yuwei::PersonInfo p("jackyu",28,"Hong Kong");
	p.setMap("1","one");
	p.setMap("2","two");
	p.setMap("3","three");
	p.setMap("4","four");
	p.setAvary();
	p.printInfo();
	std::cout<<yuwei::status::success<<std::endl;
	for(int i=1;i<=5;i++){
		std::cout<<"生成的短信随机码::"<<p.genCode()<<std::endl;
	}

	end = clock();
	std::cout<<"cost time is:"<<double(end-start)/CLOCKS_PER_SEC<<"s";
}
