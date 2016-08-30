#include <string>

using namespace std;


// 文件复制
void cmdCopyFile( string strCpySrcPath, string strCpyDstFolder )
{
	string strCopyCmd = "copy " + strCpySrcPath + " " + strCpyDstFolder;
	system(strCopyCmd.c_str());

	return;
}

// 文件剪切
void cmdMoveFile( string strMoveSrcPath, string strCpyDstFolder )
{
	string strMoveCmd = "move " + strMoveSrcPath + " " + strCpyDstFolder;
	system(strMoveCmd.c_str());

	return;
}

int main()
{
	// 文件复制
	string strCpySrcPath = ".\\CpySrcFolder\\copysrc.txt";
	string strCpyDstFolder = ".\\CpyDstFolder\\";
	cmdCopyFile( strCpySrcPath, strCpyDstFolder );

	// 文件剪切
	string strMoveSrcPath = ".\\MoveSrcFolder\\movesrc.txt";
	string strMoveDstFolder = ".\\MoveDstFolder\\";
	cmdMoveFile( strMoveSrcPath, strMoveDstFolder );



	return 1;
}