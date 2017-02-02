---
title: Testing title
---

# Simulated Experiments

The Simulated Experiments consist of the following experiments:

1. loopback
2. massspring
3. truck
4. twomassspring
5. twotone

## Directories

### mlsimScripts_usr_local
The contents of `mlsimScripts_usr_local` is to be placed in: `/usr/local`.
It consists of:

1. experiment (used for real experiments with Ebox)
2. loopback
3. massspring
4. truck
5. twomassspring
6. twotone


### libec_usr_lib
The contents of `libec_usr_lib` is to be placed in: `/usr/lib`. It consists of a set of libraries for Ethercat, where

* `libec.so`   `libec.so.1`      `libec.so.1.0`    -> experiment
* `libec_0.so`  `libec_0.so.1`    `libec_0.so.1.0`  -> loopback
* `libec_1.so`  `libec_1.so.1`    `libec_1.so.1.0`  -> massspring
* `libec_2.so`  `libec_2.so.1`    `libec_2.so.1.0`  -> truck
* `libec_3.so`  `libec_3.so.1`    `libec_3.so.1.0`  -> twomassspring
* `libec_4.so`  `libec_4.so.1`    `libec_4.so.1.0`  -> twotone

### Matlab_sim_exp
The contents of `Matlab_sim_exp` is to be placed in: `/home/ebox/svn/trunk/E-box/Apps/sim_exp/`. It consists of 5 Matlab scripts. These scripts that have to be added to the path in Matlab in order for the simulated experiments to be loaded independent of the current working directory. The scripst are:

1. `/home/ebox/svn/trunk/E-box/Apps/sim_exp/loopback.m`
2. `/home/ebox/svn/trunk/E-box/Apps/sim_exp/massspring`
4. `/home/ebox/svn/trunk/E-box/Apps/sim_exp/truck`
5. `/home/ebox/svn/trunk/E-box/Apps/sim_exp/twomassspring`
6. `/home/ebox/svn/trunk/E-box/Apps/sim_exp/twotone`


# Ebox Experiments vs Simulated Experiments

## Ebox Experiments
The Ebox experiments require an Ebox to be connected through the ethernet cable of the computer. The Operating System (OS) has to have given the name of the ethernet port either `eth0`, `eth1` or `eth2`. If named differently (e.g. `eth4`, the computer won't connect to the Ebox. The name of the ethernet port can be manually modified in the file `/etc/udev/rules.d/70-persistent-net.rules`. When changing the name, the OS has to be restarted. There is a Bash script that modifies the ethernet port name automatically if the name is not within the set {`eth0`, `eth1`, `eth2`}. This script is located at `/home/ebox/svn/trunk/src/E-box/eth_port/eth_check.sh`. *Note that for the RobotArm the ethernet port name has to be eth2.*

The script that loads the experiment is the Matlab script `qs.m` located at `/home/ebox/svn/trunk/E-box/Apps/E-Scope/guiv25/qs.m`. This file has to be added to the Matlab path in order to be exectuted from any directory in Matlab. The `qs.m` file loads the quadscope guim. Prior to doing this, it goes through the following steps:

1. Checks if a file exists called "sim_indicator" (this is used for the simulated experiments).
2. If the file doesn't exist:
  1. The experiment *mlsim* script is compiled to be in experiment mode. This is done by running `/usr/local/simexp/experiment/mlsim > /dev/null 2>&1`.
  2. The name of the Ethernet port is verified and changed if not in the set{eth0, eth1, eth2}. If the ethernet port name is changed, the OS has to be restarted.
  3. The quadscope gui is .
  
## Simulated Experiments
The simulated experiments don't require an Ebox to be connected to the computer. The simulated experiments can however be loaded if an Ebox is connected. The simulated experiments are executed from the Matlab scripts within `/home/ebox/svn/trunk/E-box/Apps/sim_exp/` (see **Matlab_sim_exp** above). The directory has to be added to the Matlab path for the scripts to be executed from any directory.

The simulated scripts are executed by running one of the following scripts from the Command Line: `loopback.m`, `massspring.m`, `truck.m`, `twomassspring.m` or `twotone.m`. These scripts go through the following steps:

1. Create a file called "sim_indicator" in the directory `/home/ebox/svn/trunk/src/E-box/Apps/sim_exp`. The `qs.m` script checks if this file exists to verify if the experiment mode has to be compiled or not.
2. Compile the simulated experiment executable, e.g. `/usr/local/simexp/loopback/mlsim > /dev/null 2>&1`.
3. Run the `qs.m` file. As the "sim_indicator" file is present, the experiment mode executable will not be compiled.
4. Remove the "sim_indicator" file.



