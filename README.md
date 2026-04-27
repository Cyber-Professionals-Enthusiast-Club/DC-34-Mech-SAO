# About
This repository contains design files for the CPEC SAO pluggin modules for the 
CPEC DC 34 badge. 

# Structure 
- Artis_art/ directory for art files (.svg vector graphics)
- DC34-Mech-SAO/ directory for circuit board design files (kicad 6 project)
- libraries/ directory for kicad symbols and footprint files 

## Running
To view schematics, please run KiCad 6.0.11 or later. Change directory into 
DC-34-Mech-SAO and run
```
kicad DC-34-Mech-SAO.kicad_pro
```

Please note: please run kicad from the same directory as the .kicad_pro file 
is stored because the fp-lib-table and sym-lib-table use relative paths 
so that this project is portable between computers.

# Development Rules
- No spaces in file names or directories because this causes some tools to not 
beable to load the files
- Do not check in binary files because this bloats the repo, instead generate 
them with scripts from ASCII files and add the binary extension to the 
.gitignore file

# Associated Repos
Board firmware is developed in this repo: 
[ttps://github.com/eggsactly/DcC4-Mech-SAO-Plugin-Demo](https://github.com/eggsactly/DcC4-Mech-SAO-Plugin-Demo)


