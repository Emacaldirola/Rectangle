/*! \file CRectangle.h
	\brief Declaration of the class Rectangle

	Details.
*/

#define _CRT_SECURE_NO_WARNINGS
#ifndef RECTANGLE_H
#define RECTANGLE_H


/// @class Rectangle
/// @brief to manage an object with the shape of a rectangle
class Rectangle
{
private:
	float height;
	float width;

public:

	/// @name CONSTRUCTORS/DESTRUCTOR
	/// @{
	Rectangle();
	Rectangle(float w, float l);
	Rectangle(const Rectangle& r);

	~Rectangle();
	/// @}


	/// @name BASIC HANDLING
	/// @{
	void Init();
	void Init(const Rectangle& r);
	void Reset();
	/// @}


	/// @name GETTERS / SETTERS
	/// @{
	void SetHeight(float h);
	void SetWidth(float w);
	void SetDim(float w, float h);


	void GetDim(float& w, float& h);
	float GetHeight();
	float GetWidth();
	float GetPerimeter();
	float GetArea();

	/// @}


	/// @name DEBUG and SERIALIZATION 
	/// @{
	void ErrorMessage(const char* string);
	void WarningMessage(const char* string);
	void Dump();
	/// @}

};

#endif
