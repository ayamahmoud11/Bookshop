#include <iostream>
#include <string>
using namespace std;
struct book
{
int id, puplication_year, quantity;
string title, category, author_name;
float price;
};
book arr_book[5];
struct display
{
string title, category, author_name;
};
display arr_display[5];
struct customer
{
int id;
string user_name, password,password2, email,first_name,last_name,address;
long long phone;
};
customer arr_customer[10];
struct previousorder
{
string book_name[35], order_date, ship_date;
int book_id[35], customer_id;
int total_price;
};
previousorder arr_previousorder[10];
void add(int y, int& w)
{
int num = 0, sum = 0, k = 0, arr[30] = {};
string again;
do
{
cout << "\t\t\t\t\t\tBooks list\n";
cout << "\t\t\t\t\t\t__________\n\n";
cout << "Num.\tID\t Title\t Category\t Author name\t Publication year\tPrice\t Quantity in stock\n\n";
for (int i = 0; i < 5; i++)
{
if (i == 4)
{
cout << i + 1 << "\t" << arr_book[i].id << "\t" << arr_display[i].title <<
"\t" << arr_display[i].category << "\t"
<< arr_display[i].author_name << "\t" <<
arr_book[i].puplication_year << "\t\t\t" << arr_book[i].price << "\t\t\t" << arr_book[i].quantity <<
"\n";
}
else
cout << i + 1 << "\t" << arr_book[i].id << "\t" << arr_display[i].title <<
"\t" << arr_display[i].category << "\t" << arr_display[i].author_name <<
"\t\t" << arr_book[i].puplication_year << "\t\t\t" <<
arr_book[i].price << "\t\t\t" << arr_book[i].quantity << "\n";
}
  bool word;
cout << "\nDo you want to add a book ? (yes/no) : ";
do {
    word = true;
cin >> again;
if (again == "yes")
{
cout << "Enter your choice : ";
do {
cin >> num;
if (num < 1 || num>5)
{
cout << "Please try again and enter a valid number :";
}
else if (arr_book[num - 1].quantity == 0)
{
cout << "This book is out of stock , Please try againand enter a valid number : ";
}
} while (num < 1 || num>5 || arr_book[num - 1].quantity == 0);
cout << "\n";
sum += arr_book[num - 1].price;
arr_book[num - 1].quantity--;
arr[k] = num - 1;
k++;
}
else if (again == "no")
{
if (sum > 0)
{
cout << "\n\t\t\tYour receipt\n";
cout << "\nOrder date : 14/6/2021";
cout << "\nShip date : 17/6/2021\n\n";
cout << "\n\t\t\tYour order\n\n";
for (int i = 0; i < k; i++)
{
cout << arr_book[arr[i]].id << ' ' <<
arr_book[arr[i]].title << "\n";
arr_previousorder[w].book_id[i] =
arr_book[arr[i]].id;
arr_previousorder[w].book_name[i] =
arr_book[arr[i]].title;
}
arr_previousorder[w].total_price = sum;
arr_previousorder[w].customer_id = arr_customer[y].id;
arr_previousorder[w].order_date = "14/6/2021";
arr_previousorder[w].ship_date = "17/6/2021";
w++;
cout << "\nTotal price = " << sum << "\n";
}
}
else
{
cout << "Please try again and enter a valid word : ";
word = false;
}
} while (word == false);
} while (again == "yes");
}
void search()
{
cout << "\nPlease choose your search type\n\n";
cout << "1.Search by title\n" << "2.Search by author name\n" << "3.Search by category\n\n";
cout << "\nPlease enter your choice : ";
int y;
string g;
bool valid = true, word = false;
do {
valid = true;
cin >> y;
if (y == 1)
{
cout << "Enter a title : ";
do {
cin >> g;
for (int i = 0; i < 5; i++)
{
if (g == arr_book[i].title)
{
cout << "\n\t\t\t" << arr_book[i].title << "\n";
cout << "ID :" << ' ' << arr_book[i].id << "\n";
cout << "Author name : " <<
arr_book[i].author_name << "\n";
cout << "Publication year :" << ' ' <<
arr_book[i].puplication_year << "\n";
cout << "Price :" << ' ' << arr_book[i].price << "\n";
cout << "Quantity in stock :" << ' ' <<
arr_book[i].quantity << "\n";
cout << "\t\t\t__\n\n";
word = true;
}
}
if (word == false)
{
cout << "Please try again and enter a valid title : ";
}
} while (word == false);
}
else if (y == 2)
{
cout << "Enter an author name : ";
do {
cin >> g;
for (int i = 0; i < 5; i++) {
if (g == arr_book[i].author_name) {
cout << "\n\t\t\t" << arr_book[i].author_name <<
"\n";
cout << "ID :" << ' ' << arr_book[i].id << "\n";
cout << "Title : " << arr_book[i].title << "\n";
cout << "Publication year :" << ' ' <<
arr_book[i].puplication_year << "\n";
cout << "Price :" << ' ' << arr_book[i].price << "\n";
cout << "Quantity in stock :" << ' ' <<
arr_book[i].quantity << "\n";
cout << "\t\t\t__\n\n";
word = true;
break;
}
}
if (word == false)
{
cout << "Please try again and enter a valid author name : ";
}
} while (word == false);
}
else if (y == 3)
{
cout << "Enter a category : ";
do {
cin >> g;
for (int i = 0; i < 5; i++) {
if (g == arr_book[i].category) {
cout << "\n\t\t\t" << arr_book[i].category << "\n";
cout << "ID :" << ' ' << arr_book[i].id << "\n";
cout << "Title : " << arr_book[i].title << "\n";
cout << "Publication year :" << ' ' <<
arr_book[i].puplication_year << "\n";
cout << "Price :" << ' ' << arr_book[i].price << "\n";
cout << "Quantity in stock :" << ' ' <<
arr_book[i].quantity << "\n";
cout << "\t\t\t__\n\n";
word = true;
break;
}
}
if (word == false)
{
cout << "Please try again and enter a valid category : ";
}
} while (word == false);
}
else
{
cout << "please try again and enter a valid number : ";
valid = false;
}
} while (valid == false);
}
void order(int u)
{
int h = 1;
cout << "____\n\n";
for (int i = 0; i < 10; i++)
{
if (arr_previousorder[i].customer_id == arr_customer[u].id)
{
cout << "\t\t\tOrder #" << h << "\n";
cout << "\nOrder date : " << arr_previousorder[i].order_date << "\tShip date: " << arr_previousorder[i].ship_date
<< "\n\n";
cout << "Book ID\t\tBook Name\n\n";
for (int k = 0; k < 35; k++)
{
if (arr_previousorder[i].book_name[k] == "Intro_to_cs" ||
arr_previousorder[i].book_name[k] == "Kitchen" || arr_previousorder[i].book_name[k] == "Math"
|| arr_previousorder[i].book_name[k] == "Calculus" || arr_previousorder[i].book_name[k] ==
"English")
cout << arr_previousorder[i].book_id[k] << "\t\t" <<
arr_previousorder[i].book_name[k] << "\n";
}
cout << "\nTotal price : " << arr_previousorder[i].total_price << "\n";
cout << "\t\t\t_______\n\n";
h++;
}
}
if (h == 1)
{
cout << "No previous orders founded\n";
 cout << "____\n\n";
 }
}
void signup(int& p, int& w)
{
cout << "\n\t\t\t" << " Sing up " << "\n";
cout << "\t\t\t_________\n\n";
cout << "\t\t Enter your data\n";
cout << "\nFirst name : ";
cin >> arr_customer[p].first_name;
cout << "\nLast name : ";
cin >> arr_customer[p].last_name;
cout << "\nPhone number : ";
cin >> arr_customer[p].phone;
cout << "\nEmail : ";
cin >> arr_customer[p].email;
cout << "\nAddress : ";
cin >> arr_customer[p].address;
cout << "\nUsername : ";
cin >> arr_customer[p].user_name;
cout << "\nPassword : ";
cin >> arr_customer[p].password;
cout << "\nRe_enter the password : ";
do {
cin >> arr_customer[p].password2;
if (arr_customer[p].password != arr_customer[p].password2)
{
cout << "This password doesn't match with the first password , Please try again : ";
}
} while (arr_customer[p].password != arr_customer[p].password2);
arr_customer[p].id = p + 7;
int y = p;
cout << "\n\t\t\t__\n\n";
cout << "\t\t Welcome " << arr_customer[p].first_name << " to our Bookshop \n\n";
p++;
cout << "1.Add new order\n";
cout << "2.Search for a book\n";
cout << "\nPlease enter your choice : ";
int d;
bool valid = true;
do {
cin >> d;
cout << "\n\t\t\t__\n\n";
if (d == 1)
{
add(y, w);
}
else if (d == 2)
{
search();
}
else
{
cout << "Pleas try again and Enter a valid number : ";
valid = false;
}
} while (valid == false);
}
void edit(int u)
{
 cout << "\n\tPlease enter your data again \n";
cout << "\nFirst name : ";
cin >> arr_customer[u].first_name;
cout << "\nLast name : ";
cin >> arr_customer[u].last_name;
cout << "\nPhone number : ";
cin >> arr_customer[u].phone;
cout << "\nEmail : ";
cin >> arr_customer[u].email;
cout << "\nAddress : ";
cin >> arr_customer[u].address;
cout << "\nUsername : ";
cin >> arr_customer[u].user_name;
cout << "\nPassword : ";
cin >> arr_customer[u].password;
cout << "\nRe_enter the password : ";
do {
cin >> arr_customer[u].password2;
if (arr_customer[u].password != arr_customer[u].password2)
{
cout << "This password doesn't match with the first password , Please try again : ";
}
} while (arr_customer[u].password != arr_customer[u].password2);
}
void login(int& w)
{
string k, l;
int u;
cout << "\n\t\t\t" << " Log in " << "\n";
cout << "\t\t\t________\n\n";
bool error = false;
do {
cout << "Please enter your user name : ";
cin >> k;
cout << "\nPlease enter your password : ";
cin >> l;
for (int i = 0; i < 10; i++)
{
if (k == arr_customer[i].user_name && l == arr_customer[i].password)
{
error = true;
u = i;
break;
}
}
if (error == false)
cout << "\nPlease enter a valid user name and password\n\n";
} while (error == false);
cout << "\n\n1.Add new order\n" << "2.Search for a book\n" << "3.Edit your data\n" <<
"4.Show previous orders\n";
cout << "\nPlease enter your choice :" << ' ';
int z;
bool valid = true;
do {
cin >> z;
if (z == 1)
{
add(u, w);
}
else if (z == 2)
{
search();
}
else if (z == 3)
{
edit(u);
}
else if (z == 4)
{
order(u);
}
else {
cout << "Pleas try again and Enter a valid number : ";
valid = false;
}
} while (valid == false);
}
int main()
{
arr_book[0].id = 1001;
arr_book[0].puplication_year = 1993;
arr_book[0].quantity = 5;
arr_book[0].title = "Math";
arr_book[0].category = "Education";
arr_book[0].author_name = "Ramy_Ahmed";
arr_book[0].price = 85;
arr_book[1].id = 1005;
arr_book[1].puplication_year = 2003;
arr_book[1].quantity = 6;
arr_book[1].title = "Kitchen";
arr_book[1].category = "Cooking";
arr_book[1].author_name = "AlShirbeny";
arr_book[1].price = 90;
arr_book[2].id = 12;
arr_book[2].puplication_year = 1997;
arr_book[2].quantity = 3;
arr_book[2].title = "Intro_to_cs";
arr_book[2].category = "Programming";
arr_book[2].author_name = "Ibrahim_Mamdouh";
arr_book[2].price = 250;
arr_book[3].id = 1070;
arr_book[3].puplication_year = 2000;
arr_book[3].quantity = 5;
arr_book[3].title = "English";
arr_book[3].category = "Language";
arr_book[3].author_name = "Mohamed_Ahmed";
arr_book[3].price = 100;
arr_book[4].id = 2050;
arr_book[4].puplication_year = 2001;
arr_book[4].quantity = 6;
arr_book[4].title = "Calculus";
arr_book[4].category = "Math";
arr_book[4].author_name = "Ahmed_Mohamed";
arr_book[4].price = 125;
arr_display[0].category = " Education ";
arr_display[0].title = " Math ";
arr_display[0].author_name = " Ramy_Ahmed ";
arr_display[1].category = " Cooking ";
arr_display[1].title = " Kitchen ";
arr_display[1].author_name = " AlShirbeny ";
arr_display[2].category = "Programming";
arr_display[2].title = "Intro_to_cs";
arr_display[2].author_name = "Ibrahim_Mamdouh";
arr_display[3].category = " Language ";
arr_display[3].title = " English ";
arr_display[3].author_name = " Mohamed_Ahmed ";
arr_display[4].category = " Math ";
arr_display[4].title = " Calculus ";
arr_display[4].author_name = " Ahmed_Mohamed ";
arr_customer[0].id = 55;
arr_customer[0].user_name = "Khaled_Ahmed";
arr_customer[0].password = "ka123456";
arr_customer[1].id = 17;
arr_customer[1].user_name = "Alaa_Mohamed";
arr_customer[1].password = "Am123456";
//khaled order 1
arr_previousorder[0].customer_id = 55;
arr_previousorder[0].book_name[0] = "Math";
arr_previousorder[0].book_id[0] = 1001;
arr_previousorder[0].order_date = "13 / 12 / 2017";
arr_previousorder[0].total_price = 85;
arr_previousorder[0].ship_date = " 16 / 12 / 2017";
//khaled order 2
arr_previousorder[1].customer_id = 55;
arr_previousorder[1].book_name[0] = "Kitchen";
arr_previousorder[1].book_id[0] = 1005;
arr_previousorder[1].total_price = 90;
arr_previousorder[1].order_date = "12 / 1 / 2019";
arr_previousorder[1].ship_date = "15 / 1 / 2019";
//alaa order 1
arr_previousorder[2].customer_id = 17;
arr_previousorder[2].book_name[0] = "Kitchen";
arr_previousorder[2].book_id[0] = 1005;
arr_previousorder[2].total_price = 90;
arr_previousorder[2].order_date = " 12 / 1 / 2019";
arr_previousorder[2].ship_date = "15 / 1 / 2019";
//alaa order 2
arr_previousorder[3].customer_id = 17;
arr_previousorder[3].order_date = " 13 / 12 / 2017";
arr_previousorder[3].book_name[0] = "calculus";
arr_previousorder[3].book_id[0] = 2050;
arr_previousorder[3].total_price = 125;
arr_previousorder[3].ship_date = "16 / 12 / 2017";
int x, p = 2, w = 4;
cout << "\t\t\t\tHome\n";
cout << "\t\t\t\t____\n\n";
cout << "1.log in\n" << "2.sign up\n";
cout << "\t\t\t__\n\n";
cout << "\nPlease enter your choice :" << ' ';
bool valid = true;
do {
cin >> x;
if (x == 1)
{
login(w);
}
else if (x == 2)
{
signup(p, w);
}
else
{
cout << "Pleas try again and Enter a valid number : ";
valid = false;
}
} while (valid == false);
bool again = true;
bool word;
do {
string homeagain;
cout << "\nDo you want to back to home? (yes/no) : ";
do {
cin >> homeagain;
if (homeagain == "yes") {
int x;
cout << "\n\t\t\t\tHome\n";
cout << "\t\t\t\t____\n\n";
cout << "1.log in\n" << "2.sign up\n";
cout << "\t\t\t__\n\n";
cout << "\nPlease enter your choice :" << ' ';
bool valid = true;
word = true;
do {
cin >> x;
if (x == 1)
{
login(w);
}
else if (x == 2)
{
signup(p, w);
}
else
{
cout << "Pleas try again and Enter a valid number :";
valid = false;
}
} while (valid == false);
}
else if (homeagain == "no")
{
cout << "\n\n\t\t\t\t\t\t_____________________";
cout << "\n\n\t\t\t\t\t\tThanks for your visit\n";
cout << "\t\t\t\t\t\t_____________________\n\n\n";
again = false;
word = true;
}
else
{
cout << "Please try again and enter a valid word : ";
word = false;
}
} while (word == false);
} while (again == true);
return 0;
}