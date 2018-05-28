#pragma once
#include"QuArr.h"
#include"QuUnDirList.h"
#include"QuBiDirList.h"

template<typename T>

class Create
{
public:
	virtual Stor<T>* factor(int count) = 0;
};

template<typename T>

class CreateQuArr : public Create<T>
{
public:
	~CreateQuArr() {};
	Stor<T>* factor(int count) override
	{
		return new QuArr<T>(count);
	}
};

template<typename T>

class CreateQuUnDirList : public Create<T>
{
public:
	~CreateQuUnDirList() {};
	Stor<T>* factor(int count) override
	{
		return new QuUnDirList<T>(count);
	}
};

template<typename T>

class CreateQuBiDirList : public Create<T>
{
public:
	~CreateQuBiDirList() {};
	Stor<T>* factor(int count) override
	{
		return new QuBiDirList<T>(count);
	}
};