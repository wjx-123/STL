//#pragma once
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//template <class T>//模板，占位，可以是任意类型
//
//class wjx_vector {
//private:
//#define WORK_LENGTH 64
//	
//public:
//	wjx_vector();
//
//	wjx_vector(int n, const T& data) : wjx_size(0), wjx_capa(0), wjx_data(nullptr) 
//	{
//
//	}
//
//	~wjx_vector()
//	{
//
//	}
//
//	void push_back(const T& data) 
//	{
//		insert_after(wjx_size - 1,data);
//	}
//
//	void insert_after(const int pos, const T& data) 
//	{
//		insert_before(pos + 1,data)
//	}
//
//	void insert_before(const int pos, const T& data) 
//	{
//		if (wjx_size == wjx_capa)
//		{
//			T* temp = wjx_data;
//			wjx_capa += WORK_LENGTH;
//			wjx_data = wjx_allocator(wjx_capa);
//			memcpy(wjx_data, temp, wjx_size * sizeof(T));
//			wjx_deallocator(temp);
//		}
//
//		for (int i = (int)wjx_size++; i > pos; i--)
//		{
//			wjx_data[i] = wjx_data[i - 1];
//		}
//
//		wjx_data[pos] = data;
//	}
//
//private:
//	T* wjx_allocator(const unsigned int& wjx_capa) 
//	{
//		return new T(wjx_capa);
//	}
//
//	void wjx_deallocator(T* arr) 
//	{
//		if (arr)
//		{
//			delete[] arr;
//		}
//	}
//private:
//
//	int wjx_size;
//	int wjx_capa;
//	T* wjx_data;
//};