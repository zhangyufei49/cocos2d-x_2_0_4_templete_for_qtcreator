cocos2d-x's project template for qtcreator on *nix OS.

How to use it
=================
* Clone project template
	git clone https://github.com/FlyingFishBird/cocos2d-x_2_0_4_templete_for_qtcreator.git

* Copy subdirs cocos2d_v2_template and cocos2d_v3_template to to qtcreator's wizard directory
at home data (maybe path does not exist, so just create it):
	~/.config/QtProject/qtcreator/templates/wizards
at system data:
	/usr/share/qtcreator/templates/wizards

* Set COCOS2D_ROOT environment variable. In case of ubuntu:
	open the .profile file in your home path
	and add similar line at the end of the file:
	export COCOS2D_ROOT=$HOME/your-path-to-cocos2d/

* If you're using cocos2dx version 2.x, also compile cocos2d-x's libs
	open a terminal and input these command :
	cd $COCOS2D_ROOT
	chmod +x make-all-linux-project.sh
	./make-all-linux-project.sh
	wait it finished

* Now you can open your QtCreator, press Ctrl+N, select the "Non-Qt project" category and look for cocos2d-x's icon. Choose it and enjoy coding!
