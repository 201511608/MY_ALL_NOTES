// DXF LIBRARY
// VB

// MLINE
Dim e1_mline As New netDxf.Entities.MLine(array1, 40)

        '   Dim vec2 As New netDxf.Vector2(10.0)
        '   Dim vec3 As New netDxf.Vector2(-10.0)
        '   Dim entity As New netDxf.Entities.Arc(vec2, 5.0, 15.0, 25.0)
        '   Dim entity2 As New netDxf.Entities.Arc(vec3, 5.0, 15.0, 25.0)
        '   Dim entity3 As New netDxf.Entities.Line(vec3, vec2)
        '  Dim Cir As New netDxf.Entities.Circle(vec3, 25)
        '  dxf.AddEntity(entity)
        '  dxf.AddEntity(entity2)
        '  dxf.AddEntity(entity3)
        '  dxf.AddEntity(Cir)
        '    dxf.AddEntity(a.Stirrup(vec2, vec3))
        '   Dim L As New Tables.Layer("layer_1")


        Dim e2_lwpolyline As New netDxf.Entities.LwPolyline(Vector_BC1, True)
        Dim list2 As List(Of LwPolyline) = New List(Of LwPolyline)
        list2.Add(e2_lwpolyline)
        Dim boundary2 As New netDxf.Entities.HatchBoundaryPath(list2)
        Dim hatch2 As New Hatch(HatchPattern.Net, False)
        hatch2.BoundaryPaths.Add(New HatchBoundaryPath(list2))
        hatch2.CreateBoundary(True)

        Dim plv1 As New PolylineVertex(5, 5, 0)
        Dim plv2 As New PolylineVertex(15, 15, 0)
        Dim plv3 As New PolylineVertex(0, 15, 0)
        Dim array2() As PolylineVertex = {plv1, plv2, plv3}
        Dim e1_polyline As New netDxf.Entities.Polyline(array2, True)
        '       Dim list2 As List(Of Polyline) = New List(Of Polyline)
        '     list2.Add(e1_polyline)
        '     Dim boundary2 As New netDxf.Entities.HatchBoundaryPath(list2)


        Dim circle As New Entities.Circle(New Vector2(0, 10), 5)
        Dim list1 As List(Of Circle) = New List(Of Circle)
        list1.Add(circle)
        Dim boundary As New netDxf.Entities.HatchBoundaryPath(list1)
        Dim hatch As New Hatch(HatchPattern.Net, False)
        hatch.BoundaryPaths.Add(New HatchBoundaryPath(list1))
        hatch.CreateBoundary(True)



        dxf.AddEntity(hatch2)