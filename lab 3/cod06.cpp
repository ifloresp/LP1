{
	if (x<=0 || y<=0) throw
		runtime_error("argumento no positivo");
		
	int area1=area(x,y);
	if (z<=2)
		throw
			runtime_error("argumento no positivo");
	int area2=framed_area(1,z);
	if (y<=2 || z<=2)
		throw
			runtime_error("argumento no positivo");
	int area3=framed_area(y,z);
	double ratio=double(area1)/area3;
}
