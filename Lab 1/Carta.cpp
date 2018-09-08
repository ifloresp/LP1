#include <iostream>
using namespace std;
int main() {
  string fname, f1name, f2name, f2sex;
  int fage, timepast;
  cout <<"Dear _______ \n";
  cout <<"Insert your friend's name ";
  cin >> fname;
  cout<<"\n I hope you're doing well because i haven't seen you in a while\n";
  cout<<"I haven't seen _______ in a while either, what is up with his life?\n";
  cout<<"Insert friend's name ";
  cin >> f1name;
  cout<<"Also, if you see ______ ask ___ to call me 'cause i miss ___ as well\n";
  cout<<"Insert other friend's name ";
  cin >> f2name;
  cout<<"Is your friend a 'Him' or a 'Her'\n";
  cin >> f2sex;
  cout<<"You must have change a lot. When i last saw you, you were just __ years old and it's been __ years since then\n";
  cout<<"How old was your friend? ";
  cin>>fage;
  if(fage<1){
    cout<<"you must be joking, try again\n";
    cin>>fage;
  }
  cout<<"And how many years have past since you last saw him? ";
  cin>>timepast;
  if(timepast<1 || timepast>50 ){
    cout<<"are you sure? try again\n";
    cin>>timepast;
  }
  if(fage+timepast<18){
    cout<<"#########################";
    cout<<"\n Dear "<<fname;
    cout<<"\n I hope you're doing well because i haven't seen you in a while\n";
    cout<<"I haven't seen "<<f1name<<" in a while either, what is up with his life?\n";
    cout<<"Also, if you see "<<f2name<<" ask "<<f2sex<<" to call me 'cause i miss "<<f2sex<<" as well\n";
    cout<<"You must have change a lot. When i last saw you, you were just "<<fage<<" years old and it's been "<<timepast<<" years since then\n";
    cout<<"Today you're still too young but soon you will have more responsabilities and will turn into a clever teen\n";
  }
  if(fage+timepast==18){
    cout<<"#########################";
    cout <<"\n Dear "<<fname;
    cout<<"\n I hope you're doing well because i haven't seen you in a while\n";
    cout<<"I haven't seen "<<f1name<<" in a while either, what is up with his life?\n";
    cout<<"Also, if you see "<<f2name<<" ask "<<f2sex<<" to call me 'cause i miss "<<f2sex<<" as well\n";
    cout<<"You must have change a lot. When i last saw you, you were just "<<fage<<" years old and it's been "<<timepast<<" years since then\n";
    cout<<"you now are at the blossom of life and next year you'll be able to vote. I hope you make the right decisions\n";
  }
  if(fage+timepast>18){
    cout<<"#########################";
    cout <<"\n Dear "<<fname;
    cout<<"\n I hope you're doing well because i haven't seen you in a while\n";
    cout<<"I haven't seen "<<f1name<<" in a while either, what is up with his life?\n";
    cout<<"Also, if you see "<<f2name<<" ask "<<f2sex<<" to call me 'cause i miss "<<f2sex<<" as well\n";
    cout<<"You must have change a lot. When i last saw you, you were just "<<fage<<" years old and it's been "<<timepast<<" years since then\n";
    cout<<"you're now an adult and i hope you are making good decisions in life";
  }
  if(fage+timepast>=65){
    cout<<"#########################";
    cout <<"\n Dear "<<fname;
    cout<<"\n I hope you're doing well because i haven't seen you in a while\n";
    cout<<"I haven't seen "<<f1name<<" in a while either, what is up with his life?\n";
    cout<<"Also, if you see "<<f2name<<" ask "<<f2sex<<" to call me 'cause i miss "<<f2sex<<" as well\n";
    cout<<"You must have change a lot. When i last saw you, you were just "<<fage<<" years old and it's been "<<timepast<<" years since then\n";
    cout<<"I really hope you are enjoying retirement and can't wait to visit before you pass away";
  }
  cout<<"\n Yours sincerely \n \n Iben";
}
