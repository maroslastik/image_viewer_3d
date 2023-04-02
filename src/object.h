#pragma once
#include <QtWidgets>
#include <cmath>

class W_EDGE;

class VERTEX
{
public:
	double x, y, z;
	W_EDGE* edge;
};

class FACE
{
public:
	W_EDGE* edge;
};

class W_EDGE
{
public:
	VERTEX* vert_origin, * vert_destination;
	FACE* face_left, * face_right;
	W_EDGE* edge_left_prev, * edge_left_next;
	W_EDGE* edge_right_prev, * edge_right_next;
};

class OBJECT
{
public:
	std::vector<VERTEX> vertices;
	std::vector<W_EDGE> edges;
	std::vector<FACE> faces;
	OBJECT() {};
};