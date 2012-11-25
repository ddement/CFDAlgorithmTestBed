int main (int argc, char** argv)
{
  int application;
  int domainDimensions;
  double sizeX;
  double sizeY;
  double sizeZ;
  int minCellsX;
  int minCellsY;
  int minCellsZ;
  int spaceAlgorithm;
  int spaceOrderOfAccuracy;
  int timeAlgorithm;
  int timeOrderOfAccuracy;

  getInput (application, 
            domainDimensions, 
	    sizeX, 
	    sizeY, 
	    sizeZ, 
	    minCellsX, 
	    minCellsY, 
	    minCellsZ, 
	    spaceAlgorithm, 
	    spaceOrderOfAccuracy, 
	    timeAlgorithm, 
	    timeOrderOfAccuracy);

}
