#!/bin/bash
if [ "$EUID" -ne 0 ]
then
	echo "Please run this program as root by typing \"sudo ./INSTALL.sh\""
	exit
else
	sudo apt-get install g++
	g++ main.cpp -o wcibt
	mv wcibt /bin/
	cp wcibt.desktop /usr/share/applications/
	cp wcibt.png /usr/share/icons/
	echo "Installation Complete. You may start buttering"
fi
