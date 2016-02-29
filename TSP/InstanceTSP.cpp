#include "InstanceTSP.h"

meta::InstanceTSP::InstanceTSP()
{

}

meta::InstanceTSP::~InstanceTSP()
{
	this->nodes.clear();
}

void meta::InstanceTSP::loadFromFile(string name)
{
	ifstream file(name.c_str());
	string line;
	
	getline(file,line);
	getline(file, line);
	getline(file, line);
	int n;
	char * pch;
	pch = strtok((char *)line.c_str()," ");
	pch = strtok(NULL, " ");
	n = atoi(pch);
	getline(file, line);
	getline(file, line);
	getline(file, line);

	for(int i = 0; i<n ; i++)
	{
		int n;
		double x, y;
		getline(file, line);
		pch = strtok((char *)line.c_str(), " ");
		n = atoi(pch);
		pch = strtok(NULL, " ");
		x = atof(pch);
		pch = strtok(NULL, " ");
		y = atof(pch);
		Node aux(n, x, y);
		this->nodes.push_back(aux);
	}
	this->generateDistances();
}

void meta::InstanceTSP::printInstances()
{
	cout << "Nodes from the instance: " << endl;
	for(unsigned int i=0; i<this->nodes.size(); i++)
	{
		cout << "Nodo " << nodes[i].getN() << ", x= " << nodes[i].getX() << " y= " << nodes[i].getY() << endl;
	}
}

void meta::InstanceTSP::generateDistances()
{
	int size = this->nodes.size();
	this->distances = vector< vector<double> > (size, vector<double>(size));
	for(int i=0; i<size; i++)
	{
		for(int j=0; j<size; j++)
		{
			if(i==j)
			{
				this->distances[i][j] = 0.0;
			}
			else
			{
				this->distances[i][j] = euclideanDistance(getNode(i), getNode(j));
			}
		}
	}
}

double meta::InstanceTSP::euclideanDistance(meta::Node n1, meta::Node n2)
{
	double x1 = n1.getX();
	double y1 = n1.getY();
	double x2 = n2.getX();
	double y2 = n2.getY();
	
	return  sqrt (pow(x2-x1, 2) + pow(y2-y1, 2));
}

meta::Node meta::InstanceTSP::getNode(int n)
{
	return this->nodes[n];
}

void meta::InstanceTSP::printDistanceMatrix()
{
	for( int i=1; i<nodes.size()+1; i++)
	{
		cout << i << " ";
	}
	cout << endl;
	for(int i=0; i<nodes.size(); i++)
	{
		cout << nodes[i].getN() << " ";
		for( int j=0; j<nodes.size(); j++)
		{
			cout << distances[i][j] << " ";
		}
		cout << endl;
	}
}

double meta::InstanceTSP::checkSolution(solutionTSP solution)
{
	double totalDistance = 0;
	
	for(unsigned int i = 0; i<solution.getSize(); i++)
	{
		if(i+1 < solution.getSize())
		{
			totalDistance += euclideanDistance(getNode(solution.getValueOfPosition(i)), getNode(solution.getValueOfPosition(i+1)));
		}
	}
	totalDistance += euclideanDistance(getNode(solution.getValueOfPosition(solution.getSize()-1)), getNode(solution.getValueOfPosition(0)));
	
	return totalDistance;
}

int meta::InstanceTSP::size()
{
	return this->nodes.size();
}
