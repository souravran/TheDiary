#include<MainApp.h>

using namespace std;


DiaryApp::DiaryApp()
: mContainer()
, mName()
, mLblName()
, mBtnEnter()
{
	set_size_request(600,400);
	set_border_width(10);


	add(mContainer);
	mContainer.set_border_width(20);
	mContainer.set_margin_top(50);
	mContainer.set_row_homogeneous(true);
	mContainer.set_column_homogeneous(true);

	mName.set_hexpand(false);
	mName.set_vexpand(false);
	mName.set_valign(Gtk::ALIGN_CENTER);
	mContainer.attach(mName,2,1,1,1);

	mLblName.set_hexpand(true);
	mLblName.set_vexpand(false);
	mLblName.set_valign(Gtk::ALIGN_CENTER);
	mLblName.set_text("The Name field is empty !");
	mContainer.attach(mLblName,2,2,1,1);

	mBtnEnter.set_label("Click Me");
	mBtnEnter.set_hexpand(false);
	mBtnEnter.set_vexpand(false);
	mBtnEnter.set_valign(Gtk::ALIGN_CENTER);
	mContainer.attach(mBtnEnter,2,3,1,1);
	mBtnEnter.signal_clicked().connect(sigc::mem_fun(*this,&DiaryApp::OnButtonClicked));


	show_all();
}


DiaryApp::~DiaryApp() {
}


void DiaryApp::OnButtonClicked() {
	std::string name = "The name you have entered is : ";
	name += mName.get_text();
	mLblName.set_text(name);
}



int main (int argc, char *argv[]) {

	Gtk::Main kit(argc, argv);
	DiaryApp app;
	Gtk::Main::run(app);

    return 0;
}
