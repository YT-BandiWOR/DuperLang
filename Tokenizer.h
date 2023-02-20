#pragma once
#include <iostream>
#include "Types.h"

struct TokenizerStatus
{
	size_t row = 0, col = 0;
	TokenType token_type = TokenType::NONE;
	wchar_t c = 0;
};

class Tokenizer {
public:
	TokenizerStatus st;
	std::wstring str;

	Tokenizer(std::wstring& str) {
		this->str = str;
	}

	VirtualTreeWithError* Tokenize() {
		for (auto&c: this->str)
		{
			this->st.c = c;

		}

		return nullptr;
	}
};