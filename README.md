cocos2d-x's project template for qtcreator on *nix OS.

Install:
	1)copy all files to qtcreator's wizard directory
	eg:
		Qt_5.0.0/Tools/QtCreator/share/qtcreator/templates/wizards 
	or maybe:
		/usr/share/qtcreator/templates/wizards
	or :
		cd 'your qt wizards path' 

		git clone https://github.com/FlyingFishBird/cocos2d-x_2_0_4_templete_for_qtcreator.git
------------------------------------------------------------------------------------------
	2)set COCOS2D_ROOT environment variable
	eg:
		on ubuntu:
			open the .profile file in your home path
			and add this liked line at the end of the file:
			export COCOS2D_ROOT=$HOME/cocos2d-x-2-0-4/(your cocos2d-x path here)
------------------------------------------------------------------------------------------
	3)compile cocos2d-x's libs
	open a terminal and input these command :
	cd $COCOS2D_ROOT
	chmod +x make-all-linux-project.sh
	./make-all-linux-project.sh
	wait it finished
------------------------------------------------------------------------------------------
	4) and now you can open your QtCreator and selected the "none qt project item" ,then you 
	can find cocos2d-x's icon. Chose it and be happy !


