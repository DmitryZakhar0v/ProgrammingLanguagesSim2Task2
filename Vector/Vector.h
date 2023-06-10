#pragma once
#include <iostream>

namespace miit::vector
{

	class Vector
	{
	public:

		/*
		@brief �������� vector'a �� initializer_list
		@param list ���� �� �������� �������� vector
		*/
		Vector(const std::initializer_list<int> list);

		/*
		@brief ������ ������ �� vector
		*/
		~Vector();

		/*
		@brief ��������� ������ vector'a
		@return ���������� ��������� vector'a
		*/
		int get_size() const;

		/*
		@brief ���������� �������� � ������
		@param �������� ��������
		*/
		void append(int value);

		/*
		@brief �������� �������� �� vector �� �������
		@param index ������ ��������
		*/
		void pop(int index);

		/*
		@brief ��������� ������� �������� � ������
		@param value ������� ��������
		@return ������ �������� ���� �� ���� � vector � -1 ���� ��� � ��� ���
		*/
		int find(int value) const;

		/*
		@brief ��������� ���������� �� ���������� ��������� � vector
		@return true ���� ���� �������� � false ���� ���
		*/
		bool is_empty() const;

		/*
		@brief ���������� ��������� ���������� ������
		@param index ������ �������� � �������
		@return ������� �� �������
		*/
		int& operator[](int index);

		/*
		@brief ���������� ��������� �����������
		@param Vector ������ ��� �����������
		@return ������������� ������ ���� Vector
		*/
		Vector& operator=(const Vector& vector);

		/*
		@brief ���������� move ���������
		@param Vector ������ ��� ����
		@return ������ ���� DLList
		*/
		Vector& operator=(Vector&& vector) noexcept;

		/*
		@brief Move �����������
		@param vector ������ ��� ����
		*/
		Vector(const Vector& vector);

		/*
		@brief ����������� �����������
		@param vector ������ ��� �����������
		*/
		Vector(Vector&& vector) noexcept;

		/*
		@brief ���������� ��������� ������
		@param os ����� ������
		@param vector ������ ��� ������
		*/
		friend std::ostream& operator<<(std::ostream& os, Vector& vector) noexcept;

		/*
		@brief ���������� ��������� �����
		@param rha ������ �������� ��� ���������
		@param lha ������ �������� ��� ���������
		@return false ���� ����� � true ���� ���
		*/
		friend bool operator==(const Vector& rha, const Vector& lha) noexcept;

		/*
		@brief ���������� ��������� �� �����
		@param rha ������ �������� ��� ���������
		@param lha ������ �������� ��� ���������
		@return true ���� ����� � false ���� ���
		*/
		friend bool operator!=(const Vector& rha, const Vector& lha) noexcept;

		/*
		@brief �������������� ������ � ������
		@return ������ ���������� �� �������
		*/
		std::string to_string() const noexcept;

	private:
		size_t size;
		int* values;

	};
};