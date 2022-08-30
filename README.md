# Lucys Lonely Holidays (Hack of Super Mario 64)

- This repo contains the Full Source Code of Lucys Lonely Holidays
- This Repo doesnt contain any Original SM64 Assets all Assets have to be obtained via an Original SM64 Rom
- All Modified/Custom Assets are contained via a Folder called `CustomAssets`

## Installation & Building

Install & Build Instructions can be found here: [sm64](https://github.com/n64decomp/sm64)

If you've successfully set up the sm64 repo clone this repo the same way and copy the content inside the `CustomAssets` Folder to the Root of this Repo (Say Yes incase there is a Merge/Replace Question by your File Manager) and do `make` afterwards your Game should've compiled sucessfully
and you should see a LLH.<VERSION>.z64 file inside your `build` folder. (<VERSION> is usually `us` unless you've changed it inside the `MakeFile`)

## Project Structure
	
	LucysLonelyHolidays
	├── CustomAssets: Includes all Modified/Custom Made Assets
	├── actors: object behaviors, geo layout, and display lists
	├── asm: handwritten assembly code, rom header
	│   └── non_matchings: asm for non-matching sections
	├── assets: animation and demo data
	│   ├── anims: animation data
	│   └── demos: demo data
	├── bin: C files for ordering display lists and textures
	├── build: output directory
	├── data: behavior scripts, misc. data
	├── doxygen: documentation infrastructure
	├── enhancements: example source modifications
	├── include: header files and Patch Configuration Files
	├── levels: level scripts, geo layout, and display lists
	├── lib: SDK library code
	├── rsp: audio and Fast3D RSP assembly code
	├── sound: sequences, sound samples, and sound banks
	├── src: C source code for game
	│   ├── audio: audio code
	│   ├── buffers: stacks, heaps, and task buffers
	│   ├── engine: script processing engines and utils
	│   ├── game: behaviors and rest of game source
	│   ├── goddard: Mario intro screen
	│   └── menu: title screen and file, act, and debug level selection menus
	├── text: dialog, level names, act names
	├── textures: skybox and generic texture data
	└── tools: build tools
