# Multiple projects in VS
You can use another project as a lib in Visual Studio.

## Engine
Project which will be used as a static lib.

## Game
Project which will use Engine as a lib.

## What to do
For this to happen, you need to make sure Game Configuration Type (at project setting) is .exe and Engine is .lib (static library).

After that, you have to go to Game project settings again and say that $(SolutionDir)Engine\src will be your additional include dir. With that, now you can use the header files from the Engine projects.

The last step is to go to Add > Reference in the Game project and add the Engine project as a reference. This is needed for the linking process, it will also builds Engine when necessary when you build the Game project.

Note: You could go to Linker settings and set the .lib file there in the input, but as the lib is already in our solution is way better to just set it as a reference, because it will update the name and do this compiling process that I mentioned.