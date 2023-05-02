#pragma once
#include <QtWidgets>
#include <cmath>

class FACE;

class VERTEX
{
public:
	int x, y, z;
	VERTEX() {};
	VERTEX(int n_x, int n_y, int n_z) { x = n_x; y = n_y; z = n_z; }
};

class EDGE
{
public:
	VERTEX* P_orig;
	VERTEX* P_dest;
	FACE* left_face;
	FACE* right_face;
	EDGE() {};
	EDGE(VERTEX* nPO, VERTEX* nPD, FACE* nlf, FACE* nrf) { P_orig = nPO; P_dest = nPD;  left_face = nlf; right_face = nrf; }
};

class FACE
{
public:
	QVector<VERTEX*> vertexes;
	FACE() {};
	FACE(QVector<VERTEX*> n_vertex) { vertexes = n_vertex; }
};

class OBJECT
{
public:
	QVector<VERTEX*> vertexes;
	QVector<FACE*> faces;
	OBJECT() {};
};

class CAMERA
{
public:
	double theta, fi;
	double distance;
};