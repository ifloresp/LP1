#include <iostream>
#include <vector>
using namespace std;
int main(){
	vector<string> bad_words;
	vector<string> words;
	string word;
	bad_words.push_back("FUCK");
	bad_words.push_back("SHIT");
	bad_words.push_back("BITCH");
	while (cin>>word && word!="0"){
		words.push_back(word);
	}
	
	for(int i=0;i<words.size();i++){
	for(int a=0;a<bad_words.size();a++){
		if (words[i]==bad_words[a])
			words[i]="piii";		
	    	
}
}
	for(int j=0;j<words.size();j++)
	cout<<words[j]<<"\t";
	return 0;	
}
