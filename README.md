# SCARA Plotter

One arm SCARA plotter, using stepper motors and STM32.

This project consist of a STM32 firmware that interprets G-code coming from Serial port and moves the arm using the stepper motors, and a python script that reads a G-code file from the PC and sends the instructions via Serial to the STM32.

Youtube demo:

[![SCARA Plotter](https://img.youtube.com/vi/raUs05iYUmI/0.jpg)](https://youtu.be/raUs05iYUmI)


This repo includes code and STL files.

Files and directories description:
- command_sender.py: reads the G-code file commands.tap and sends it via Serial port.
- Core: STM32 code.
- STL files: 3D printing models.