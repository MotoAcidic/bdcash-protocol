
Debian
====================
This directory contains files used to package bdcashd/bdcash-qt
for Debian-based Linux systems. If you compile bdcashd/bdcash-qt yourself, there are some useful files here.

## bdcash: URI support ##


bdcash-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install bdcash-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your bdcashqt binary to `/usr/bin`
and the `../../share/pixmaps/bdcash128.png` to `/usr/share/pixmaps`

bdcash-qt.protocol (KDE)

