
Debian
====================
This directory contains files used to package apollond/bdcash-qt
for Debian-based Linux systems. If you compile apollond/bdcash-qt yourself, there are some useful files here.

## bdcash: URI support ##


bdcash-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install bdcash-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your bdcash-qt binary to `/usr/bin`
and the `../../share/pixmaps/apollon128.png` to `/usr/share/pixmaps`

bdcash-qt.protocol (KDE)

