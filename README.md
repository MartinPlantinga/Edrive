# Edrive Files
This repository contains all files required to run the Edrive on a Linux OS. This has been tested on Ubuntu 14.04 and Lubuntu 14.04.

## Requirements
The `install.sh` Bash script installs all required packages.

### Matlab Installation
Although Matlab installation is initiated from the `install.sh` script, it is better to install Matlab manually from a terminal. The `install.sh` script can be used as a guideline for this. The steps are as follows:


1. Install the NFS client package:
`sudo apt-get install rpcbind nfs-common`
2. Create a new directory to mount the TU/e server on: 
`mkdir /software`
3. Mount the TU/e server to the created directory:
`mount hercules.tue.nl:/vol/hercules/software/linux /software`
4. Go to the directory where Matlab is located:
`cd /software/matlab-2014b`
5. Install the software:
`./install`

All toolboxes can be installed, but if storage space is an issue, the following packages can be removed:
* Aerospace Blockset
* Aerospace Toolbox
* Bioinformatics
* Communication Systems
* Computer Vision
* Econometrics
* Financial Instruments
* Financial Toolbox
* Fuzzy Logic
* Global Optimization
* Image Acquisition
* Image Processing
* Neural Network
* Parallel Computing
* SimBiology
* SimElectronics
* SimEvents
* SimHydraulics
* SimMechanics
* SimPowerSystems
* SimRF
* Wavelet Toolbox

### Matlab Activation
Once Matlab has been installed it has to be activated. The procedure is as follows:

1. In a terminal become super user by typing `sudo su`.
2. Open the Matlab activation procedure by typing `matlab`.
3. Select: *Activate automatically using the Internet*.
4. Under *Log in to my MathWorks Account* enter the Matlab credentials.
5. Clik *next* under *License Selection*.
6. Type **root** under *Login Name*.
7. Click *Confirm* and then *Finish*.

### Running Matlab
Matlab has to be executed as Root user. The steps are as follows:

1. In a terminal become super user by tying `sudo su`.
2. Open Matlab by typing `matlab`.


## Edrive Files
The `ebox` directory of this repository has to be put in the Linux `/home/` directory.

## Simulated Experiments
The scripts that are under `Simulated Experiments` have to be added. More information on how to do this can be found in the `Simulated Experiments` `README.md`.
