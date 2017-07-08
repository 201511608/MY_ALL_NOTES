EyeShot Note


// Library Calls 
using devDept.Eyeshot.Entities;
using devDept.Geometry;
using devDept.Eyeshot;
using devDept.Graphics;
using devDept.Eyeshot.Translators;
using devDept.Eyeshot.Triangulation;
using devDept.Eyeshot.Mouse3D;

//Program starter function
protected override void OnLoad(EventArgs e)
{
base.OnLoad(e);
}

//

Can also be define constructior of arrays   
Circle[] circle3 = new Circle[200];
circle3[i] =  new circle(0,0,0,20); // x y z R as constructor


// Mesh Array and can call it as !!!
 Mesh[] m3 = new Mesh[20];
 m3[i] = Mesh.CreateCylinder(R, H, 10); m3[i] = Mesh.CreateSphere(R, H, 10);....
   
   
Line
Line line1 = new Line(10, 10, 40, 40);// Point x y x1 y1  			 ;
Line l1 = new Line(0, 0, 0, 18, 0, 50); // 3D line   x y z x1 y1 z1  ;

Circle
Circle circle2 = new Circle(0, 0, 0, 30);// x y z radios

Circle c1 = new Circle(pl5, new Point3D(0, -35, 0), 7);   (Plane, coordinat,Radius )  // Plane pl5 = new Plane(Point3D.Origin, Vector3D.AxisX, Vector3D.AxisZ);


Square
LinearPath square2 = new LinearPath(30, 30);  // from origin   Width and Height

Arc
Arc a3 = new Arc(Plane.YZ, new Point3D(0, -35, -7), 1, Math.PI, 6 * Math.PI / 4);// (plane,center,radius,startangleRADIAN,endangleRADIAN)
Arc a1, a2;//can be defined !

Ellipse
Ellipse(double x, double y, double z, double rx, double ry); // (x, y, z, major, minor)
Ellipse sect  = new Ellipse(pl5, new Point3D(0, -35, 0), 5, 10);// ( Plane,coordinate,major,minor)    //    pl5 = new Plane(Point3D.Origin, Vector3D.AxisX, Vector3D.AxisZ);

Mesh
Mesh = 3d Box Sphere Cone Cylinder
Mesh m = Mesh.CreateBox(5, 5, 5); // L B H at origin

Fillet  ::  to make curve between two lines
Arc a1, a2;
Curve.Fillet(l1, l2, 20, false, false, true, true, out a1);// SEE DOWN LINE
Fillet(ICurve C1, ICurve C2, double radius, bool flip1, bool flip2, bool trim1, bool trim2, out Arc fillet);

Plane Surface Rectangle // like sheet		
 PlanarSurface s7 = PlanarSurface.CreatePlanar(new Plane(new Point3D(0, 0, -7), Vector3D.AxisZ),  new Point3D(80, -20, 0), new Point3D(130, 20, 0)); //(plane,bottomLeft coordinat,TopRight corrdinate)
Plane Surface Circle // Circle
 PlanarSurface s8 = PlanarSurface.CreatePlanar(c2);  // Circle c2 = new Circle(new Point3D(112, 0, -8), 5);

            PlanarSurface s8 = PlanarSurface.CreatePlanar(c2);
Surface  // Like plane surface i.e cylinder like
Surface[] sweep = square2.SweepAsSurface(l1, 0.01);  //  LinearPath square2 = new LinearPath(30, 30);   //Line l1 = new Line(0, 0, 0, 18, 0, 50); // viewportLayout1.Entities.Add(ss);


Surface Revolve // Rotate to Theta 
l1.RevolveAsSurface(0, Math.PI * 2, Vector3D.AxisY, Point3D.Origin)// (Theta,axis,Point3D)   //Line l1 = new Line(0, 0, 0, 18, 0, 50); 


Extrude // like plane surface
Mesh seat = square2.ExtrudeAsMesh(0,0,50, 0.9, Mesh.natureType.ColorPlain);// (x y z Tolorance,.. )   //square2 = new LinearPath(30, 30);   

