v1.1
# Release Notes
- Added VR support
- Added Object Explorer
- Various small improvements
- Improved HPath debugger
- Added regular expressions and more in HPath
- foreach and other list functions added 

# Unreal 5.0 Quickstart

The files in this repository are targeted towards Unreal 5.0.3. 
- For Unreal 4.27 users, check out the [Unreal 4.27 Version of the plugin](https://github.com/GameDriver-io/Unreal-quickstart/)
- For Unreal 5.1 users, check out the [Unreal 5.1 Version of the plugin](https://github.com/GameDriver-io/Unreal-quickstart5.1)

## Concept

1. Gamedriver works by placing a small plugin in your game. That plugin communicates with our API, which you use to drive your game remotely.
2. Setting up the plugin requires moving two folders into their correct locations in your project and downloading the license to the correct location.
3. Once running, you will need to grab the API from our website and connect to the game using it. 

## What is in this repository

This repository contains a folder called "Managed" filled with .DLL files. It also contains a folder called "Plugin" containing a binary plugin. The gdio.unreal_api folder contains DLLs for use in your test program. 

- Managed
- Plugin
- gdio.unreal_api

## What you do next. 

1. Copy the entire "Managed" folder to the root of your Project. (If you already have a "Managed" folder, copy the contents to the inside of it.)
2. Copy the UnrealCLR folder inside the "Plugins" Directory to the "Plugins" folder in your project. (If it does not exist, create it).  
3. Place a valid license (gdio.license.txt) in the "Plugins" folder of your project.
4. Open the project and click run to see the GDIO panel displaying. (you can hide it if you want in configuration files)
5. Now you're ready to write external tests! You can connect to the running agent from your own test project using Gamedriver's unreal_api.

## Common issues

1. In order to simulate mouse clicks in the editor you will need to unset the "High DPI Support" flag in the editor preferences

![Screenshot of the editor preference window, to illustrate how to disable "High DPI Support" ](https://github.com/GameDriver-io/Unreal-quickstart/blob/main/img/EditorPreferences.png)

2. You may want to build clean for your project. Doing so will delete the precompiled binaries for the plugin. To rectify this copy the "Binary" and " Intermediate" folders from within the original plugin to your project's Plugin folder after making clean (or recopy the entire Plugin folder - if you prefer) 

## Summary

Your final Project will look like the following:

```dirtree
SomeProjectPath/
└─ Plugins/
   └─ UnrealCLR		<----- You should see the UnrealCLR folder here
   └─ gdio.license	<----- Place your license here
└─ Managed/
   └─ GameDriver	<----- You should see a GameDriver folder here 
└─ MyProject.uproject	
└─ MyProject.sln	

```


