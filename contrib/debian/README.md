
Debian
====================
This directory contains files used to package heliod/helio-qt
for Debian-based Linux systems. If you compile heliod/helio-qt yourself, there are some useful files here.

## helio: URI support ##


helio-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install helio-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your helio-qt binary to `/usr/bin`
and the `../../share/pixmaps/helio128.png` to `/usr/share/pixmaps`

helio-qt.protocol (KDE)

