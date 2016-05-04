
#include <string>
// 1. 可以创建文件夹和子文件夹
// 2. 可以输入相对路径 或 绝对路径
// 3. 如果路径存在，就不创建；如果不存在，就创建
void myMakeDirectory( std::string strPath )
{
	std::string strCmd;
	//相对路径   .\\yy1\\\yy2
	//绝对路径   E:\\aaa\\bbb
	strCmd = "md " + strPath; // md .\\yy1\\\yy2         md E:\\aaa\\bbb
	system( strCmd.c_str() );

	return;
}


void main()
{
	//相对路径：
	std::string test_path1 = ".\\yy1\\yy2";
	//绝对路径：
	std::string test_path2 = "E:\\ccc\\ddd";

	myMakeDirectory( test_path1 );
	myMakeDirectory( test_path2 );
	
}