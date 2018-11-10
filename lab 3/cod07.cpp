{
	if (1-frame_width<=0 || z-frame_width<=0)
		throw runtime_error("argumento negativo");
	int area2=framed_area(1,z);
	if (y-frame_width<=0 || z-frame_width<=0)
		throw runtime_error("argumento negativo");
	int area3=framed_area(y,z);
}
}
catch (exception & e){
	cerr <<"error: "<<e.what()<<'\n';
	return 1;
}
