#include "iostream"
#include <string>
using namespace std;
class LibraryBook{
 private:
 int availableCopies;
 public :
 std :: string title;
 std :: string author;
 long isbnnumber;
 void setCopies(int copies){
 availableCopies = copies;
 } 
 int getCopies(){
 return availableCopies;
 }
 void displayDetails()
 {
 std :: cout << "Title : " << title << std :: endl;
 std :: cout << "Author : " << author << std :: endl;
 std :: cout << "ISBN : " << isbnnumber << std :: endl;
 std :: cout << "Available copies : " << availableCopies << std :: endl;
 }
};
int main(){
 LibraryBook bookinfo;
 std :: cout << "Enter the title of book :";
 std :: getline(std:: cin,bookinfo.title);
 
 std :: cout << "Enter the author name of book :";
 std :: getline(std:: cin,bookinfo.author);
 
 std :: cout << "Enter the isbn number of book :";
 std :: cin >> bookinfo.isbnnumber;
 int copies;
 
 std :: cout << "Enter the number of available book copyies :";
 std:: cin>>copies;

bookinfo.setCopies(copies);
 bookinfo.displayDetails();
 return 0;
 
}
