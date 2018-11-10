void f()
{
	
}
void g()
{ f();
}
void h()
{
	int x=0;
	int y=0;
	g();
}
int main()
{
	h();
}
