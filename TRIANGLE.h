// TRIANGULAR LIBRARY 

Clear()											 /// Clear input geometry.

AddSegment(int p0, int p1)						
AddSegment(int p0, int p1, int boundary)


AddHole(double x, double y)      				 /// Adds a hole location to the geometry.


AddRegion(double x, double y, int id)			 /// Adds a hole location to the geometry.


AddPoint(double x, double y)					 /// Adds a point to the geometry.
AddPoint(double x, double y, int boundary)   
AddPoint(double x, double y, int boundary, double attribute)
AddPoint(double x, double y, int boundary, double[] attribs)
