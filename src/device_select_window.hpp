/*
**  Windstille - A Sci-Fi Action-Adventure Game
**  Copyright (C) 2009 Ingo Ruhnke <grumbel@gmx.de>
**
**  This program is free software: you can redistribute it and/or modify
**  it under the terms of the GNU General Public License as published by
**  the Free Software Foundation, either version 3 of the License, or
**  (at your option) any later version.
**  
**  This program is distributed in the hope that it will be useful,
**  but WITHOUT ANY WARRANTY; without even the implied warranty of
**  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
**  GNU General Public License for more details.
**  
**  You should have received a copy of the GNU General Public License
**  along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef HEADER_DEVICE_SELECT_WINDOW_HPP
#define HEADER_DEVICE_SELECT_WINDOW_HPP

#include <gtkmm/window.h>
#include <gtkmm/box.h>
#include <gtkmm/notebook.h>
#include <gtkmm/button.h>
#include <gtkmm/buttonbox.h>

#include "joystick_device_tab.hpp"

class DeviceSelectWindow : public Gtk::Window
{
private:
  Gtk::VBox       vbox;
  Gtk::Notebook   notebook;
  Gtk::HButtonBox buttonbox;
  Gtk::Button     close_button;

  JoystickDeviceTab jsdev_tab;

public:
  DeviceSelectWindow();
  ~DeviceSelectWindow();

  void on_close();
private:
  DeviceSelectWindow(const DeviceSelectWindow&);
  DeviceSelectWindow& operator=(const DeviceSelectWindow&);
};

#endif

/* EOF */