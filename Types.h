#pragma once
#include <vector>

enum class TokenType
{
	NONE, INT, FLOAT, STRING, BOOL, KEYWORD, ID,
	
	EQ, SEMIEQ, PLUS, PLUSEQ, MINUS, MINUSEQ, STAR, STAREQ,
	SLASH, SLASHEQ, AMPER, DOLLAR, OR, AND, XOR, NOT, NOTEQ,
	LT, LTE, GT, GTE, DOT, COMMA,
	LEFT_PAR, RIGHT_PAR, LEFT_PAR_SQRT, RIGHT_PAR_SQRT,
	LEFT_PAR_CUR, RIGHT_PAR_CUR, QUOTE, DOUBLEQOUTE,
	INCREMENT, DECREMENT,
};

struct VirtualToken
{
	TokenType type;
	char* data;
	size_t data_size;
};


struct TokenizerException
{
	bool isOk;
	size_t col, row;
	std::wstring filepath;
	std::wstring text;
};


using VirtualTree = std::vector<VirtualToken>;
using VirtualTreeWithError = std::pair<VirtualTree*, TokenizerException>;
