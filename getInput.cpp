/* Get the input variables to initialize the program.  
 * Algorithm specific inputs provided in separate input.
 *
 * TODO: Values are currently hardcoded.  Implement in such
 *       a way that it reads inputs from plain text files.   
 *
 */
void getInput (int& application,
               int& domainDimensions,
               double& sizeX,
	       double& sizeY,
	       double& sizeZ,
	       int& minCellsX,
	       int& minCellsY,
	       int& minCellsZ,
	       int& spaceAlgorithm,
	       int& spaceOrderOfAccuracy,
	       int& timeAlgorithm,
	       int& timeOrderOfAccuracy)
{
  /* Set application to be solved and dimension of problem
   * 0) Shock Tube
   */
  application = 0;
  domainDimensions = 1;

  /* Set size of domain in each direction and the minimum
   * number of cells in each direction.  1-D applications
   * use X, 2-D X and Y, 3-D X, Y, and Z
   *
   */
  sizeX = 5;
  sizeY = 0;
  sizeZ = 0;
  minCellsX = 100;
  minCellsY = 1;
  minCellsZ = 1;

  /* Set the algorithm for spatial discretization and its
   * order of accuracy.  Some algorithms may only be implemented
   * for certain orders of accuracy.  If this is the case, 
   * order of accuracy will be adjusted and the used order will
   * be provided.
   *
   * 0) Finite Volume*
   * 1) Finite Volume (ENO)*
   * 2) Finite Volume (WENO)*
   * 3) Discontinuous Galerkin*
   * 4) Reconstructed Discontinuous Galerkin (RDG/HWENO)*
   * 5) Spectral Difference*
   *
   * *: not implemented
   */
  spaceAlgorithm = 0;
  spaceOrderOfAccuracy = 1;

  /* Set the algorithm for temporal discretization and its
   * order of accuracy.  Some algorithms may only be implemented
   * for certain orders of accuracy.  If this is the case, 
   * order of accuracy will be adjusted and the used order will
   * be provided.
   * 
   * 0) Explicit Runge-Kutta
   */
  timeAlgorithm = 0;
  timeOrderOfAccuracy = 1;
}