Extrude // 3DSOLID
 devDept.Eyeshot.Entities.Region regSeat = new devDept.Eyeshot.Entities.Region(square2); //square2 = new LinearPath(30, 30); 
 Mesh seat = regSeat.ExtrudeAsMesh(5, 0.1, Mesh.natureType.Smooth);
 
             Point3D[] seatPoints ={new Point3D(0,0),new Point3D(30,0),new Point3D(30,30),new Point3D(0,0),};  
			 devDept.Eyeshot.Entities.Region regSeat = new devDept.Eyeshot.Entities.Region(new LinearPath(seatPoints));  // makes to planeReion
             Mesh seat = regSeat.ExtrudeAsMesh(5, 0.1, Mesh.natureType.ColorPlain);

Extrude // As Surface
		            Line l4 = new Line(0, -35, 0, 0, 35, 0);
                    Surface s6 = c1.ExtrudeAsSurface(l4)[0];   // ExtrudeAsSurface(Line line);

			
Trim
Surface.Trim(sweep[0], s6, 0.01, false, false); // 0 1 2 3 4 we add 5 items surface   (surfaceone,surfacetwo,false,false)
viewportLayout1.Entities.Regen();		


Mirror
Mirror m = new Mirror(Plane.ZX);//

LeaderAndText  // Tp Show text on the 3D screeen

 LeaderAndText[] textC1 = new LeaderAndText[3]; // Defining
LeaderAndText lat = new LeaderAndText(new Point3D(0, 800, 1200),
                     "Height = 12 m", new Font("Tahoma", 8.25f), Color.White, new Vector2D(0, 20));
					 (point3d(x,y,z), text,font,color,vector2D)
lat.FillColor = Color.Black;
viewportLayout1.Labels.Add(lat);


Entity // Make bunch to one name
Entity[] check = new Entity[] { concrete[0] , concrete[1] , concrete[2] };

//Translate
Translate objects= square
square.Translate(50, 10, 0);  // x y z
	// TransformBy
	ss.TransformBy(mm);  // ss any line surface to mm position ex  //Mirror mm = new Mirror(Plane.ZX);

//Rotate
m7[j].Rotate((90 * Math.PI / 180), Vector3D.AxisY);	// (Radian , Vector3D.Axis?) // Rotate with respective to Origin

m7[j].Rotate(double angleInRadians, Vector3D axis, Point3D center);// Rotate with respective to Point3D center

 
  
//Clone  /  Copy
 outerPoints[6] = (Point2D) outerPoints[0].Clone();  //  outerPoints[0] = new Point2D(0, 800);



// LAYER
	// LAYER add !
int traj = viewportLayout1.Layers.Add("Trajectory", Color.DeepPink);  // Define layer
viewportLayout1.Entities.Add(l1, traj);// adding // Line l1 = new Line(0, 0, 0, 18, 0, 50); 
	// LAYER TURN OFF !
viewportLayout1.Layers.TurnOff(traj);


// Add lists    // Check further in techniques
 List<Entity> Variable = new List<Entity>(); // Direct declare//  Variable.Add(axLine);Variable.Add(s1);
 
// Clear
           viewportLayout1.Clear();                 // Clear everything of Layout1
		   viewportLayout1.Materials.Clear();       // Clear Material of Layout1
            
 
// ENTITIES
  Entity[] profile = new Entity[] { l5, l6, a3, l7 }; // Add to one entity
  
  //Display Entitiy
  viewportLayout1.Entities.Add(l1);  	  // Add Entity  No Layer
  viewportLayout2.Entities.Add(circle2, 0, Color.Black); // Add Entitiy with Properties  //Color.FromArgb(100, Color.Gray)
  viewportLayout1.Entities.Add(l1, traj); // Add Entity and layer //   traj = viewportLayout1.Layers.Add("Trajectory", Color.DeepPink);  //Line l1 = new Line(0, 0, 0, 18, 0, 50);
  viewportLayout1.Entities.AddRange(new Entity[] { l5, l6, a3, l7 }, traj);    // Add Group Entites and Layer 
  viewportLayout1.Entities.Regen();  // Show after trim !!
  // zoom
   viewportLayout.ZoomFit();
   viewportLayout.Entities.Clear();
  // clear
   viewportLayout.Entities.Clear();
  // Grid
   viewportLayout1.Grid.Visible = false; 
   

   
