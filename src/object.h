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
	VERTEX P_orig;
	VERTEX P_dest;
	int left_face;
	int right_face;
	EDGE() {};
	EDGE(VERTEX nP1, VERTEX nP2, int nlf, int nrf) { P_orig = nP1; P_dest = nP2;  left_face = nlf; right_face = nrf; }
};

class FACE
{
public:
	QVector<EDGE> edges;
	FACE() {};
	FACE(QVector<EDGE> n_edges) { edges = n_edges; }
};

class OBJECT
{
public:
	QVector<VERTEX> vertices;
	QVector<EDGE> edges;
	QVector<FACE> faces;
	OBJECT() {};
	VERTEX getVertice(int i) { return vertices[i]; }
    EDGE getEdges(int i) { return edges[i]; }
    void setEdges(const QVector<EDGE>& newEdges) { edges = newEdges; }
	void setVertices(const QVector<VERTEX>& newVertices) { vertices = newVertices; }
};