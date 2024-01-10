# This consists of files in order to upload to Vaman_PYGMY
but to be named as ARM-advanced risc machine 
## Steps to follow:
1) Open termux and follow installation steps from **vaman/installation/termuxdebian/termuxdebian_arm.txt**
2) open main.c to edit the code to your preferences. The file main.c is available in **/data/data/com.termux/files/home/arm-examples/blink/src/main.c**
3) After making necessary modifications, **save** your file and exit.
4) To execute and **generate bin** file: Move to path **blink/GCC_Project**
5) Type **make -j4** to generate bin file.
6) **Path** for blink.bin **GCC_Project/output/bin/blink.bin**
7) **In PC Open terminal** and be in the home directory:
   Perform these installations<br>
   #Download the pygmy-sdk<br>
   cd /data/data/com.termux/files/home/ <br>
   git clone --recursive https://github.com/optimuslogic/pygmy-dev<br>

   #If Tinyfpga is not installed <br>
  git clone --recursive https://github.com/QuickLogic-Corp/TinyFPGA-Programmer-Application.git<br>
  sudo apt install python3-pip<br>
  sudo pip3 install tinyfpgab pyserial<br>
  sudo reboot<br>
8) Transfer the dot bin file to the pc along with the files that are included in the git.**Make sure that all the files are in the same location example :home**
9) **Update flash.sh:** sudo python3 /home/**Username**/TinyFPGA-Programmer-Application/tinyfpga-programmer-gui.py --port /dev/ttyACM0  --appfpga top.bin --m4app  blink.bin --mode m4-fpga --reset. (Replace Username with your pc's username)
10) To get the pc's username type **whoami** in terminal, After editing save the file and exit.
11) Now **connect the vaman to pc**.
12) Make sure that vaman is in **Download mode**, i.e Green Led must be blinking.
13) **To enable Download Mode**: Press **RST** button once and then press **USR** button twice, this should do the job.
14) The code gets Successfully Booted.
15) **Error:** CLI mode, No port Found - Kindly change the cable, board and retry

ON THE FURTHER NOTICE 

*1. What is ARM and its Importance?**

ARM, which stands for Advanced RISC Machine, is a family of Reduced Instruction Set Computing (RISC) architectures for computer processors. Originally developed by Acorn Computers in the 1980s, ARM has evolved into one of the most widely used and important architectures in the world of embedded systems and mobile devices. Its importance lies in its efficiency, low power consumption, and widespread adoption, making it a standard choice for a variety of applications.

**2. Components Required for ARM Physical Connections:**

To set up ARM-based physical connections, several components are essential:

   a. **ARM Processor Board:** This is the central processing unit that contains the ARM architecture. It is the brain of the system and dictates the overall performance.

   b. **Memory Modules:** RAM (Random Access Memory) and ROM (Read-Only Memory) are crucial components for storing temporary data and the firmware, respectively.

   c. **Peripherals:** Various peripherals such as input/output interfaces, timers, and communication ports are necessary for the ARM processor to interact with external devices.

   d. **Power Supply:** ARM-based systems require a stable power supply to function properly. This can be provided through batteries, power adapters, or other suitable sources.

**3. Connections to be Given with Arduino UNO:**

Integrating ARM with Arduino UNO involves establishing proper connections:

   a. **Serial Communication:** Establish serial communication between ARM and Arduino UNO using UART (Universal Asynchronous Receiver-Transmitter) to facilitate data exchange.

   b. **Power Supply:** Ensure that both ARM and Arduino UNO share a common ground and provide the necessary power supply to both systems.

   c. **Input/Output Connections:** Connect digital and analog pins between ARM and Arduino UNO to enable communication and data transfer.

   d. **Programming Interface:** Utilize a suitable programming interface to upload code to both ARM and Arduino UNO for seamless operation.

**4. Applications of ARM:**

ARM architecture finds applications across diverse fields due to its efficiency and versatility:

   a. **Mobile Devices:** ARM processors power the majority of smartphones and tablets, offering a balance between performance and power efficiency.

   b. **Embedded Systems:** ARM is extensively used in embedded systems for applications such as automotive control systems, industrial automation, and IoT devices.

   c. **Consumer Electronics:** ARM-based chips are found in various consumer electronics, including smart TVs, cameras, and audio devices, due to their low power consumption and high performance.

   d. **Medical Devices:** ARM processors are employed in medical devices for data processing, monitoring, and control applications, where reliability and efficiency are crucial.

   e. **Networking Equipment:** ARM architecture is used in networking equipment like routers and switches, providing efficient packet processing capabilities.

In summary, ARM's significance lies in its efficiency, versatility, and widespread adoption, making it a key player in various industries, from mobile technology to embedded systems and beyond. Its seamless integration with platforms like Arduino UNO further enhances its applicability in diverse projects.