// Display
 // Display object = circle2
 viewportLayout2.Entities.Add(circle2, 0, Color.Black);
 viewportLayout.ZoomFit();
 viewportLayout.Entities.Clear();
 viewportLayout.Entities.AddRange(EntList);  // ??
 viewportLayout1.Grid.Visible = false;   //Grid view visibilty off
 viewportLayout1.SetView(devDept.Eyeshot.viewType.vcTopFaceTop);   // Set Camera view and odo zoom fit
  
  
 // Number of Entities 
 number  = viewportLayout2.Entities.Count ; // Give the number of entities
 
 
 // Add Material Properties
  string steeMatName = "Blue steel";
  viewportLayout1.Materials.Add(steeMatName, new Material(Color.RoyalBlue));
 
 
 
 

 
 // Techniquues.........................................................................................................................................
 //  Check file "EyeShot Csharp2"
 UpdateProgress(count, totCount, txt, worker);  // will display progress
  count++;   totCount = size * size;
  tring txt = String.Format("reateing box {0} of {1}...", count, totCount);
   protected override void DoWork(BackgroundWorker worker, DoWorkEventArgs doWorkEventArgs)
      
	  
	  // Random Colour
	   Color color = Color.FromArgb(255, (byte)rand.Next(255), (byte)rand.Next(255), (byte)rand.Next(255));
	   
	   //To Make Transperent
	   var sp1 = Mesh.CreateSphere(10, 10, 10);
       viewportLayout1.Entities.Add(sp1, 0, Color.FromArgb(127, Color.Red));

 
 //Set Properties   Color  Material ....
                string steeMatName = "Blue steel";
				viewportLayout1.Materials.Add(steeMatName, new Material(Color.RoyalBlue));

				m3[i] = Mesh.CreateCylinder(R, H, 10);
                m3[i].MaterialName = steeMatName;   
                m3[i].ColorMethod = colorMethodType.byEntity;
                m3[i].Color = Color.Red;
                m3[i].Translate(C,(B/ TopNo-1)*i- (B / TopNo)/2, 0);
                viewportLayout1.Entities.Add(m3[i]);
 
 //Extrude
  Point3D[] seatPoints =
         {
                new Point3D(0,0,0),new Point3D(30,0,5), new Point3D(30,30,5), new Point3D(0,0,0),
            };
			
			or
			
             Point3D[] seatPoints =
         {
                new Point3D(0,0),
                new Point3D(30,0),
                new Point3D(30,30),
                new Point3D(0,0),

            };

            devDept.Eyeshot.Entities.Region regSeat = new devDept.Eyeshot.Entities.Region(new LinearPath(seatPoints));
            Mesh seat = regSeat.ExtrudeAsMesh(5, 0.1, Mesh.natureType.ColorPlain);
 
 
 
 //Making Fillet between two lines ... Fillet
 Arc a1;
  Line l1 = new Line(0, 0, 0, 18, 0, 50);
  Line l2 = new Line(18, 0, 50, 80, 0, 50);
  Curve.Fillet(l1, l2, 20, false, false, true, true, out a1)
 
 // Composit section :: making different line ach to one entity
 CompositeCurve rail = new CompositeCurve(l1, a1, l2, a2, l3); // l1 l2 l3 lines ,, a1 a2 arcs .. so on we can add
 
 
 
 // path fallow fillet use
  Plane sectionPlane = new Plane(rail.CurveList[0].StartPoint, rail.CurveList[0].TangentAt(0));         // Plane  Plane(Point3D P, Vector3D N)   // This is for ellips only
     Ellipse section = new Ellipse(sectionPlane, rail.StartPoint, ellMinor, ellMajor);					// Ellipse
	 
        surface[] sweep = section.SweepAsSurface(rail, 0.01);											// surfece
            viewportLayout1.Entities.AddRange(sweep);													// view
 
  // 2 path fallow fillet use
  Plane sectionPlane = new Plane(rail.CurveList[0].StartPoint, rail.CurveList[0].TangentAt(0));         // Plane  Plane(Point3D P, Vector3D N)
      LinearPath square2 = new LinearPath(30, 30);   													// square
        surface[] sweep = square2.SweepAsSurface(rail, 0.01);											// surfece
            viewportLayout1.Entities.AddRange(sweep);													// view
  
  
 // Selection check
  Entity ent = viewportLayout2.Entities[i];   // Given i gives out Entity Class and its properties
