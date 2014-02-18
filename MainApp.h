
#ifndef _MAINAPP_H
#define _MAINAPP_H

#include <gtkmm.h>
#include <iostream>
#include <vector>


class DiaryApp : public Gtk::Window
{

public:
	DiaryApp();
	virtual ~DiaryApp();

	void OnButtonClicked();

protected:
	Gtk::Grid		mContainer;
	Gtk::Entry		mName;
	Gtk::Label		mLblName;
	Gtk::Button		mBtnEnter;
};

#endif // _MAINAPP_H

