# carla_ros_bridge
Enables a bridge with a two-way communication between ROS and CARLA Simulator.

OS: Ubuntu 18.04 / Windows 10
version: 0.9.8

## carla_ros_bridge for Windows

Be sure that you had also download Carla on Ubuntu, we'll need the `.egg` file while bridging


1. Connet to share file on Windows
2. Copy your .egg file under Ubuntu to Carla under Windows
    - Here I'm using python 2.7 to run on Ubuntu, so I just copy the correspond .egg file
    
        ![](https://i.imgur.com/NqGJQ8L.png)

3. Install ROS bridge
    ```=ubuntu
    # After installing ROS Melodic and CARLA 0.9.8
    # For ROS Kinetic, change "melodic" instances for "kinetic" and the key server to 9BE2A0CDC0161D6C

    # Add the repository
    sudo apt-key adv --keyserver keyserver.ubuntu.com --recv-keys 81061A1A042F527D &&
    sudo add-apt-repository "deb [arch=amd64 trusted=yes] http://dist.carla.org/carla-ros-bridge-melodic/ bionic main"

    # Install the ROS bridge
    sudo apt update &&
    sudo apt install carla-ros-bridge-melodic

    # The ROS bridge will be in the /opt/ folder
    ```

4. Change IP to the host you want to connect
- Change the directory to `carla_ros_bridge`
For me: `/opt/carla-ros-bridge/melodic/share/carla_ros_bridge/launch`
- Revise launch file `carla_ros_bridge.launch`
    ```=launch
    <launch>
        <!-- YC -->
        <!-- change the host ip that you want to connect -->
      <arg name='host' default='192.168.0.105'/>
        <!-- YC -->
      <arg name='port' default=''/>
      <arg name='rosbag_fname' default=''/>
      <arg name='synchronous_mode' default=''/>
      <arg name='synchronous_mode_wait_for_vehicle_control_command' default=''/>
      <arg name='fixed_delta_seconds' default=''/>
      <arg name='town' default=''/>
    ```
5. Implement
- For Windows 10
    1. Execute `CarlaUE4.exe`
    2. Execute python file 
        ex:`python manual_control.py`
    
- For Ubuntu
    - if you want run only simulator on Ubuntu, run `./CarlaUE4.sh` in `Carla_0.9.8` folder 
    - to change the scene of the map
    `python config.py --map Town02`
    - launch carla ros bridge
        ```=ubuntu
        export PYTHONPATH=$PYTHONPATH:~/Carla_0.9.8/PythonAPI/carla/dist/carla-0.9.8-py2.7-linux-x86_64.egg

        # Add the source for melodic bridge
        source /opt/carla-ros-bridge/melodic/setup.bash

        # Launch ROS bridge launchfile to test
        roslaunch carla_ros_bridge carla_ros_bridge.launch
        ```
6. Launch Autoware
![](https://i.imgur.com/0ztIlNB.png)
![](https://i.imgur.com/2pzn1Qt.png)


## reference
Downlaod Carla
- Windows: https://blog.csdn.net/xianglianghe/article/details/105510833
- Linux: http://carla.org/2020/03/09/release-0.9.8/

ROS bridge: https://wellbay.cc/thread-200827.htm
Share files between Ubuntu and Windows 10: https://www.c-sharpcorner.com/article/how-to-share-files-between-ubuntu-and-windows-10/