if (ent is Line)        
if (ent is LinearPath)
	
ent.GetType()			// print it out  
  
  Line line = (Line)ent;                // Print   ent.GetType(),i,line.StartPoint,line.EndPoint
  Circle circle = (Circle)ent;			// Print   ent.GetType(), i, circle.Center, circle.Radius
 
 
 
 //Plane Planes selection 
                        CompositeCurve rail = new CompositeCurve(l1, a1, l2, a2, l3); // l1 l2 l3 lines ,, Arc a1 a2  ,,arcs .. so on we can add
 Plane sectionPlane = new Plane(rail.CurveList[0].StartPoint, rail.CurveList[0].TangentAt(0));
               Ellipse section = new Ellipse(sectionPlane, rail.StartPoint, ellMajor, ellMajor);
               Surface[] sweep = section.SweepAsSurface(rail, 0.01);
               viewportLayout1.Entities.AddRange(sweep);
  
  Plane pl5 = new Plane(Point3D.Origin, Vector3D.AxisX, Vector3D.AxisZ);
			 Circle c1 = new Circle(pl5, new Point3D(0, -35, 0), 7);
             Line l4 = new Line(0, -35, 0, 0, 35, 0);
             viewportLayout1.Entities.Add(l4, traj);
             Surface s6 = c1.ExtrudeAsSurface(l4)[0];
			 
			 
// Rotate and form Rubber capacity : Rotate Surface
  // adds a layer
            int rubber = viewportLayout1.Layers.Add("Rubber", Color.FromArgb(7, 7, 7));

            // rubber cap
            Line l5 = new Line(0, -25, -7, 0, -25, -8);
            Line l6 = new Line(0, -35, -8, 0, -25, -8);
            Arc a3 = new Arc(Plane.YZ, new Point3D(0, -35, -7), 1, Math.PI, 6 * Math.PI / 4);
            Line l7 = new Line(0, -36, -7, 0, -36, 0);

            Entity[] profile = new Entity[] { l5, l6, a3, l7 };

            viewportLayout1.Entities.AddRange(new Entity[] { l5, l6, a3, l7 }, traj);

            foreach (ICurve ent in profile)
            {
                Surface s = ent.RevolveAsSurface(0, Math.PI * 2, Vector3D.AxisY, Point3D.Origin)[0];
                viewportLayout1.Entities.Add(s, rubber);
            }
// Mirror Example
  Mirror mm = new Mirror(Plane.ZX);
            ss.TransformBy(mm); // SS is any surbace or line or 3d object
            viewportLayout1.Entities.Add(ss, rubber);

//List Clear
 List<Entity> Variable = new List<Entity>(); // Direct declare//  Variable.Add(axLine);Variable.Add(s1);
 Variable.Clear();
 
 // TransformBy Technique
  inners[1] = new LinearPath(new Point3D[]
                                             {
                                                 new Point3D(0, 0, 0),
                                                 new Point3D(7, 0, 0),
                                                 new Point3D(3.5, 7, 0),
                                                 new Point3D(0, 0, 0)
                                             });

   inners[1].Reverse();  // Reversing technique
 transf = new Translation(23, 0, 0) * new Rotation(Math.PI / 3, Vector3D.AxisZ);
 inners[1].TransformBy(transf);
 