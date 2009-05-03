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

#ifndef HEADER_JOYSTICK_DEVICE_PROPERTIES_HPP
#define HEADER_JOYSTICK_DEVICE_PROPERTIES_HPP

#include <gtkmm/window.h>
#include <gtkmm/box.h>
#include <gtkmm/label.h>
#include <gtkmm/buttonbox.h>
#include <gtkmm/button.h>
#include <gtkmm/notebook.h>
#include <gtkmm/frame.h>

#include "joystick_device_test_tab.hpp"

class JoystickDeviceProperties : public Gtk::Window
{
private:
  Gtk::VBox  vbox;
  Gtk::Label label;

  Gtk::Notebook notebook;
  JoystickDeviceTestTab test_tab;
  
  Gtk::HButtonBox buttonbox;
  Gtk::Button     close_button;

public:
  JoystickDeviceProperties(const std::string& name);

  void on_close();

private:
  JoystickDeviceProperties(const JoystickDeviceProperties&);
  JoystickDeviceProperties& operator=(const JoystickDeviceProperties&);
};

#endif

/* EOF */