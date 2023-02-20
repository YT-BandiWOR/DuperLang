#include "FileReader.h"
#include "Tokenizer.h"


int wmain(int argc, const wchar_t* argv[]) {
	if (argc == 1) {
		auto file_content = FileReader::ReadText(L"C:\\Users\\kiram\\source\\repos\\DuperLang\\x64\\Release\\main.dup");
		auto virtual_tree_with_exception = Tokenizer(file_content).Tokenize();
		
		/*if (!virtual_tree_with_exception->second.isOk) {
			std::wcout << L"You program have syntax eror!" << std::endl;
			std::wcout << L"File: " << virtual_tree_with_exception->second.filepath << std::endl;
			std::wcout << L"Line: " << virtual_tree_with_exception->second.row << std::endl;
			std::wcout << L"Symbol: " << virtual_tree_with_exception->second.col << std::endl << std::endl;
			std::wcout << L"Error: " << virtual_tree_with_exception->second.text << std::endl;
		}
		*/

		//auto tree = Parser(virtual_tree).Parse();
		//auto vm = VirtualMachine(tree).run();
	}
}